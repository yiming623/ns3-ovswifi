/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

//
// This is an illustration of how one could use virtualization techniques to
// allow running applications on virtual machines talking over simulated
// networks.
//
// The actual steps required to configure the virtual machines can be rather
// involved, so we don't go into that here.  Please have a look at one of
// our HOWTOs on the nsnam wiki for more details about how to get the 
// system confgured.  For an example, have a look at "HOWTO Use Linux 
// Containers to set up virtual networks" which uses this code as an 
// example.
//
// The configuration you are after is explained in great detail in the 
// HOWTO, but looks like the following:
//
//  +----------+                           +----------+
//  | virtual  |                           | virtual  |
//  |  Linux   |                           |  Linux   |
//  |   Host   |                           |   Host   |
//  |          |                           |          |
//  |   eth0   |                           |   eth0   |
//  +----------+                           +----------+
//       |                                      |
//  +----------+                           +----------+
//  |  Linux   |                           |  Linux   |
//  |  Bridge  |                           |  Bridge  |
//  +----------+                           +----------+
//       |                                      |
//  +------------+                       +-------------+
//  | "tap-left" |                       | "tap-right" |
//  +------------+                       +-------------+
//       |           n0            n1           |
//       |       +--------+    +--------+       |
//       +-------|  tap   |    |  tap   |-------+
//               | bridge |    | bridge |
//               +--------+    +--------+
//               |  wifi  |    |  wifi  |
//               +--------+    +--------+
//                   |             |
//                 ((*))         ((*))
//
//                       Wifi LAN
//
//                        ((*))
//                          |
//                     +--------+
//                     |  wifi  |
//                     +--------+
//                     | access |
//                     |  point |
//                     +--------+
//
#include <iostream>
#include <fstream>

#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/mobility-module.h"
#include "ns3/wifi-module.h"
#include "ns3/tap-bridge-module.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE("TapWifiVirtualMachineExample");

static void PrintPositions(std::string s, NodeContainer sta) {
	std::cout << "t = " << Simulator::Now().GetMicroSeconds() / 1000000.0 << " "
			<< s << std::endl;
//	for (uint32_t i = 0; i < staNodes.GetN(); i++) {
	Ptr<MobilityModel> mob = sta.Get(0)->GetObject<MobilityModel>();
	Vector pos = mob->GetPosition();
	std::cout << ":" << "idd = " << sta.Get(0)->GetId() << "  " << pos.x << ", "
			<< pos.y << std::endl;
//	}
	Simulator::Schedule(Seconds(1), (&PrintPositions), s, sta);
}

//static void SetPosition(Ptr<Node> node, Vector position) {
//	Ptr<MobilityModel> mobility = node->GetObject<MobilityModel>();
//	mobility->SetPosition(position);
//}

static void SetPositionVelocity(Ptr<Node> node, Vector position,
		Vector velocity) {
	Ptr<ConstantVelocityMobilityModel> mobility = node->GetObject<
			ConstantVelocityMobilityModel>();
	mobility->SetPosition(position);
	mobility->SetVelocity(velocity);
}

void CourseChanged(std::string context, Ptr<const MobilityModel> model) {
	Vector position = model->GetPosition();
	NS_LOG_UNCOND(
			"At time " << Simulator::Now ().GetSeconds () << " " << context << " x = " << position.x << ", y = " << position.y);
//	std::cout << "At time " << Simulator::Now ().GetSeconds () << " " << context << " x = " << position.x << ", y = " << position.y << std::endl;
}

int main(int argc, char *argv[]) {
	CommandLine cmd;
	cmd.Parse(argc, argv);

	//
	// We are interacting with the outside, real, world.  This means we have to
	// interact in real-time and therefore means we have to use the real-time
	// simulator and take the time to calculate checksums.
	//
	GlobalValue::Bind("SimulatorImplementationType",
			StringValue("ns3::RealtimeSimulatorImpl"));
	GlobalValue::Bind("ChecksumEnabled", BooleanValue(true));

	//
	// Create two ghost nodes.  The first will represent the virtual machine host
	// on the left side of the network; and the second will represent the VM on
	// the right side.
	//
	NodeContainer nodes;
	nodes.Create(2);

	//
	// We're going to use 802.11 A so set up a wifi helper to reflect that.
	//
	WifiHelper wifi = WifiHelper::Default();
	wifi.SetStandard(WIFI_PHY_STANDARD_80211b);
//  wifi.SetRemoteStationManager ("ns3::ConstantRateWifiManager", "DataMode", StringValue ("OfdmRate54Mbps"));

	//
	// No reason for pesky access points, so we'll use an ad-hoc network.
	//

	//
	// Configure the physcial layer.
	//
	YansWifiChannelHelper wifiChannel = YansWifiChannelHelper::Default();
	YansWifiPhyHelper wifiPhy = YansWifiPhyHelper::Default();
	wifiPhy.SetPcapDataLinkType(YansWifiPhyHelper::DLT_IEEE802_11_RADIO);
	wifiPhy.SetChannel(wifiChannel.Create());

	//
	// Install the wireless devices onto our ghost nodes.
	//
	NqosWifiMacHelper wifiMac = NqosWifiMacHelper::Default();
	wifiMac.SetType("ns3::AdhocWifiMac");
	NetDeviceContainer deviceAP = wifi.Install(wifiPhy, wifiMac, nodes.Get(0));
	wifiMac.SetType("ns3::AdhocWifiMac");
	NetDeviceContainer deviceSTA = wifi.Install(wifiPhy, wifiMac, nodes.Get(1));

	//
	// We need location information since we are talking about wifi, so add a
	// constant position to the ghost nodes.
	//
	MobilityHelper mobility;

	Ptr<ListPositionAllocator> positionAlloc = CreateObject<
			ListPositionAllocator>();
	positionAlloc->Add(Vector(0.0, 0.0, 0.0));
	positionAlloc->Add(Vector(1.0, 0.0, 0.0));
	mobility.SetPositionAllocator(positionAlloc);
	mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
	mobility.Install(nodes.Get(0));
	mobility.SetMobilityModel("ns3::ConstantVelocityMobilityModel");
	mobility.Install(nodes.Get(1));

	//
	// Use the TapBridgeHelper to connect to the pre-configured tap devices for
	// the left side.  We go with "UseLocal" mode since the wifi devices do not
	// support promiscuous mode (because of their natures0.  This is a special
	// case mode that allows us to extend a linux bridge into ns-3 IFF we will
	// only see traffic from one other device on that bridge.  That is the case
	// for this configuration.
	//
	TapBridgeHelper tapBridge;
	tapBridge.SetAttribute("Mode", StringValue("UseLocal"));
	tapBridge.SetAttribute("DeviceName", StringValue("aptap"));
	tapBridge.Install(nodes.Get(0), deviceAP.Get(0));

	//
	// Connect the right side tap to the right side wifi device on the right-side
	// ghost node.
	//
	tapBridge.SetAttribute("DeviceName", StringValue("statap"));
	tapBridge.Install(nodes.Get(1), deviceSTA.Get(0));

	// enable wifi packet capture in NS-3 to sniffer wifi protocol packets.
	wifiPhy.EnablePcapAll("wifi");

	std::ostringstream ossta;
	ossta << "/NodeList/" << nodes.Get(1)->GetId()
			<< "/$ns3::MobilityModel/CourseChange";
	Config::Connect(ossta.str(), MakeCallback(&CourseChanged));
	SetPositionVelocity(nodes.Get(1), Vector(0.0, 0.0, 0.0),
				(Vector(5.0, 0.0, 0.0)));
	Simulator::Schedule(Seconds(0), (&PrintPositions), "ap0", nodes.Get(1));
	//
	// Run the simulation for ten minutes to give the user time to play around
	//
	Simulator::Stop(Seconds(6000.));
	Simulator::Run();
	Simulator::Destroy();
}

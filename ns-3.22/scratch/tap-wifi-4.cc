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

	//Sync the simulation time to real time.
	GlobalValue::Bind("SimulatorImplementationType",
			StringValue("ns3::RealtimeSimulatorImpl"));
	GlobalValue::Bind("ChecksumEnabled", BooleanValue(true));

	NodeContainer nodes;
	nodes.Create(5);

	//
	// We're going to use 802.11b so set up a wifi helper to reflect that.
	//

	WifiHelper wifi = WifiHelper::Default();
	wifi.SetStandard(WIFI_PHY_STANDARD_80211b);

	//
	// Configure the physcial layer.
	//

	YansWifiChannelHelper wifiChannel = YansWifiChannelHelper::Default();
	YansWifiPhyHelper wifiPhy = YansWifiPhyHelper::Default();

	// Configure packet sniffer in pcap.
	wifiPhy.SetPcapDataLinkType(YansWifiPhyHelper::DLT_IEEE802_11_RADIO);

	// Configure default wifi channel.
	wifiPhy.SetChannel(wifiChannel.Create());
	wifi.SetRemoteStationManager ("ns3::ArfWifiManager");
	//
	// Install the wireless devices onto our ghost nodes.
	//
	NqosWifiMacHelper wifiMac = NqosWifiMacHelper::Default();

	std::ostringstream oss;
	oss << "wifi-default";
	Ssid ssid = Ssid(oss.str());
	// Use Ad-Hoc Network as Wifi MAC Protocol
	wifiMac.SetType("ns3::ApWifiMac",
			    "Ssid", SsidValue (ssid));
//			    "BeaconGeneration", BooleanValue (true),
//			    "BeaconInterval", TimeValue (Seconds (5)));
	wifiPhy.Set("ChannelNumber", UintegerValue(1));
	NetDeviceContainer deviceAP0 = wifi.Install(wifiPhy, wifiMac, nodes.Get(0));
	NetDeviceContainer deviceAP1 = wifi.Install(wifiPhy, wifiMac, nodes.Get(1));
	NetDeviceContainer deviceAP2 = wifi.Install(wifiPhy, wifiMac, nodes.Get(2));
	NetDeviceContainer deviceAP3 = wifi.Install(wifiPhy, wifiMac, nodes.Get(3));
	wifiMac.SetType("ns3::StaWifiMac","Ssid", SsidValue (ssid));
//            "ScanType", EnumValue (StaWifiMac::ACTIVE),
//            "ActiveProbing", BooleanValue(true));
	wifiPhy.Set("ChannelNumber", UintegerValue(1));
	NetDeviceContainer deviceSTA = wifi.Install(wifiPhy, wifiMac, nodes.Get(4));

	//
	// add constant position to the AP nodes.
	//

	MobilityHelper mobility;

	Ptr<ListPositionAllocator> positionAlloc = CreateObject<
			ListPositionAllocator>();
	positionAlloc->Add(Vector(100.0, 0.0, 0.0));
	positionAlloc->Add(Vector(600.0, 0.0, 0.0));
	positionAlloc->Add(Vector(1100.0, 0.0, 0.0));
	positionAlloc->Add(Vector(1600.0, 0.0, 0.0));
	positionAlloc->Add(Vector(1.0, 0.0, 0.0));
	mobility.SetPositionAllocator(positionAlloc);

	//AP nodes has constant position
	mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
	mobility.Install(nodes.Get(0));
	mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
	mobility.Install(nodes.Get(1));
	mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
	mobility.Install(nodes.Get(2));
	mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
	mobility.Install(nodes.Get(3));

	//Mobile nodes has constant velocity
	mobility.SetMobilityModel("ns3::ConstantVelocityMobilityModel");
	mobility.Install(nodes.Get(4));

	//Define tap bridge for all wifi nodes
	TapBridgeHelper tapBridge;
	tapBridge.SetAttribute("Mode", StringValue("UseLocal"));
	tapBridge.SetAttribute("DeviceName", StringValue("aptap0"));
	tapBridge.Install(nodes.Get(0), deviceAP0.Get(0));
	tapBridge.SetAttribute("DeviceName", StringValue("aptap1"));
	tapBridge.Install(nodes.Get(1), deviceAP1.Get(0));
	tapBridge.SetAttribute("DeviceName", StringValue("aptap2"));
	tapBridge.Install(nodes.Get(2), deviceAP2.Get(0));
	tapBridge.SetAttribute("DeviceName", StringValue("aptap3"));
	tapBridge.Install(nodes.Get(3), deviceAP3.Get(0));
	//
	// Connect the mobile side tap to the AP side wifi device on the APs'
	// ghost node.
	//
	tapBridge.SetAttribute("DeviceName", StringValue("statap"));
	tapBridge.Install(nodes.Get(4), deviceSTA.Get(0));
	wifiPhy.EnablePcap("wifi",nodes);

	//print position movement in mobility model
	std::ostringstream ossta;
	ossta << "/NodeList/" << nodes.Get(4)->GetId()
			<< "/$ns3::MobilityModel/CourseChange";
	Config::Connect(ossta.str(), MakeCallback(&CourseChanged));

	//print position movement in mobility model
	SetPositionVelocity(nodes.Get(4), Vector(0.0, 0.0, 0.0),
				(Vector(5.0, 0.0, 0.0)));
	Simulator::Schedule(Seconds(0), (&PrintPositions), "ap0", nodes.Get(4));
	//
	// Run the simulation for ten minutes to give the user time to play around
	//
	Simulator::Stop(Seconds(6000.));
	Simulator::Run();
	Simulator::Destroy();
}

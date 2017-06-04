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
// Topology uses 3 APs on channels 1, 6, 11 placed on a line at 0m, 150m, 300m.
// They all have bridged CSMA interfaces that go to a L2 switch. A server also has a
// link to the bridge. The mobile starts with 10m/s at 0m next to AP0, associates on channel 1
// and starts receiving UDP data from the server till second 18.5. At 185m signal to AP0 is
// quite weak and station scans all 11 channels, receiving Probe Responses from AP1 and AP2.
// It chooses AP1 and stays on channel 6 till time 33.8s, and here only AP2 responds. Station uses
// that link till second 47.5 (175m from AP2).
//
// pcap dumps are:  wifi-5-1(station), wifi-0-2(AP0), wifi-1-2(AP1)
//
//    192.168.0.2      10m/s
//      --------     -------->            -------->           -------->       600m
//      WIFI STA@0m
//      --------
//        ((*))
//                ((*))                       ((*))                ((*))
//              +---------+                +---------+          +----------+
//       .      | AP0(ch1)|@0m             | AP1(ch6)|@150m     | AP2(ch11)|@300m
//      /|\     |  BRIDGE |                |   BRIDGE|          |    BRIDGE|
//       |      +---------+                +---------+          +----------+
//       |            |                        |                   |
//       |            | CSMA                   | CSMA              | CSMA
//       |            |                        |                   |
//       |        +---+-----+                  |                   |
//       |        | Switch  |------------------+                   |
//       |        |         |--------------------------------------+
//       |        +---+-----+
//       |            | CSMA
//       |        +---+-----+
//      UDP       | Server  | 192.168.1.1
//                +---------+
// dragos,niculescu at cs,pub,ro
#include "ns3/core-module.h"
#include "ns3/mobility-module.h"
#include "ns3/applications-module.h"
#include "ns3/wifi-module.h"
#include "ns3/network-module.h"
#include "ns3/csma-module.h"
#include "ns3/internet-module.h"
#include "ns3/bridge-helper.h"
#include "ns3/config-store-module.h"
#include "ns3/tap-bridge-module.h"
#include <vector>
#include <stdint.h>
#include <sstream>
#include <fstream>

using namespace ns3;

static void PrintPositions(std::string s, NodeContainer sta) {
	std::cout << "t = " << Simulator::Now().GetMicroSeconds() / 1000000.0 << " "
			<< s << std::endl;
//	for (uint32_t i = 0; i < staNodes.GetN(); i++) {
		Ptr<MobilityModel> mob = sta.Get(0)->GetObject<MobilityModel>();
		Vector pos = mob->GetPosition();
		std::cout << ":" << "idd = " << sta.Get(0)->GetId() <<  "  " << pos.x << ", " << pos.y << std::endl;
//	}
	Simulator::Schedule(Seconds(1), (&PrintPositions), s, sta);
}

static void SetPosition(Ptr<Node> node, Vector position) {
	Ptr<MobilityModel> mobility = node->GetObject<MobilityModel>();
	mobility->SetPosition(position);
}

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
	uint32_t nWifis = 1;
	uint32_t nStas = 1;
//	bool sendIp = true;
	bool writeMobility = true;
	bool pcap = true;

	CommandLine cmd;
//	cmd.AddValue("nWifis", "Number of wifi networks", nWifis);
//	cmd.AddValue("nStas", "Number of stations per wifi network", nStas);
//	cmd.AddValue("SendIp", "Send Ipv4 or raw packets", sendIp);
//	cmd.AddValue("writeMobility", "Write mobility trace", writeMobility);
//	cmd.AddValue("pcap", "Write pcap traces", pcap);
	cmd.Parse(argc, argv);
	GlobalValue::Bind ("SimulatorImplementationType", StringValue ("ns3::RealtimeSimulatorImpl"));
	// NODES
	NodeContainer apNodes;
	apNodes.Create(nWifis);
	Ptr<Node> serverNode = CreateObject<Node>(), switchNode =
			CreateObject<Node>();
//	std::vector<NodeContainer> staNodes;

	// DEVICES
//	NetDeviceContainer *csmaDevices = new NetDeviceContainer[nWifis + 1]; // APs + serv
	Ipv4InterfaceContainer backboneInterfaces;
	std::vector<NetDeviceContainer> staDevices;
	std::vector<NetDeviceContainer> apDevices;
	std::vector<Ipv4InterfaceContainer> staInterfaces;
	std::vector<Ipv4InterfaceContainer> apInterfaces;

	InternetStackHelper stack;
//	CsmaHelper csma, csma2;
//	Ipv4AddressHelper ip;
//	ip.SetBase("192.168.3.0", "255.255.255.0");

	stack.Install(apNodes);
//	stack.Install(serverNode);
//	stack.Install(switchNode);

	// reduce csma queues if needed
	// Config::SetDefault("ns3::DropTailQueue::MaxPackets", UintegerValue(10));

//	for (uint32_t i = 0; i < nWifis; i++) {
//		csmaDevices[i] = csma.Install(
//				NodeContainer(apNodes.Get(i), switchNode));
//	}
//	if (pcap)
//		csma.EnablePcapAll("csma", true);

//	csmaDevices[nWifis] = csma2.Install(NodeContainer(serverNode, switchNode));
//	if (pcap)
//		csma2.EnablePcapAll("csma", true);

//	BridgeHelper switch0;
//	NetDeviceContainer switchDev;
//	for (uint32_t i = 0; i < nWifis + 1; i++) {
//		switchDev.Add(csmaDevices[i].Get(1));
//	}
//	switch0.Install(switchNode, switchDev);
//
//	Ipv4InterfaceContainer serverInterface;
//	serverInterface = ip.Assign(csmaDevices[nWifis].Get(0));
	YansWifiPhyHelper wifiPhy = YansWifiPhyHelper::Default();
	wifiPhy.SetPcapDataLinkType(YansWifiPhyHelper::DLT_IEEE802_11_RADIO);

	YansWifiChannelHelper wifiChannel = YansWifiChannelHelper::Default();
	//wifiChannel.SetPropagationDelay("ns3::ConstantSpeedPropagationDelayModel");
	//wifiChannel.AddPropagationLoss("ns3::LogDistancePropagationLossModel");
	wifiPhy.SetChannel(wifiChannel.Create());
	//wifiPhy.Set("ChannelNumber", UintegerValue(36));

	NodeContainer sta;
	NetDeviceContainer staDev;
	sta.Create(nStas);
	stack.Install(sta);
	MobilityHelper mobility;
	Ipv4InterfaceContainer staInterface;
//	stack.Install(sta);
	mobility.SetMobilityModel("ns3::ConstantVelocityMobilityModel");
	mobility.Install(sta.Get(0));
//	std::ostringstream ossta;
//	for (uint32_t c = 0; c < nStas; c++) {
//		ossta << "/NodeList/" << sta.Get(c)->GetId()
//				<< "/$ns3::MobilityModel/CourseChange";
//		Config::Connect(ossta.str(), MakeCallback(&CourseChanged));
//	}
	WifiHelper wifi = WifiHelper::Default();
	wifi.SetStandard(WIFI_PHY_STANDARD_80211g);
	NqosWifiMacHelper wifiMac = NqosWifiMacHelper::Default();

	std::ostringstream oss;
	oss << "wifi-default";
	Ssid ssid = Ssid(oss.str());
	wifiMac.SetType("ns3::StaWifiMac","Ssid", SsidValue (ssid),
                     "ScanType", EnumValue (StaWifiMac::ACTIVE),
	"ActiveProbing", BooleanValue(true));
	//keykeykey
	wifiPhy.Set("ChannelNumber", UintegerValue(1 /*+ (ap % 3) * 5*/));
	staDev = wifi.Install(wifiPhy, wifiMac, sta.Get(0));
//	staInterface = ip.Assign(staDev);

//	for (uint32_t ap = 0; ap < nWifis; ++ap) {
//		std::cout << ap << ap << " ** " << ap << ap << std::endl;
		NetDeviceContainer apDev;
//		Ipv4InterfaceContainer apInterface;
		BridgeHelper bridge;

		mobility.SetPositionAllocator("ns3::GridPositionAllocator", "MinX",
				DoubleValue(0.0), "MinY", DoubleValue(0.0), "DeltaX",
				DoubleValue(5.0), "DeltaY", DoubleValue(5.0), "GridWidth",
				UintegerValue(1), "LayoutType", StringValue("RowFirst"));
		// setup the AP.
		mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
		mobility.Install(apNodes.Get(0));
		wifiMac.SetType ("ns3::ApWifiMac",
		    "Ssid", SsidValue (ssid),
		    "BeaconGeneration", BooleanValue (true),
		    "BeaconInterval", TimeValue (Seconds (5)));

		wifiPhy.Set("ChannelNumber", UintegerValue(1));
		apDev = wifi.Install(wifiPhy, wifiMac, apNodes.Get(0));
//		NetDeviceContainer bridgeDev;
//		bridgeDev = bridge.Install(apNodes.Get(0),
//				NetDeviceContainer(apDev, csmaDevices[0].Get(0)));

		apDevices.push_back(apDev);
		staDevices.push_back(staDev);

		SetPosition(apNodes.Get(0), Vector(0 * 150.0, 0.0, 0.0));

//		InternetStackHelper internetAP;
//		internetAP.Install (apNodes);
//
		Ipv4AddressHelper ipv4AP;
		ipv4AP.SetBase ("10.1.1.0", "255.255.255.0");
		Ipv4InterfaceContainer interfacesLeft = ipv4AP.Assign (apDev);

//		Ipv4AddressHelper ipv4STA;
//		ipv4STA.SetBase ("10.1.2.0", "255.255.255.0");
		Ipv4InterfaceContainer interfacesRight = ipv4AP.Assign (staDev);
		Ptr<Ipv4> ipv4a = apNodes.Get(0)->GetObject<Ipv4>();
		Ptr<Ipv4> ipv4s = sta.Get(0)->GetObject<Ipv4>();
		Ipv4InterfaceAddress iaddra = ipv4a->GetAddress (1,0);
		Ipv4InterfaceAddress iaddrs = ipv4s->GetAddress (1,0);
		std::cout << iaddra.GetLocal() << " * " << iaddrs.GetLocal () << std::endl;

		TapBridgeHelper tapBridge;
		tapBridge.SetAttribute ("Mode", StringValue ("ConfigureLocal"));
		tapBridge.SetAttribute ("DeviceName", StringValue ("aptap"));
		tapBridge.Install(apNodes.Get(0), apDev.Get(0));

		tapBridge.SetAttribute ("DeviceName", StringValue ("statap"));
		tapBridge.Install(sta.Get(0), staDev.Get(0));
//	}
	// first node moves to the left
	SetPositionVelocity(sta.Get(0), Vector(0.0, 0.0, 0.0),
			(Vector(0.0, 0.0, 0.0)));
	//  SetPositionVelocity (staNodes[1].Get(0),  Vector (100.0, 9.0, 0.0), (Vector(-1.0, 0.0, 0.0)));

//	Simulator::Schedule(Seconds(0), (&PrintPositions), "ap0", sta);

	if (writeMobility) {
		AsciiTraceHelper ascii;
		MobilityHelper::EnableAsciiAll(
				ascii.CreateFileStream("wifi-wired-bridging.mob"));
	}

	if (pcap) {
		wifiPhy.EnablePcapAll("wifi");
	}

//	UdpServerHelper srv(9);
//	ApplicationContainer srv_apps = srv.Install(sta.Get(0)); //server = UDP recv
//	srv_apps.Start(Seconds(0.5));
//	srv_apps.Stop(Seconds(120.0));
//
//	UdpClientHelper client(staInterface.GetAddress(0), 9); // dest: IP,port
//	client.SetAttribute("MaxPackets", UintegerValue(64707202));
//	client.SetAttribute("Interval", TimeValue(Time("0.01")));
//	client.SetAttribute("PacketSize", UintegerValue(1450));
//	ApplicationContainer cln_apps = client.Install(serverNode); //cli = UDP send
//	cln_apps.Start(Seconds(0.5));
//	cln_apps.Stop(Seconds(120.0));

	// Trace routing tables
//	Ipv4GlobalRoutingHelper g;
//	Ptr<OutputStreamWrapper> routingStream = Create<OutputStreamWrapper>(
//			"routes.txt", std::ios::out);
//	g.PrintRoutingTableAllAt(Seconds(4.0), routingStream);
//	// print config
//	Config::SetDefault("ns3::ConfigStore::Filename",
//			StringValue("output-attributes.txt"));
//	Config::SetDefault("ns3::ConfigStore::FileFormat", StringValue("RawText"));
//	Config::SetDefault("ns3::ConfigStore::Mode", StringValue("Save"));
//	ConfigStore outputConfig2;
//	outputConfig2.ConfigureDefaults();
//	outputConfig2.ConfigureAttributes();
	std::cout<<"terminated"<<std::endl;
	Simulator::Stop(Seconds(36000.));
	Simulator::Run();
	Simulator::Destroy();
}

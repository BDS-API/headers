#pragma once

#include <string>
#include "../raknet/SystemAddress.h"
#include <memory>


class ServerCommunicationInterface {

public:
    void create(NetworkAddress const&); // _ZN28ServerCommunicationInterface6createERK14NetworkAddress
    ServerCommunicationInterface(std::unique_ptr<RakNet::TCPInterface>, RakNet::SystemAddress); // _ZN28ServerCommunicationInterfaceC2ESt10unique_ptrIN6RakNet12TCPInterfaceESt14default_deleteIS2_EENS1_13SystemAddressE
    void communicate(std::string const&, Json::Value const&); // _ZN28ServerCommunicationInterface11communicateERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    ~ServerCommunicationInterface(); // _ZN28ServerCommunicationInterfaceD2Ev
//  void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::string const&); //TODO: incomplete function definition // _ZN28ServerCommunicationInterface21sendLatencyTimepointsENSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEES4_RKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void sendServerStarted(); // _ZN28ServerCommunicationInterface17sendServerStartedEv
//  void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition // _ZN28ServerCommunicationInterface18sendServerTickTimeENSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEE
    void sendBandwidthMetric(unsigned long, unsigned long, unsigned long, unsigned long, std::string const&); // _ZN28ServerCommunicationInterface19sendBandwidthMetricEmmmmRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};

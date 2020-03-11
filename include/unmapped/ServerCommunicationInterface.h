#pragma once

#include "../raknet/TCPInterface.h"
#include "../json/Value.h"
#include <ratio>
#include <memory>
#include "../raknet/SystemAddress.h"
#include "./NetworkAddress.h"
#include <string>


class ServerCommunicationInterface {

public:

    void create(NetworkAddress const&);
    ServerCommunicationInterface(std::unique_ptr<RakNet::TCPInterface, std::default_delete<RakNet::TCPInterface>>, RakNet::SystemAddress);
    void communicate(std::string const&, Json::Value const&);
    ~ServerCommunicationInterface();
//  void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::string const&); //TODO: incomplete function definition
    void sendServerStarted();
//  void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    void sendBandwidthMetric(unsigned long, unsigned long, unsigned long, unsigned long, std::string const&);
};

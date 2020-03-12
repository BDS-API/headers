#pragma once

#include "../raknet/TCPInterface.h"
#include <string>
#include <ratio>
#include "../json/Value.h"
#include "../raknet/SystemAddress.h"
#include <memory>
#include "NetworkAddress.h"


class ServerCommunicationInterface {

public:
    void create(NetworkAddress const&);
    void communicate(std::string const&, Json::Value const&);
    ~ServerCommunicationInterface();
    void sendBandwidthMetric(unsigned long, unsigned long, unsigned long, unsigned long, std::string const&);
//  void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::string const&); //TODO: incomplete function definition
    void sendServerStarted();
//  void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    ServerCommunicationInterface(std::unique_ptr<RakNet::TCPInterface>, RakNet::SystemAddress);
};

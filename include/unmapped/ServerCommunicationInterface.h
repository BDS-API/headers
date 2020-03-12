#pragma once

#include <string>
#include "../raknet/SystemAddress.h"
#include <memory>


class ServerCommunicationInterface {

public:
    void sendBandwidthMetric(unsigned long, unsigned long, unsigned long, unsigned long, std::string const&);
//  void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::string const&); //TODO: incomplete function definition
//  void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    void communicate(std::string const&, Json::Value const&);
    ~ServerCommunicationInterface();
    void sendServerStarted();
    ServerCommunicationInterface(std::unique_ptr<RakNet::TCPInterface>, RakNet::SystemAddress);
    void create(NetworkAddress const&);
};

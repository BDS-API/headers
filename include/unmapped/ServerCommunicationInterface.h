#pragma once

#include "../raknet/TCPInterface"
#include "../json/Value"
#include "../raknet/SystemAddress"


class ServerCommunicationInterface {

public:

    void create(NetworkAddress const&);
    ServerCommunicationInterface(std::unique_ptr<RakNet::TCPInterface, std::default_delete<RakNet::TCPInterface>>, RakNet::SystemAddress);
    void communicate(std::string const&, Json::Value const&);
    void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::string const&);
    void sendServerStarted();
    void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void sendBandwidthMetric(unsigned long, unsigned long, unsigned long, unsigned long, std::string const&);
};

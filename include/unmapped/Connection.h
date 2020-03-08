#pragma once

#include "../bedrock/network/NetworkPeer"
#include "../bedrock/Scheduler"
#include "../bedrock/network/packet/observer/PacketObserver"


using namespace NetworkHandler;

class Connection {

public:

    void update();
    void setChannelPaused(unsigned int, bool);
    void receivePacket(std::string &);
    Connection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>, std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>, bool, PacketObserver *, Scheduler &);
    bool isChannelPaused(unsigned int)const;
};

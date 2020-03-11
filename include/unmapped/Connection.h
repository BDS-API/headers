#pragma once

#include "../bedrock/network/NetworkPeer.h"
#include "../bedrock/Scheduler.h"
#include <ratio>
#include <memory>
#include "../bedrock/network/packet/observer/PacketObserver.h"
#include "./NetworkIdentifier.h"
#include <string>


namespace NetworkHandler {

class Connection {

public:

    void update();
    void setChannelPaused(unsigned int, bool);
    void receivePacket(std::string &);
//  Connection(NetworkIdentifier const&, std::shared_ptr<NetworkPeer>, std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l>>>, bool, PacketObserver *, Scheduler &); //TODO: incomplete function definition
    bool isChannelPaused(unsigned int)const;
    ~Connection();
};

}
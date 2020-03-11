#pragma once

#include "../bedrock/network/packet/Packet.h"
#include "./PacketHeader.h"


class NetworkPacketEventCoordinator {

public:

    ~NetworkPacketEventCoordinator();
    NetworkPacketEventCoordinator();
    void sendPacketReceivedFrom(PacketHeader const&, Packet const&);
};

#pragma once

#include "PacketHeader.h"
#include "../bedrock/network/packet/Packet.h"


class NetworkPacketEventCoordinator {

public:
    NetworkPacketEventCoordinator();
    ~NetworkPacketEventCoordinator();
    void sendPacketReceivedFrom(PacketHeader const&, Packet const&);
};

#pragma once

#include "../bedrock/network/packet/Packet"


class NetworkPacketEventCoordinator {

public:

    NetworkPacketEventCoordinator(void);
    void sendPacketReceivedFrom(PacketHeader const&, Packet const&);
};

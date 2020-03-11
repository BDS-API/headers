#pragma once

#include "../bedrock/network/packet/Packet.h"
#include "./PacketHeader.h"


class NetworkPacketEventListener {

public:
    virtual ~NetworkPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    NetworkPacketEventListener();
};

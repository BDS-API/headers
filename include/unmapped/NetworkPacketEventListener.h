#pragma once

#include "PacketHeader.h"
#include "../bedrock/network/packet/Packet.h"


class NetworkPacketEventListener {

public:
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
    ~NetworkPacketEventListener();
    NetworkPacketEventListener();
};

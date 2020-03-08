#pragma once

#include "../bedrock/network/packet/Packet"


class NetworkPacketEventListener {

public:
    NetworkPacketEventListener::~NetworkPacketEventListener()
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    NetworkPacketEventListener(void);
};

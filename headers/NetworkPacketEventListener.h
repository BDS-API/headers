#pragma once

class NetworkPacketEventListener {

    virtual void NetworkPacketEventListener::~NetworkPacketEventListener();
    virtual void NetworkPacketEventListener::~NetworkPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
}

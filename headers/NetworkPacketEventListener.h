#pragma once

class NetworkPacketEventListener {

    virtual void ~NetworkPacketEventListener();
    virtual void ~NetworkPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
}

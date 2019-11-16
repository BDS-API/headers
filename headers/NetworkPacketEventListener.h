#pragma once

class NetworkPacketEventListener {

    virtual ~NetworkPacketEventListener();
    virtual ~NetworkPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
}

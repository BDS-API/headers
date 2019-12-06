#pragma once

class NetworkPacketEventListener {

public:
    virtual ~NetworkPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    void NetworkPacketEventListener(void);
};

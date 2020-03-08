#pragma once



class NetworkPacketEventListener {

public:
    virtual NetworkPacketEventListener::~NetworkPacketEventListener();
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);

    NetworkPacketEventListener(void);
};

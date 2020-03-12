#pragma once



class NetworkPacketEventListener {

public:
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&);
    ~NetworkPacketEventListener();
    NetworkPacketEventListener();
};

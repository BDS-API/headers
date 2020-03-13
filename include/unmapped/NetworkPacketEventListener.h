#pragma once



class NetworkPacketEventListener {

public:
    ~NetworkPacketEventListener(); // _ZN26NetworkPacketEventListenerD2Ev
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&); // _ZN26NetworkPacketEventListener20onPacketReceivedFromERK12PacketHeaderRK6Packet
    NetworkPacketEventListener(); // _ZN26NetworkPacketEventListenerC2Ev
};

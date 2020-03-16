#pragma once



class NetworkPacketEventListener {

public:
    virtual ~NetworkPacketEventListener(); // _ZN26NetworkPacketEventListenerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onPacketReceivedFrom(PacketHeader const&, Packet const&); // _ZN26NetworkPacketEventListener20onPacketReceivedFromERK12PacketHeaderRK6Packet
    NetworkPacketEventListener(); // _ZN26NetworkPacketEventListenerC2Ev
};

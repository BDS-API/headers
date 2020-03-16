#pragma once



class PacketSender {

public:
    virtual ~PacketSender(); // _ZN12PacketSenderD2Ev
    virtual void __fake_function0(); // fake
    void sendToPrimaryClient(NetworkIdentifier const&, Packet const&); // _ZN12PacketSender19sendToPrimaryClientERK17NetworkIdentifierRK6Packet
    PacketSender(unsigned char); // _ZN12PacketSenderC2Eh
};

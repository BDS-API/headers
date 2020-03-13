#pragma once



class PacketSender {

public:
    ~PacketSender(); // _ZN12PacketSenderD2Ev
    void sendToPrimaryClient(NetworkIdentifier const&, Packet const&); // _ZN12PacketSender19sendToPrimaryClientERK17NetworkIdentifierRK6Packet
    PacketSender(unsigned char); // _ZN12PacketSenderC2Eh
};

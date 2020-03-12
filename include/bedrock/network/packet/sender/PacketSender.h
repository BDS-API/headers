#pragma once



class PacketSender {

public:
    ~PacketSender();
    void sendToPrimaryClient(NetworkIdentifier const&, Packet const&);
    PacketSender(unsigned char);
};

#pragma once

class PacketSender {

public:
    virtual PacketSender::~PacketSender();

    void sendToPrimaryClient(NetworkIdentifier const&, Packet const&);
    PacketSender(unsigned char);
};

#pragma once

class PacketSender {

public:
    virtual ~PacketSender();

    void sendToPrimaryClient(NetworkIdentifier const&, Packet const&);
    void PacketSender(unsigned char);
};

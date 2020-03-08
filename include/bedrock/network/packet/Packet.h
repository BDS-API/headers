#pragma once

#include "../NetEventCallback"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/NetworkIdentifier"


class Packet {

public:
    Packet::~Packet()
    virtual void disallowBatching()const;

    void getReliability()const;
    void getCompressible()const;
    void writeWithHeader(unsigned char, BinaryStream &)const;
    void readNoHeader(ReadOnlyBinaryStream &, unsigned char const&);
    void handle(NetworkIdentifier const&, NetEventCallback &, std::shared_ptr<Packet> &);
    Packet(void);
    void getClientSubId()const;
    Packet(Packet const&);
    void setClientSubId(unsigned char);
    Packet(Compressibility);
    void setReliable();
    void setReliableOrdered();
};

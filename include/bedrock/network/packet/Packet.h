#pragma once

#include <memory>


class Packet {

public:
    ~Packet();
    virtual void disallowBatching()const;
    void setClientSubId(unsigned char);
    void setReliableOrdered();
    void handle(NetworkIdentifier const&, NetEventCallback &, std::shared_ptr<Packet> &);
    void readNoHeader(ReadOnlyBinaryStream &, unsigned char const&);
//  Packet(Compressibility); //TODO: incomplete function definition
    Packet(Packet const&);
    void getCompressible()const;
    void setReliable();
    void writeWithHeader(unsigned char, BinaryStream &)const;
    void getClientSubId()const;
    void getReliability()const;
    Packet();
};

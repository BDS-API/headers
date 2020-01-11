#pragma once

class Packet {

public:
    virtual Packet::~Packet();
    virtual void disallowBatching(void)const;

    void getReliability(void)const;
    void getCompressible(void)const;
    void writeWithHeader(unsigned char, BinaryStream &)const;
    void readNoHeader(ReadOnlyBinaryStream &, unsigned char const&);
    void handle(NetworkIdentifier const&, NetEventCallback &, std::shared_ptr<Packet> &);
    Packet(void);
    void getClientSubId(void)const;
    Packet(Packet const&);
    void setClientSubId(unsigned char);
    Packet(Compressibility);
    void setReliable(void);
    void setReliableOrdered(void);
};

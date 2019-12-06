#pragma once

class Packet {

public:
    virtual ~Packet();
    virtual void disallowBatching(void)const;

    void getReliability(void)const;
    void getCompressible(void)const;
    void writeWithHeader(unsigned char, BinaryStream &)const;
    void readNoHeader(ReadOnlyBinaryStream &, unsigned char const&);
    void handle(NetworkIdentifier const&, NetEventCallback &, std::shared_ptr<Packet> &);
    void Packet(void);
    void getClientSubId(void)const;
    void Packet(Packet const&);
    void setClientSubId(unsigned char);
    void Packet(Compressibility);
    void setReliable(void);
    void setReliableOrdered(void);
};

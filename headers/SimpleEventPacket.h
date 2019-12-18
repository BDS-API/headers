#pragma once

class SimpleEventPacket : Packet {

public:
    virtual ~SimpleEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SimpleEventPacket(void);
    void SimpleEventPacket(SimpleEventPacket::Subtype const&);
    void setSubtype(SimpleEventPacket::Subtype);
    void getSubtype(void)const;
};

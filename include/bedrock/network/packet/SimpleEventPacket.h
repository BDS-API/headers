#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SimpleEventPacket : Packet {

public:
    virtual SimpleEventPacket::~SimpleEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SimpleEventPacket(void);
    SimpleEventPacket(SimpleEventPacket::Subtype const&);
    void setSubtype(SimpleEventPacket::Subtype);
    void getSubtype(void)const;
};

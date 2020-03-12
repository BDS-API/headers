#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SimpleEventPacket : Packet {

public:
    ~SimpleEventPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    void getSubtype()const;
//  SimpleEventPacket(SimpleEventPacket::Subtype const&); //TODO: incomplete function definition
    SimpleEventPacket();
//  void setSubtype(SimpleEventPacket::Subtype); //TODO: incomplete function definition
};

#pragma once

#include <string>
#include "Packet.h"


class SimpleEventPacket : Packet {

public:
    ~SimpleEventPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    virtual std::string getName()const;
//  SimpleEventPacket(SimpleEventPacket::Subtype const&); //TODO: incomplete function definition
//  void setSubtype(SimpleEventPacket::Subtype); //TODO: incomplete function definition
    void getSubtype()const;
    SimpleEventPacket();
};

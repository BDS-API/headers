#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class SimpleEventPacket : Packet {

public:
    virtual ~SimpleEventPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SimpleEventPacket();
//  SimpleEventPacket(SimpleEventPacket::Subtype const&); //TODO: incomplete function definition
//  void setSubtype(SimpleEventPacket::Subtype); //TODO: incomplete function definition
    void getSubtype()const;
};

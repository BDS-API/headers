#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class CompletedUsingItemPacket : Packet {

public:
    CompletedUsingItemPacket::~CompletedUsingItemPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CompletedUsingItemPacket(void);
    CompletedUsingItemPacket(short, int);
};

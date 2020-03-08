#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class CompletedUsingItemPacket : Packet {

public:
    virtual CompletedUsingItemPacket::~CompletedUsingItemPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CompletedUsingItemPacket(void);
    CompletedUsingItemPacket(short, int);
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class CompletedUsingItemPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    ~CompletedUsingItemPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    CompletedUsingItemPacket();
    CompletedUsingItemPacket(short, int);
};

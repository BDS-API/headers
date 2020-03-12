#pragma once

#include <string>
#include "Packet.h"


class CompletedUsingItemPacket : Packet {

public:
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~CompletedUsingItemPacket();
    CompletedUsingItemPacket(short, int);
    CompletedUsingItemPacket();
};

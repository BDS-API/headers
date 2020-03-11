#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class CompletedUsingItemPacket : Packet {

public:
    virtual ~CompletedUsingItemPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CompletedUsingItemPacket();
    CompletedUsingItemPacket(short, int);
};

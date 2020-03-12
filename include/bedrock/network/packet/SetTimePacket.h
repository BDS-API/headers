#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SetTimePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~SetTimePacket();
    virtual std::string getName()const;
    SetTimePacket(int);
    SetTimePacket();
};

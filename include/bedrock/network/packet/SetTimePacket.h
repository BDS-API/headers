#pragma once

#include <string>
#include "Packet.h"


class SetTimePacket : Packet {

public:
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~SetTimePacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    SetTimePacket(int);
    SetTimePacket();
};

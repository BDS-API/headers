#pragma once

#include <string>
#include "Packet.h"


class SetHealthPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~SetHealthPacket();
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    SetHealthPacket();
    SetHealthPacket(int);
};

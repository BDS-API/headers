#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class SetHealthPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~SetHealthPacket();
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    SetHealthPacket();
    SetHealthPacket(int);
};

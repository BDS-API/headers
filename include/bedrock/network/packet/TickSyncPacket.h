#pragma once

#include <string>
#include "Packet.h"


class TickSyncPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~TickSyncPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    TickSyncPacket(long);
    TickSyncPacket();
};

#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class TickSyncPacket : Packet {

public:
    TickSyncPacket::~TickSyncPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TickSyncPacket(void);
    TickSyncPacket(long);
};

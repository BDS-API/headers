#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class TickSyncPacket : Packet {

public:
    virtual TickSyncPacket::~TickSyncPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    TickSyncPacket(void);
    TickSyncPacket(long);
};

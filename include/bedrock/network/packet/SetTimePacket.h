#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetTimePacket : Packet {

public:
    virtual SetTimePacket::~SetTimePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetTimePacket(void);
    SetTimePacket(int);
};

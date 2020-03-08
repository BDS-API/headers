#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class SetHealthPacket : Packet {

public:
    virtual SetHealthPacket::~SetHealthPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    SetHealthPacket(void);
    SetHealthPacket(int);
};

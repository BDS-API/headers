#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class LecternUpdatePacket : Packet {

public:
    virtual LecternUpdatePacket::~LecternUpdatePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LecternUpdatePacket(void);
};

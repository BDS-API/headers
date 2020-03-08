#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class LecternUpdatePacket : Packet {

public:
    virtual LecternUpdatePacket::~LecternUpdatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LecternUpdatePacket(void);
};

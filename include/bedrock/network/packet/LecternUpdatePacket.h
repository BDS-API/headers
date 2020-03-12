#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class LecternUpdatePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~LecternUpdatePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    LecternUpdatePacket();
};

#pragma once

#include <string>
#include "Packet.h"


class LecternUpdatePacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~LecternUpdatePacket();
    LecternUpdatePacket();
};

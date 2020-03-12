#pragma once

#include <string>
#include "Packet.h"


class RemoveObjectivePacket : Packet {

public:
    virtual std::string getName()const;
    ~RemoveObjectivePacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    RemoveObjectivePacket();
    RemoveObjectivePacket(Objective const&);
};

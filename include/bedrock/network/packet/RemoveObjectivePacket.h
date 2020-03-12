#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/Objective.h"
#include "Packet.h"


class RemoveObjectivePacket : Packet {

public:
    ~RemoveObjectivePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    RemoveObjectivePacket(Objective const&);
    RemoveObjectivePacket();
};

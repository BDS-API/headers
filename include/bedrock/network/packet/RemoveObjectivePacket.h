#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../../unmapped/Objective.h"
#include <string>


class RemoveObjectivePacket : Packet {

public:
    virtual ~RemoveObjectivePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RemoveObjectivePacket();
    RemoveObjectivePacket(Objective const&);
};

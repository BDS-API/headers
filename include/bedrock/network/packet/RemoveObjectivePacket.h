#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/Objective"
#include "../../io/ReadOnlyBinaryStream"


class RemoveObjectivePacket : Packet {

public:
    virtual RemoveObjectivePacket::~RemoveObjectivePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RemoveObjectivePacket(void);
    RemoveObjectivePacket(Objective const&);
};

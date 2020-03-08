#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/MoveActorAbsoluteData"
#include "../../io/ReadOnlyBinaryStream"


class MoveActorAbsolutePacket : Packet {

public:
    MoveActorAbsolutePacket::~MoveActorAbsolutePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MoveActorAbsolutePacket(void);
    MoveActorAbsolutePacket(MoveActorAbsoluteData const&);
};

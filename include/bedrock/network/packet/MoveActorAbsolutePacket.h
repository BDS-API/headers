#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/MoveActorAbsoluteData"


class MoveActorAbsolutePacket : Packet {

public:
    virtual MoveActorAbsolutePacket::~MoveActorAbsolutePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MoveActorAbsolutePacket(void);
    MoveActorAbsolutePacket(MoveActorAbsoluteData const&);
};

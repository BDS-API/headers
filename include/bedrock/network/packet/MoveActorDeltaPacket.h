#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/MoveActorDeltaData"


class MoveActorDeltaPacket : Packet {

public:
    virtual MoveActorDeltaPacket::~MoveActorDeltaPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MoveActorDeltaPacket(void);
    MoveActorDeltaPacket(MoveActorDeltaData const&);
};

#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/MoveActorDeltaData"
#include "../../io/ReadOnlyBinaryStream"


class MoveActorDeltaPacket : Packet {

public:
    MoveActorDeltaPacket::~MoveActorDeltaPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MoveActorDeltaPacket(void);
    MoveActorDeltaPacket(MoveActorDeltaData const&);
};

#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../../unmapped/MoveActorDeltaData.h"


class MoveActorDeltaPacket : Packet {

public:
    virtual void getId()const;
    ~MoveActorDeltaPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    MoveActorDeltaPacket(MoveActorDeltaData const&);
    MoveActorDeltaPacket();
};

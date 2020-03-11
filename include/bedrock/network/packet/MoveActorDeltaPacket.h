#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/MoveActorDeltaData.h"
#include "./Packet.h"
#include <string>


class MoveActorDeltaPacket : Packet {

public:
    virtual ~MoveActorDeltaPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MoveActorDeltaPacket();
    MoveActorDeltaPacket(MoveActorDeltaData const&);
};

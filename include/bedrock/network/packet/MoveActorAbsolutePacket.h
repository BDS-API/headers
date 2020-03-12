#pragma once

#include "../../../unmapped/MoveActorAbsoluteData.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../io/BinaryStream.h"


class MoveActorAbsolutePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~MoveActorAbsolutePacket();
    MoveActorAbsolutePacket();
    MoveActorAbsolutePacket(MoveActorAbsoluteData const&);
};

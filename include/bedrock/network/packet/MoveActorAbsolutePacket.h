#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/MoveActorAbsoluteData.h"
#include "./Packet.h"
#include <string>


class MoveActorAbsolutePacket : Packet {

public:
    virtual ~MoveActorAbsolutePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MoveActorAbsolutePacket();
    MoveActorAbsolutePacket(MoveActorAbsoluteData const&);
};

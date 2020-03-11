#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "../../io/BinaryStream.h"
#include "../../../unmapped/EntityContext.h"
#include "./Packet.h"


class EntityServerPacket : Packet {

public:
    virtual ~EntityServerPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EntityServerPacket();
    EntityServerPacket(EntityContext &);
    void getEntityNetId()const;
};

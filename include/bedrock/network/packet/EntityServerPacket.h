#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/EntityContext.h"
#include "Packet.h"


class EntityServerPacket : Packet {

public:
    ~EntityServerPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    EntityServerPacket(EntityContext &);
    EntityServerPacket();
    void getEntityNetId()const;
};

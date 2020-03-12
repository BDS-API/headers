#pragma once

#include "Packet.h"


class EntityServerPacket : Packet {

public:
    ~EntityServerPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    void getEntityNetId()const;
    EntityServerPacket();
    EntityServerPacket(EntityContext &);
};

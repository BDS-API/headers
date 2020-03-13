#pragma once

#include "Packet.h"


class EntityServerPacket : Packet {

public:
    ~EntityServerPacket(); // _ZN18EntityServerPacketD2Ev
    virtual void write(BinaryStream &)const; // _ZNK18EntityServerPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18EntityServerPacket4readER20ReadOnlyBinaryStream
    EntityServerPacket(); // _ZN18EntityServerPacketC2Ev
    EntityServerPacket(EntityContext &); // _ZN18EntityServerPacketC2ER13EntityContext
    void getEntityNetId()const; // _ZNK18EntityServerPacket14getEntityNetIdEv
};

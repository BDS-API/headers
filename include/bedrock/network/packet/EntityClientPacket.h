#pragma once

#include "Packet.h"


class EntityClientPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    ~EntityClientPacket();
    void getEntityNetId()const;
    EntityClientPacket();
    EntityClientPacket(NetworkComponent &);
};

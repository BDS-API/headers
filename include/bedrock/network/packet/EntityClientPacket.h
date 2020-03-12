#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../../unmapped/NetworkComponent.h"


class EntityClientPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~EntityClientPacket();
    virtual void write(BinaryStream &)const;
    void getEntityNetId()const;
    EntityClientPacket();
    EntityClientPacket(NetworkComponent &);
};

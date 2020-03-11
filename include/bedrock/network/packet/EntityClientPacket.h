#pragma once

#include "../../../unmapped/NetworkComponent.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../io/BinaryStream.h"
#include "./Packet.h"


class EntityClientPacket : Packet {

public:
    virtual ~EntityClientPacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EntityClientPacket();
    EntityClientPacket(NetworkComponent &);
    void getEntityNetId()const;
};

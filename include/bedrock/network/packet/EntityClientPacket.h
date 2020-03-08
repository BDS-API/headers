#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/NetworkComponent"
#include "../../io/ReadOnlyBinaryStream"


class EntityClientPacket : Packet {

public:
    EntityClientPacket::~EntityClientPacket()
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EntityClientPacket(void);
    EntityClientPacket(NetworkComponent &);
    void getEntityNetId()const;
};

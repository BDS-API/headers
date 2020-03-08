#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/NetworkComponent"


class EntityClientPacket : Packet {

public:
    virtual EntityClientPacket::~EntityClientPacket()
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    EntityClientPacket(void);
    EntityClientPacket(NetworkComponent &);
    void getEntityNetId()const;
};

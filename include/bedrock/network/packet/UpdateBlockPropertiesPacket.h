#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../block/unmapped/BlockDefinitionGroup"


class UpdateBlockPropertiesPacket : Packet {

public:
    virtual UpdateBlockPropertiesPacket::~UpdateBlockPropertiesPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockPropertiesPacket(void);
    UpdateBlockPropertiesPacket(BlockDefinitionGroup const&);
};

#pragma once

#include "../../../unmapped/BlockDefinitionGroup"
#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class UpdateBlockPropertiesPacket : Packet {

public:
    virtual UpdateBlockPropertiesPacket::~UpdateBlockPropertiesPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockPropertiesPacket(void);
    UpdateBlockPropertiesPacket(BlockDefinitionGroup const&);
};

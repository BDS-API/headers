#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../block/unmapped/BlockDefinitionGroup.h"
#include "Packet.h"


class UpdateBlockPropertiesPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~UpdateBlockPropertiesPacket();
    virtual std::string getName()const;
    virtual void getId()const;
    UpdateBlockPropertiesPacket();
    UpdateBlockPropertiesPacket(BlockDefinitionGroup const&);
};

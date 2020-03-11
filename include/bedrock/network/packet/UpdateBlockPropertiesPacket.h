#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../block/unmapped/BlockDefinitionGroup.h"
#include "./Packet.h"
#include <string>


class UpdateBlockPropertiesPacket : Packet {

public:
    virtual ~UpdateBlockPropertiesPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockPropertiesPacket();
    UpdateBlockPropertiesPacket(BlockDefinitionGroup const&);
};

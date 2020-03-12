#pragma once

#include <string>
#include "Packet.h"


class UpdateBlockPropertiesPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~UpdateBlockPropertiesPacket();
    UpdateBlockPropertiesPacket(BlockDefinitionGroup const&);
    UpdateBlockPropertiesPacket();
};

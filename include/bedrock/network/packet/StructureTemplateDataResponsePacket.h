#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../nbt/CompoundTag.h"
#include <memory>
#include "Packet.h"


class StructureTemplateDataResponsePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~StructureTemplateDataResponsePacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
//  StructureTemplateDataResponsePacket(std::string const&, std::unique_ptr<CompoundTag>, StructureTemplateResponseType); //TODO: incomplete function definition
    StructureTemplateDataResponsePacket();
};

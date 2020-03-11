#pragma once

#include "../../nbt/CompoundTag.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <memory>
#include "./Packet.h"
#include <string>


class StructureTemplateDataResponsePacket : Packet {

public:
    virtual ~StructureTemplateDataResponsePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureTemplateDataResponsePacket();
//  StructureTemplateDataResponsePacket(std::string const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, StructureTemplateResponseType); //TODO: incomplete function definition
};

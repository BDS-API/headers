#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"


class StructureTemplateDataResponsePacket : Packet {

public:
    StructureTemplateDataResponsePacket::~StructureTemplateDataResponsePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureTemplateDataResponsePacket(void);
    StructureTemplateDataResponsePacket(std::string const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, StructureTemplateResponseType);
};

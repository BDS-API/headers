#pragma once

#include "../../io/BinaryStream"
#include "../../nbt/CompoundTag"
#include "../../io/ReadOnlyBinaryStream"


class StructureTemplateDataResponsePacket : Packet {

public:
    virtual StructureTemplateDataResponsePacket::~StructureTemplateDataResponsePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureTemplateDataResponsePacket(void);
    StructureTemplateDataResponsePacket(std::string const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, StructureTemplateResponseType);
};

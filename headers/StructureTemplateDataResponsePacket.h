#pragma once

class StructureTemplateDataResponsePacket : Packet {

public:
    virtual ~StructureTemplateDataResponsePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void StructureTemplateDataResponsePacket(void);
    void StructureTemplateDataResponsePacket(std::string const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, StructureTemplateResponseType);
};

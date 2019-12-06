#pragma once

class StructureTemplateDataResponsePacket : Packet {

public:
    virtual ~StructureTemplateDataResponsePacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void StructureTemplateDataResponsePacket(void);
    void StructureTemplateDataResponsePacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, StructureTemplateResponseType);
};

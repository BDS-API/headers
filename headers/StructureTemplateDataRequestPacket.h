#pragma once

class StructureTemplateDataRequestPacket : Packet {

public:
    virtual ~StructureTemplateDataRequestPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void StructureTemplateDataRequestPacket(void);
    void StructureTemplateDataRequestPacket(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, NetworkBlockPosition const&, StructureSettings const&, StructureTemplateRequestOperation);
};

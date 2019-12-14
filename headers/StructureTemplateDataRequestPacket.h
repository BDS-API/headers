#pragma once

class StructureTemplateDataRequestPacket : Packet {

public:
    virtual ~StructureTemplateDataRequestPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void StructureTemplateDataRequestPacket(void);
    void StructureTemplateDataRequestPacket(std::string const&, NetworkBlockPosition const&, StructureSettings const&, StructureTemplateRequestOperation);
};

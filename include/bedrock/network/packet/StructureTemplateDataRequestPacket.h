#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class StructureTemplateDataRequestPacket : Packet {

public:
    virtual StructureTemplateDataRequestPacket::~StructureTemplateDataRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureTemplateDataRequestPacket(void);
    StructureTemplateDataRequestPacket(std::string const&, NetworkBlockPosition const&, StructureSettings const&, StructureTemplateRequestOperation);
};

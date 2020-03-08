#pragma once

#include "../../../unmapped/NetworkBlockPosition"
#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/StructureSettings"


class StructureTemplateDataRequestPacket : Packet {

public:
    virtual StructureTemplateDataRequestPacket::~StructureTemplateDataRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureTemplateDataRequestPacket(void);
    StructureTemplateDataRequestPacket(std::string const&, NetworkBlockPosition const&, StructureSettings const&, StructureTemplateRequestOperation);
};

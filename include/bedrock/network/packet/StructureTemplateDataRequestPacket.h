#pragma once

#include "../../../unmapped/NetworkBlockPosition"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/StructureSettings"
#include "../../io/BinaryStream"


class StructureTemplateDataRequestPacket : Packet {

public:
    StructureTemplateDataRequestPacket::~StructureTemplateDataRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureTemplateDataRequestPacket(void);
    StructureTemplateDataRequestPacket(std::string const&, NetworkBlockPosition const&, StructureSettings const&, StructureTemplateRequestOperation);
};

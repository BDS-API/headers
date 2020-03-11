#pragma once

#include "../../../unmapped/StructureSettings.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/NetworkBlockPosition.h"
#include "./Packet.h"
#include <string>


class StructureTemplateDataRequestPacket : Packet {

public:
    virtual ~StructureTemplateDataRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    StructureTemplateDataRequestPacket();
//  StructureTemplateDataRequestPacket(std::string const&, NetworkBlockPosition const&, StructureSettings const&, StructureTemplateRequestOperation); //TODO: incomplete function definition
};

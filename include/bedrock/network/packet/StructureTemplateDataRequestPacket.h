#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../../unmapped/StructureSettings.h"
#include "../../../unmapped/NetworkBlockPosition.h"
#include "Packet.h"


class StructureTemplateDataRequestPacket : Packet {

public:
    ~StructureTemplateDataRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    StructureTemplateDataRequestPacket();
//  StructureTemplateDataRequestPacket(std::string const&, NetworkBlockPosition const&, StructureSettings const&, StructureTemplateRequestOperation); //TODO: incomplete function definition
};

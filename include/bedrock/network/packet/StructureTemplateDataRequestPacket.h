#pragma once

#include <string>
#include "Packet.h"


class StructureTemplateDataRequestPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    ~StructureTemplateDataRequestPacket();
    virtual void read(ReadOnlyBinaryStream &);
//  StructureTemplateDataRequestPacket(std::string const&, NetworkBlockPosition const&, StructureSettings const&, StructureTemplateRequestOperation); //TODO: incomplete function definition
    StructureTemplateDataRequestPacket();
};

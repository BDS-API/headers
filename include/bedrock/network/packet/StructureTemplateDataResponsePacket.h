#pragma once

#include <memory>
#include <string>
#include "Packet.h"


class StructureTemplateDataResponsePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    ~StructureTemplateDataResponsePacket();
    StructureTemplateDataResponsePacket();
//  StructureTemplateDataResponsePacket(std::string const&, std::unique_ptr<CompoundTag>, StructureTemplateResponseType); //TODO: incomplete function definition
};

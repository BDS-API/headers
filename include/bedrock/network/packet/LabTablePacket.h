#pragma once

#include <string>
#include "Packet.h"


class LabTablePacket : Packet {

public:
    ~LabTablePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
//  LabTablePacket(LabTablePacket::Type, BlockPos const&); //TODO: incomplete function definition
//  LabTablePacket(BlockPos const&, LabTableReactionType); //TODO: incomplete function definition
    LabTablePacket();
};

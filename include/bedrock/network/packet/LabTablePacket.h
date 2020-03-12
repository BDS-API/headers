#pragma once

#include "../../util/BlockPos.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../io/BinaryStream.h"


class LabTablePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    ~LabTablePacket();
    LabTablePacket();
//  LabTablePacket(LabTablePacket::Type, BlockPos const&); //TODO: incomplete function definition
//  LabTablePacket(BlockPos const&, LabTableReactionType); //TODO: incomplete function definition
};

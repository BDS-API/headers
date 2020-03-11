#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/BlockPos.h"
#include "./Packet.h"
#include <string>


class LabTablePacket : Packet {

public:
    virtual ~LabTablePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LabTablePacket();
//  LabTablePacket(BlockPos const&, LabTableReactionType); //TODO: incomplete function definition
//  LabTablePacket(LabTablePacket::Type, BlockPos const&); //TODO: incomplete function definition
};

#pragma once

#include "../../io/BinaryStream"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"


class LabTablePacket : Packet {

public:
    virtual LabTablePacket::~LabTablePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    LabTablePacket(void);
    LabTablePacket(BlockPos const&, LabTableReactionType);
    LabTablePacket(LabTablePacket::Type, BlockPos const&);
};

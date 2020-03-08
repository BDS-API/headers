#pragma once

#include "../../io/BinaryStream"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../io/ReadOnlyBinaryStream"


class UpdateBlockPacket : Packet {

public:
    virtual UpdateBlockPacket::~UpdateBlockPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockPacket(void);
    UpdateBlockPacket(BlockPos const&, unsigned int, Block const&, unsigned char);
    void getBlock(Level const&)const;
};

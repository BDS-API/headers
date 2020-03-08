#pragma once

#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"
#include "../../../unmapped/Block"
#include "../../level/Level"


class UpdateBlockPacket : Packet {

public:
    UpdateBlockPacket::~UpdateBlockPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockPacket(void);
    UpdateBlockPacket(BlockPos const&, unsigned int, Block const&, unsigned char);
    void getBlock(Level const&)const;
};

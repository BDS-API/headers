#pragma once

#include "../../../unmapped/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../level/Level"
#include "../../io/BinaryStream"


class UpdateBlockPacket : Packet {

public:
    virtual UpdateBlockPacket::~UpdateBlockPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockPacket(void);
    UpdateBlockPacket(BlockPos const&, unsigned int, Block const&, unsigned char);
    void getBlock(Level const&)const;
};

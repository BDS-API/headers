#pragma once

#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class BlockPickRequestPacket : Packet {

public:
    BlockPickRequestPacket::~BlockPickRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockPickRequestPacket(void);
    BlockPickRequestPacket(BlockPos const&, bool const&, unsigned char const&);
};

#pragma once

#include "../../io/BinaryStream"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"


class BlockPickRequestPacket : Packet {

public:
    virtual BlockPickRequestPacket::~BlockPickRequestPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockPickRequestPacket(void);
    BlockPickRequestPacket(BlockPos const&, bool const&, unsigned char const&);
};

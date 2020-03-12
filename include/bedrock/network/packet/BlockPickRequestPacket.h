#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../util/BlockPos.h"


class BlockPickRequestPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~BlockPickRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    BlockPickRequestPacket();
    BlockPickRequestPacket(BlockPos const&, bool const&, unsigned char const&);
};

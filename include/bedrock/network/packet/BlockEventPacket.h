#pragma once

#include "../../util/BlockPos.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../io/BinaryStream.h"


class BlockEventPacket : Packet {

public:
    virtual std::string getName()const;
    ~BlockEventPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    BlockEventPacket(BlockPos, int, int);
    BlockEventPacket();
};

#pragma once

#include <string>
#include "../../util/BlockPos.h"
#include "Packet.h"


class BlockEventPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    ~BlockEventPacket();
    BlockEventPacket();
    BlockEventPacket(BlockPos, int, int);
};

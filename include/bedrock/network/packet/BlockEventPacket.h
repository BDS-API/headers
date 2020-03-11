#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/BlockPos.h"
#include "./Packet.h"
#include <string>


class BlockEventPacket : Packet {

public:
    virtual ~BlockEventPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockEventPacket(BlockPos, int, int);
    BlockEventPacket();
};

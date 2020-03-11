#pragma once

#include "../../../unmapped/Block.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../level/Level.h"
#include "./Packet.h"
#include "../../util/BlockPos.h"
#include <string>


class UpdateBlockPacket : Packet {

public:
    virtual ~UpdateBlockPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    UpdateBlockPacket();
    UpdateBlockPacket(BlockPos const&, unsigned int, Block const&, unsigned char);
    void getBlock(Level const&)const;
};

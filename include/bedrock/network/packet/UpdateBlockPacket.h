#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/Block.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "Packet.h"


class UpdateBlockPacket : Packet {

public:
    ~UpdateBlockPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    UpdateBlockPacket();
    UpdateBlockPacket(BlockPos const&, unsigned int, Block const&, unsigned char);
    void getBlock(Level const&)const;
};

#pragma once

#include <string>
#include "Packet.h"


class UpdateBlockPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~UpdateBlockPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    UpdateBlockPacket();
    UpdateBlockPacket(BlockPos const&, unsigned int, Block const&, unsigned char);
    void getBlock(Level const&)const;
};

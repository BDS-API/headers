#pragma once

#include <string>
#include "Packet.h"


class BlockPickRequestPacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~BlockPickRequestPacket();
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void getId()const;
    BlockPickRequestPacket();
    BlockPickRequestPacket(BlockPos const&, bool const&, unsigned char const&);
};

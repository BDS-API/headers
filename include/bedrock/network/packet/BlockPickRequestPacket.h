#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/BlockPos.h"
#include "./Packet.h"
#include <string>


class BlockPickRequestPacket : Packet {

public:
    virtual ~BlockPickRequestPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BlockPickRequestPacket();
    BlockPickRequestPacket(BlockPos const&, bool const&, unsigned char const&);
};

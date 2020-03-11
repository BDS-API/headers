#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/BlockPos.h"
#include "./Packet.h"
#include <string>


class NetworkChunkPublisherUpdatePacket : Packet {

public:
    virtual ~NetworkChunkPublisherUpdatePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkChunkPublisherUpdatePacket();
    NetworkChunkPublisherUpdatePacket(BlockPos const&, unsigned int);
};

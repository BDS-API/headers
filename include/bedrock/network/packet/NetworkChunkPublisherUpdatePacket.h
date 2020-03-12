#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../util/BlockPos.h"


class NetworkChunkPublisherUpdatePacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~NetworkChunkPublisherUpdatePacket();
    virtual void getId()const;
    NetworkChunkPublisherUpdatePacket();
    NetworkChunkPublisherUpdatePacket(BlockPos const&, unsigned int);
};

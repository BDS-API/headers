#pragma once

#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"
#include "../../io/BinaryStream"


class NetworkChunkPublisherUpdatePacket : Packet {

public:
    NetworkChunkPublisherUpdatePacket::~NetworkChunkPublisherUpdatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkChunkPublisherUpdatePacket(void);
    NetworkChunkPublisherUpdatePacket(BlockPos const&, unsigned int);
};

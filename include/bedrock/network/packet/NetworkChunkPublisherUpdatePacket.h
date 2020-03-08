#pragma once

#include "../../io/BinaryStream"
#include "../../util/BlockPos"
#include "../../io/ReadOnlyBinaryStream"


class NetworkChunkPublisherUpdatePacket : Packet {

public:
    virtual NetworkChunkPublisherUpdatePacket::~NetworkChunkPublisherUpdatePacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkChunkPublisherUpdatePacket(void);
    NetworkChunkPublisherUpdatePacket(BlockPos const&, unsigned int);
};

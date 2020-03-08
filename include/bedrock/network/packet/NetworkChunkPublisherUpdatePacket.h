#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/BlockPos"
#include "../../io/ReadOnlyBinaryStream"


class NetworkChunkPublisherUpdatePacket : Packet {

public:
    virtual NetworkChunkPublisherUpdatePacket::~NetworkChunkPublisherUpdatePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    NetworkChunkPublisherUpdatePacket(void);
    NetworkChunkPublisherUpdatePacket(BlockPos const&, unsigned int);
};

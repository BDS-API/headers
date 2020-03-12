#pragma once

#include <string>
#include "Packet.h"


class NetworkChunkPublisherUpdatePacket : Packet {

public:
    virtual void read(ReadOnlyBinaryStream &);
    ~NetworkChunkPublisherUpdatePacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void getId()const;
    NetworkChunkPublisherUpdatePacket();
    NetworkChunkPublisherUpdatePacket(BlockPos const&, unsigned int);
};

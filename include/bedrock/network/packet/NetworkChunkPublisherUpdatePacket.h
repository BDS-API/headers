#pragma once

#include <string>
#include "Packet.h"


class NetworkChunkPublisherUpdatePacket : Packet {

public:
    ~NetworkChunkPublisherUpdatePacket(); // _ZN33NetworkChunkPublisherUpdatePacketD2Ev
    virtual void getId()const; // _ZNK33NetworkChunkPublisherUpdatePacket5getIdEv
    virtual std::string getName()const; // _ZNK33NetworkChunkPublisherUpdatePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK33NetworkChunkPublisherUpdatePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN33NetworkChunkPublisherUpdatePacket4readER20ReadOnlyBinaryStream
    NetworkChunkPublisherUpdatePacket(); // _ZN33NetworkChunkPublisherUpdatePacketC2Ev
    NetworkChunkPublisherUpdatePacket(BlockPos const&, unsigned int); // _ZN33NetworkChunkPublisherUpdatePacketC2ERK8BlockPosj
};

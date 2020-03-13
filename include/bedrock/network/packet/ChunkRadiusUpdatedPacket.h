#pragma once

#include <string>
#include "Packet.h"


class ChunkRadiusUpdatedPacket : Packet {

public:
    ~ChunkRadiusUpdatedPacket(); // _ZN24ChunkRadiusUpdatedPacketD2Ev
    virtual void getId()const; // _ZNK24ChunkRadiusUpdatedPacket5getIdEv
    virtual std::string getName()const; // _ZNK24ChunkRadiusUpdatedPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24ChunkRadiusUpdatedPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24ChunkRadiusUpdatedPacket4readER20ReadOnlyBinaryStream
    ChunkRadiusUpdatedPacket(); // _ZN24ChunkRadiusUpdatedPacketC2Ev
    ChunkRadiusUpdatedPacket(int); // _ZN24ChunkRadiusUpdatedPacketC2Ei
};

#pragma once

#include <string>
#include "Packet.h"


class ChunkRadiusUpdatedPacket : public Packet {

public:
    virtual ~ChunkRadiusUpdatedPacket(); // _ZN24ChunkRadiusUpdatedPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK24ChunkRadiusUpdatedPacket5getIdEv
    virtual std::string getName()const; // _ZNK24ChunkRadiusUpdatedPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24ChunkRadiusUpdatedPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24ChunkRadiusUpdatedPacket4readER20ReadOnlyBinaryStream
    ChunkRadiusUpdatedPacket(); // _ZN24ChunkRadiusUpdatedPacketC2Ev
    ChunkRadiusUpdatedPacket(int); // _ZN24ChunkRadiusUpdatedPacketC2Ei
};

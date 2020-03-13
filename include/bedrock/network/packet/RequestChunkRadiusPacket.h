#pragma once

#include <string>
#include "Packet.h"


class RequestChunkRadiusPacket : Packet {

public:
    ~RequestChunkRadiusPacket(); // _ZN24RequestChunkRadiusPacketD2Ev
    virtual void getId()const; // _ZNK24RequestChunkRadiusPacket5getIdEv
    virtual std::string getName()const; // _ZNK24RequestChunkRadiusPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK24RequestChunkRadiusPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN24RequestChunkRadiusPacket4readER20ReadOnlyBinaryStream
    RequestChunkRadiusPacket(); // _ZN24RequestChunkRadiusPacketC2Ev
    RequestChunkRadiusPacket(int); // _ZN24RequestChunkRadiusPacketC2Ei
};

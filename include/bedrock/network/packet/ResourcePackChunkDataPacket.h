#pragma once

#include <string>
#include "Packet.h"
#include <vector>


class ResourcePackChunkDataPacket : Packet {

public:
    ~ResourcePackChunkDataPacket(); // _ZN27ResourcePackChunkDataPacketD2Ev
    virtual void getId()const; // _ZNK27ResourcePackChunkDataPacket5getIdEv
    virtual std::string getName()const; // _ZNK27ResourcePackChunkDataPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK27ResourcePackChunkDataPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN27ResourcePackChunkDataPacket4readER20ReadOnlyBinaryStream
    ResourcePackChunkDataPacket(); // _ZN27ResourcePackChunkDataPacketC2Ev
    ResourcePackChunkDataPacket(std::string const&, int, unsigned long, std::vector<unsigned char> const&); // _ZN27ResourcePackChunkDataPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEimRKSt6vectorIhSaIhEE
};

#pragma once

#include <string>
#include "Packet.h"


class ResourcePackChunkRequestPacket : public Packet {

public:
    virtual ~ResourcePackChunkRequestPacket(); // _ZN30ResourcePackChunkRequestPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK30ResourcePackChunkRequestPacket5getIdEv
    virtual std::string getName()const; // _ZNK30ResourcePackChunkRequestPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK30ResourcePackChunkRequestPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN30ResourcePackChunkRequestPacket4readER20ReadOnlyBinaryStream
    ResourcePackChunkRequestPacket(); // _ZN30ResourcePackChunkRequestPacketC2Ev
    ResourcePackChunkRequestPacket(std::string const&, int); // _ZN30ResourcePackChunkRequestPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

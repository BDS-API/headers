#pragma once

#include <string>
#include "Packet.h"


class ResourcePackDataInfoPacket : Packet {

public:
    ~ResourcePackDataInfoPacket(); // _ZN26ResourcePackDataInfoPacketD2Ev
    virtual void getId()const; // _ZNK26ResourcePackDataInfoPacket5getIdEv
    virtual std::string getName()const; // _ZNK26ResourcePackDataInfoPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK26ResourcePackDataInfoPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN26ResourcePackDataInfoPacket4readER20ReadOnlyBinaryStream
    ResourcePackDataInfoPacket(); // _ZN26ResourcePackDataInfoPacketC2Ev
//  ResourcePackDataInfoPacket(std::string const&, unsigned int, int, unsigned long, std::string const&, bool, PackType); //TODO: incomplete function definition // _ZN26ResourcePackDataInfoPacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjimS7_b8PackType
};

#pragma once

#include <string>
#include "Packet.h"


class ClientCacheMissResponsePacket : Packet {

public:
    ~ClientCacheMissResponsePacket(); // _ZN29ClientCacheMissResponsePacketD2Ev
    virtual void getId()const; // _ZNK29ClientCacheMissResponsePacket5getIdEv
    virtual std::string getName()const; // _ZNK29ClientCacheMissResponsePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK29ClientCacheMissResponsePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN29ClientCacheMissResponsePacket4readER20ReadOnlyBinaryStream
    ClientCacheMissResponsePacket(); // _ZN29ClientCacheMissResponsePacketC2Ev
};

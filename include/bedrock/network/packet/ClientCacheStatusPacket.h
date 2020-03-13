#pragma once

#include <string>
#include "Packet.h"


class ClientCacheStatusPacket : Packet {

public:
    ~ClientCacheStatusPacket(); // _ZN23ClientCacheStatusPacketD2Ev
    virtual void getId()const; // _ZNK23ClientCacheStatusPacket5getIdEv
    virtual std::string getName()const; // _ZNK23ClientCacheStatusPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK23ClientCacheStatusPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN23ClientCacheStatusPacket4readER20ReadOnlyBinaryStream
    ClientCacheStatusPacket(); // _ZN23ClientCacheStatusPacketC2Ev
    ClientCacheStatusPacket(bool); // _ZN23ClientCacheStatusPacketC2Eb
};

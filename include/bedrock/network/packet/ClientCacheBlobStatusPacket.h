#pragma once

#include <string>
#include "Packet.h"


class ClientCacheBlobStatusPacket : public Packet {

public:
    virtual ~ClientCacheBlobStatusPacket(); // _ZN27ClientCacheBlobStatusPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK27ClientCacheBlobStatusPacket5getIdEv
    virtual std::string getName()const; // _ZNK27ClientCacheBlobStatusPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK27ClientCacheBlobStatusPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN27ClientCacheBlobStatusPacket4readER20ReadOnlyBinaryStream
    ClientCacheBlobStatusPacket(); // _ZN27ClientCacheBlobStatusPacketC2Ev
    bool isFull()const; // _ZNK27ClientCacheBlobStatusPacket6isFullEv
    bool isEmpty()const; // _ZNK27ClientCacheBlobStatusPacket7isEmptyEv
};

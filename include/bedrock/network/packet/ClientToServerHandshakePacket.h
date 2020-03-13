#pragma once

#include <string>
#include "Packet.h"


class ClientToServerHandshakePacket : Packet {

public:
    ~ClientToServerHandshakePacket(); // _ZN29ClientToServerHandshakePacketD2Ev
    virtual void getId()const; // _ZNK29ClientToServerHandshakePacket5getIdEv
    virtual std::string getName()const; // _ZNK29ClientToServerHandshakePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK29ClientToServerHandshakePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN29ClientToServerHandshakePacket4readER20ReadOnlyBinaryStream
    ClientToServerHandshakePacket(); // _ZN29ClientToServerHandshakePacketC2Ev
};

#pragma once

#include <string>
#include "Packet.h"


class ServerToClientHandshakePacket : Packet {

public:
    ~ServerToClientHandshakePacket(); // _ZN29ServerToClientHandshakePacketD2Ev
    virtual void getId()const; // _ZNK29ServerToClientHandshakePacket5getIdEv
    virtual std::string getName()const; // _ZNK29ServerToClientHandshakePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK29ServerToClientHandshakePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN29ServerToClientHandshakePacket4readER20ReadOnlyBinaryStream
    ServerToClientHandshakePacket(); // _ZN29ServerToClientHandshakePacketC2Ev
    ServerToClientHandshakePacket(std::string const&); // _ZN29ServerToClientHandshakePacketC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getData()const; // _ZNK29ServerToClientHandshakePacket7getDataB5cxx11Ev
};

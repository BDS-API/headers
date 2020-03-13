#pragma once

#include <string>
#include "Packet.h"


class AddPlayerPacket : Packet {

public:
    ~AddPlayerPacket(); // _ZN15AddPlayerPacketD2Ev
    virtual void getId()const; // _ZNK15AddPlayerPacket5getIdEv
    virtual std::string getName()const; // _ZNK15AddPlayerPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15AddPlayerPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15AddPlayerPacket4readER20ReadOnlyBinaryStream
    AddPlayerPacket(); // _ZN15AddPlayerPacketC2Ev
    AddPlayerPacket(Player &); // _ZN15AddPlayerPacketC2ER6Player
};

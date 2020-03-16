#pragma once

#include <string>
#include "Packet.h"


class PlayerHotbarPacket : public Packet {

public:
    virtual ~PlayerHotbarPacket(); // _ZN18PlayerHotbarPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK18PlayerHotbarPacket5getIdEv
    virtual std::string getName()const; // _ZNK18PlayerHotbarPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK18PlayerHotbarPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN18PlayerHotbarPacket4readER20ReadOnlyBinaryStream
    PlayerHotbarPacket(); // _ZN18PlayerHotbarPacketC2Ev
//    PlayerHotbarPacket(unsigned int, long, bool); //TODO: incomplete function definition // _ZN18PlayerHotbarPacketC2Ej11ContainerIDb
};

#pragma once

#include <string>
#include "Packet.h"


class SetActorMotionPacket : public Packet {

public:
    virtual ~SetActorMotionPacket(); // _ZN20SetActorMotionPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK20SetActorMotionPacket5getIdEv
    virtual std::string getName()const; // _ZNK20SetActorMotionPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK20SetActorMotionPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN20SetActorMotionPacket4readER20ReadOnlyBinaryStream
    SetActorMotionPacket(); // _ZN20SetActorMotionPacketC2Ev
    SetActorMotionPacket(Actor const&); // _ZN20SetActorMotionPacketC2ERK5Actor
};

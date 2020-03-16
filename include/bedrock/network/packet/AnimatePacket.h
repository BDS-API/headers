#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include <string>
#include "Packet.h"


class AnimatePacket : public Packet {

public:
    virtual ~AnimatePacket(); // _ZN13AnimatePacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK13AnimatePacket5getIdEv
    virtual std::string getName()const; // _ZNK13AnimatePacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK13AnimatePacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN13AnimatePacket4readER20ReadOnlyBinaryStream
    AnimatePacket(); // _ZN13AnimatePacketC2Ev
//    AnimatePacket(long, ActorRuntimeID); //TODO: incomplete function definition // _ZN13AnimatePacketC2ENS_6ActionE14ActorRuntimeID
//    AnimatePacket(long, ActorRuntimeID, float); //TODO: incomplete function definition // _ZN13AnimatePacketC2ENS_6ActionE14ActorRuntimeIDf
//    AnimatePacket(long, Actor &); //TODO: incomplete function definition // _ZN13AnimatePacketC2ENS_6ActionER5Actor
};

#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class InteractPacket : Packet {

public:
    ~InteractPacket(); // _ZN14InteractPacketD2Ev
    virtual void getId()const; // _ZNK14InteractPacket5getIdEv
    virtual std::string getName()const; // _ZNK14InteractPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14InteractPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14InteractPacket4readER20ReadOnlyBinaryStream
    InteractPacket(); // _ZN14InteractPacketC2Ev
//  InteractPacket(InteractPacket::Action, ActorRuntimeID, Vec3 const&); //TODO: incomplete function definition // _ZN14InteractPacketC2ENS_6ActionE14ActorRuntimeIDRK4Vec3
};

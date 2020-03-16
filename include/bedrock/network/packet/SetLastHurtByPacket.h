#pragma once

#include <string>
#include "Packet.h"


class SetLastHurtByPacket : public Packet {

public:
    virtual ~SetLastHurtByPacket(); // _ZN19SetLastHurtByPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK19SetLastHurtByPacket5getIdEv
    virtual std::string getName()const; // _ZNK19SetLastHurtByPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK19SetLastHurtByPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN19SetLastHurtByPacket4readER20ReadOnlyBinaryStream
    SetLastHurtByPacket(); // _ZN19SetLastHurtByPacketC2Ev
//    SetLastHurtByPacket(long); //TODO: incomplete function definition // _ZN19SetLastHurtByPacketC2E9ActorType
};

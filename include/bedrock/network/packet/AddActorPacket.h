#pragma once

#include <string>
#include "Packet.h"


class AddActorPacket : Packet {

public:
    ~AddActorPacket(); // _ZN14AddActorPacketD2Ev
    virtual void getId()const; // _ZNK14AddActorPacket5getIdEv
    virtual std::string getName()const; // _ZNK14AddActorPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK14AddActorPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN14AddActorPacket4readER20ReadOnlyBinaryStream
    AddActorPacket(); // _ZN14AddActorPacketC2Ev
    AddActorPacket(Actor &); // _ZN14AddActorPacketC2ER5Actor
    void getVelocity()const; // _ZNK14AddActorPacket11getVelocityEv
    void getPos()const; // _ZNK14AddActorPacket6getPosEv
    void getRot()const; // _ZNK14AddActorPacket6getRotEv
    void getYHeadRotation()const; // _ZNK14AddActorPacket16getYHeadRotationEv
    void getType()const; // _ZNK14AddActorPacket7getTypeEv
    void getEntityId()const; // _ZNK14AddActorPacket11getEntityIdEv
    void getRuntimeId()const; // _ZNK14AddActorPacket12getRuntimeIdEv
    void getAttributes()const; // _ZNK14AddActorPacket13getAttributesEv
    void getData()const; // _ZNK14AddActorPacket7getDataEv
};

#pragma once

#include <string>
#include "Packet.h"


class AddActorPacket : Packet {

public:
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    ~AddActorPacket();
    virtual void read(ReadOnlyBinaryStream &);
    AddActorPacket();
    void getEntityId()const;
    void getAttributes()const;
    void getType()const;
    void getPos()const;
    void getRot()const;
    AddActorPacket(Actor &);
    void getYHeadRotation()const;
    void getData()const;
    void getRuntimeId()const;
    void getVelocity()const;
};

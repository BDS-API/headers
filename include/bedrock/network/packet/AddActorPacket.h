#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include "../../actor/Actor.h"


class AddActorPacket : Packet {

public:
    virtual void getId()const;
    ~AddActorPacket();
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    void getType()const;
    AddActorPacket();
    AddActorPacket(Actor &);
    void getPos()const;
    void getYHeadRotation()const;
    void getAttributes()const;
    void getData()const;
    void getVelocity()const;
    void getRot()const;
    void getEntityId()const;
    void getRuntimeId()const;
};

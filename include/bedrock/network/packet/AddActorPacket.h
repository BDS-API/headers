#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/Actor.h"
#include "./Packet.h"
#include <string>


class AddActorPacket : Packet {

public:
    virtual ~AddActorPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddActorPacket();
    AddActorPacket(Actor &);
    void getVelocity()const;
    void getPos()const;
    void getRot()const;
    void getYHeadRotation()const;
    void getType()const;
    void getEntityId()const;
    void getRuntimeId()const;
    void getAttributes()const;
    void getData()const;
};

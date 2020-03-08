#pragma once

#include "../../io/BinaryStream"
#include "../../actor/Actor"
#include "../../io/ReadOnlyBinaryStream"


class AddActorPacket : Packet {

public:
    virtual AddActorPacket::~AddActorPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddActorPacket(void);
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

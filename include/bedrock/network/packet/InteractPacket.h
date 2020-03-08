#pragma once

#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../util/Vec3"
#include "../../io/BinaryStream"


class InteractPacket : Packet {

public:
    InteractPacket::~InteractPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InteractPacket(void);
    InteractPacket(InteractPacket::Action, ActorRuntimeID, Vec3 const&);
};

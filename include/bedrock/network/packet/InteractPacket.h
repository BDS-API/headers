#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "Packet.h"


class InteractPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~InteractPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    InteractPacket();
//  InteractPacket(InteractPacket::Action, ActorRuntimeID, Vec3 const&); //TODO: incomplete function definition
};

#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class InteractPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~InteractPacket();
    virtual void getId()const;
    InteractPacket();
//  InteractPacket(InteractPacket::Action, ActorRuntimeID, Vec3 const&); //TODO: incomplete function definition
};

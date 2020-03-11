#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "./Packet.h"
#include <string>


class InteractPacket : Packet {

public:
    virtual ~InteractPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InteractPacket();
//  InteractPacket(InteractPacket::Action, ActorRuntimeID, Vec3 const&); //TODO: incomplete function definition
};

#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include <string>


class MobEffectPacket : Packet {

public:
    virtual ~MobEffectPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MobEffectPacket();
//  MobEffectPacket(ActorRuntimeID, MobEffectPacket::Event, int, int, int, bool); //TODO: incomplete function definition
};

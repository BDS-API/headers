#pragma once

#include <string>
#include "Packet.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class MobEffectPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    ~MobEffectPacket();
    virtual void getId()const;
    virtual void read(ReadOnlyBinaryStream &);
    MobEffectPacket();
//  MobEffectPacket(ActorRuntimeID, MobEffectPacket::Event, int, int, int, bool); //TODO: incomplete function definition
};

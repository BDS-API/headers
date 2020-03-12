#pragma once

#include "../../io/BinaryStream.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"


class MobEffectPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    ~MobEffectPacket();
    MobEffectPacket();
//  MobEffectPacket(ActorRuntimeID, MobEffectPacket::Event, int, int, int, bool); //TODO: incomplete function definition
};

#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class BossEventPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    ~BossEventPacket();
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
//  BossEventPacket(BossEventUpdateType, RaidBossComponent &); //TODO: incomplete function definition
    BossEventPacket();
//  BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent &); //TODO: incomplete function definition
//  BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID); //TODO: incomplete function definition
};

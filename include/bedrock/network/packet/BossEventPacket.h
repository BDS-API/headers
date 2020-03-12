#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/RaidBossComponent.h"
#include "../../../unmapped/BossComponent.h"
#include "Packet.h"


class BossEventPacket : Packet {

public:
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    ~BossEventPacket();
//  BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID); //TODO: incomplete function definition
    BossEventPacket();
//  BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent &); //TODO: incomplete function definition
//  BossEventPacket(BossEventUpdateType, RaidBossComponent &); //TODO: incomplete function definition
};

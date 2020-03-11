#pragma once

#include "../../../unmapped/BossComponent.h"
#include "../../io/BinaryStream.h"
#include "../../../unmapped/RaidBossComponent.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class BossEventPacket : Packet {

public:
    virtual ~BossEventPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BossEventPacket();
//  BossEventPacket(BossEventUpdateType, RaidBossComponent &); //TODO: incomplete function definition
//  BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent &); //TODO: incomplete function definition
//  BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID); //TODO: incomplete function definition
};

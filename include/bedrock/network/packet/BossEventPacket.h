#pragma once

#include "../../../unmapped/RaidBossComponent"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/BossComponent"
#include "../../io/BinaryStream"


class BossEventPacket : Packet {

public:
    BossEventPacket::~BossEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BossEventPacket(void);
    BossEventPacket(BossEventUpdateType, RaidBossComponent &);
    BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent &);
    BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID);
};

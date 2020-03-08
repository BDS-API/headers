#pragma once

#include "../../io/BinaryStream"
#include "../../../unmapped/BossComponent"
#include "../../io/ReadOnlyBinaryStream"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/RaidBossComponent"


class BossEventPacket : Packet {

public:
    virtual BossEventPacket::~BossEventPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BossEventPacket(void);
    BossEventPacket(BossEventUpdateType, RaidBossComponent &);
    BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent &);
    BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID);
};

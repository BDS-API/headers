#pragma once

class BossEventPacket : Packet {

public:
    virtual ~BossEventPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void BossEventPacket(void);
    void BossEventPacket(BossEventUpdateType, RaidBossComponent &);
    void BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent &);
    void BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID);
};

#pragma once

class BossEventPacket : Packet {

public:
    virtual BossEventPacket::~BossEventPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    BossEventPacket(void);
    BossEventPacket(BossEventUpdateType, RaidBossComponent &);
    BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent &);
    BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID);
};

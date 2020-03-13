#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class BossEventPacket : Packet {

public:
    ~BossEventPacket(); // _ZN15BossEventPacketD2Ev
    virtual void getId()const; // _ZNK15BossEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK15BossEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15BossEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15BossEventPacket4readER20ReadOnlyBinaryStream
    BossEventPacket(); // _ZN15BossEventPacketC2Ev
//  BossEventPacket(BossEventUpdateType, RaidBossComponent &); //TODO: incomplete function definition // _ZN15BossEventPacketC2E19BossEventUpdateTypeR17RaidBossComponent
//  BossEventPacket(BossEventUpdateType, ActorUniqueID, BossComponent &); //TODO: incomplete function definition // _ZN15BossEventPacketC2E19BossEventUpdateType13ActorUniqueIDR13BossComponent
//  BossEventPacket(BossEventUpdateType, ActorUniqueID, ActorUniqueID); //TODO: incomplete function definition // _ZN15BossEventPacketC2E19BossEventUpdateType13ActorUniqueIDS1_
};

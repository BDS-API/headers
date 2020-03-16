#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "Packet.h"


class BossEventPacket : public Packet {

public:
    virtual ~BossEventPacket(); // _ZN15BossEventPacketD2Ev
    virtual void __fake_function0(); // fake
    virtual void getId()const; // _ZNK15BossEventPacket5getIdEv
    virtual std::string getName()const; // _ZNK15BossEventPacket7getNameB5cxx11Ev
    virtual void write(BinaryStream &)const; // _ZNK15BossEventPacket5writeER12BinaryStream
    virtual void read(ReadOnlyBinaryStream &); // _ZN15BossEventPacket4readER20ReadOnlyBinaryStream
    BossEventPacket(); // _ZN15BossEventPacketC2Ev
//    BossEventPacket(long, RaidBossComponent &); //TODO: incomplete function definition // _ZN15BossEventPacketC2E19BossEventUpdateTypeR17RaidBossComponent
//    BossEventPacket(long, ActorUniqueID, BossComponent &); //TODO: incomplete function definition // _ZN15BossEventPacketC2E19BossEventUpdateType13ActorUniqueIDR13BossComponent
//    BossEventPacket(long, ActorUniqueID, ActorUniqueID); //TODO: incomplete function definition // _ZN15BossEventPacketC2E19BossEventUpdateType13ActorUniqueIDS1_
};

#pragma once

#include "BlockActor.h"


class BellBlockActor : BlockActor {

public:
    ~BellBlockActor(); // _ZN14BellBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN14BellBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK14BellBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN14BellBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN14BellBlockActor15getUpdatePacketER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN14BellBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    BellBlockActor(BlockPos const&); // _ZN14BellBlockActorC2ERK8BlockPos
//  void ring(Direction::Type, BlockSource &, bool); //TODO: incomplete function definition // _ZN14BellBlockActor4ringEN9Direction4TypeER11BlockSourceb
    void ejectItem(BlockPos const&, Actor &)const; // _ZNK14BellBlockActor9ejectItemERK8BlockPosR5Actor
    bool isRinging()const; // _ZNK14BellBlockActor9isRingingEv
};

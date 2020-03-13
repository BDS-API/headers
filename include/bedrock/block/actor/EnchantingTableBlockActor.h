#pragma once

#include <string>
#include "BlockActor.h"


class EnchantingTableBlockActor : BlockActor {

public:
    ~EnchantingTableBlockActor(); // _ZN25EnchantingTableBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN25EnchantingTableBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK25EnchantingTableBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN25EnchantingTableBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN25EnchantingTableBlockActor15getUpdatePacketER11BlockSource
    virtual std::string getName()const; // _ZNK25EnchantingTableBlockActor7getNameB5cxx11Ev
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN25EnchantingTableBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    EnchantingTableBlockActor(BlockPos const&); // _ZN25EnchantingTableBlockActorC2ERK8BlockPos
};

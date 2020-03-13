#pragma once

#include "BlockActor.h"


class CampfireBlockActor : BlockActor {

public:
    static long MIN_SMOKE_THRESHOLD_COUNTER;
    static long MAX_SMOKE_THRESHOLD_COUNTER;

    ~CampfireBlockActor(); // _ZN18CampfireBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN18CampfireBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK18CampfireBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN18CampfireBlockActor4tickER11BlockSource
    virtual void onChanged(BlockSource &); // _ZN18CampfireBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN18CampfireBlockActor15getUpdatePacketER11BlockSource
    virtual void getShadowRadius(BlockSource &)const; // _ZNK18CampfireBlockActor15getShadowRadiusER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN18CampfireBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    CampfireBlockActor(BlockPos const&); // _ZN18CampfireBlockActorC2ERK8BlockPos
    void _finishCooking(BlockSource &, int); // _ZN18CampfireBlockActor14_finishCookingER11BlockSourcei
    void getCookingItem(int); // _ZN18CampfireBlockActor14getCookingItemEi
    void setItem(BlockSource &, ItemInstance const&); // _ZN18CampfireBlockActor7setItemER11BlockSourceRK12ItemInstance
    void dropAllItems(BlockSource &); // _ZN18CampfireBlockActor12dropAllItemsER11BlockSource
    void _removeItem(int); // _ZN18CampfireBlockActor11_removeItemEi
};

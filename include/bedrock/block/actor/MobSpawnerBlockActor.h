#pragma once

#include "BlockActor.h"


class MobSpawnerBlockActor : BlockActor {

public:
    ~MobSpawnerBlockActor(); // _ZN20MobSpawnerBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN20MobSpawnerBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK20MobSpawnerBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN20MobSpawnerBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN20MobSpawnerBlockActor15getUpdatePacketER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN20MobSpawnerBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    MobSpawnerBlockActor(BlockPos const&); // _ZN20MobSpawnerBlockActorC2ERK8BlockPos
    void getSpawner(); // _ZN20MobSpawnerBlockActor10getSpawnerEv
};

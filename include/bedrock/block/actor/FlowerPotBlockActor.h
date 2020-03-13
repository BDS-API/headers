#pragma once

#include "BlockActor.h"


class FlowerPotBlockActor : BlockActor {

public:
    ~FlowerPotBlockActor(); // _ZN19FlowerPotBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN19FlowerPotBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK19FlowerPotBlockActor4saveER11CompoundTag
    virtual void onChanged(BlockSource &); // _ZN19FlowerPotBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN19FlowerPotBlockActor15getUpdatePacketER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN19FlowerPotBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    FlowerPotBlockActor(BlockPos const&); // _ZN19FlowerPotBlockActorC2ERK8BlockPos
    void setPlantItem(Block const*); // _ZN19FlowerPotBlockActor12setPlantItemEPK5Block
    void getPlantItem()const; // _ZNK19FlowerPotBlockActor12getPlantItemEv
};

#pragma once

#include "BlockActor.h"


class ComparatorBlockActor : BlockActor {

public:
    ~ComparatorBlockActor(); // _ZN20ComparatorBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN20ComparatorBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK20ComparatorBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN20ComparatorBlockActor4tickER11BlockSource
    virtual void getOutputSignal(); // _ZN20ComparatorBlockActor15getOutputSignalEv
    virtual void setOutputSignal(int); // _ZN20ComparatorBlockActor15setOutputSignalEi
    ComparatorBlockActor(BlockPos const&); // _ZN20ComparatorBlockActorC2ERK8BlockPos
};

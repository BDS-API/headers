#pragma once

#include "BlockActor.h"


class NetherReactorBlockActor : public BlockActor {

public:
    virtual ~NetherReactorBlockActor(); // _ZN23NetherReactorBlockActorD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN23NetherReactorBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK23NetherReactorBlockActor4saveER11CompoundTag
    NetherReactorBlockActor(BlockPos const&); // _ZN23NetherReactorBlockActorC2ERK8BlockPos
};

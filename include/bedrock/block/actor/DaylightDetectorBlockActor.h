#pragma once

#include "BlockActor.h"


class DaylightDetectorBlockActor : public BlockActor {

public:
    virtual ~DaylightDetectorBlockActor(); // _ZN26DaylightDetectorBlockActorD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(BlockSource &); // _ZN26DaylightDetectorBlockActor4tickER11BlockSource
    DaylightDetectorBlockActor(BlockPos const&); // _ZN26DaylightDetectorBlockActorC2ERK8BlockPos
};

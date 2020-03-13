#pragma once

#include "BlockActor.h"


class DaylightDetectorBlockActor : BlockActor {

public:
    ~DaylightDetectorBlockActor(); // _ZN26DaylightDetectorBlockActorD2Ev
    virtual void tick(BlockSource &); // _ZN26DaylightDetectorBlockActor4tickER11BlockSource
    DaylightDetectorBlockActor(BlockPos const&); // _ZN26DaylightDetectorBlockActorC2ERK8BlockPos
};

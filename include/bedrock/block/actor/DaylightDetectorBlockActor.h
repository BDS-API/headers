#pragma once

#include "BlockActor.h"


class DaylightDetectorBlockActor : BlockActor {

public:
    virtual void tick(BlockSource &);
    ~DaylightDetectorBlockActor();
    DaylightDetectorBlockActor(BlockPos const&);
};

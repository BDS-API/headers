#pragma once

#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"
#include "BlockActor.h"


class DaylightDetectorBlockActor : BlockActor {

public:
    ~DaylightDetectorBlockActor();
    virtual void tick(BlockSource &);
    DaylightDetectorBlockActor(BlockPos const&);
};

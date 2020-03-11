#pragma once

#include "./BlockActor.h"
#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"


class DaylightDetectorBlockActor : BlockActor {

public:
    virtual ~DaylightDetectorBlockActor();
    virtual void tick(BlockSource &);

    DaylightDetectorBlockActor(BlockPos const&);
};

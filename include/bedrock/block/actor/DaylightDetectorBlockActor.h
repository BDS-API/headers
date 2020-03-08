#pragma once

#include "../../util/BlockPos"
#include "../unmapped/BlockSource"


class DaylightDetectorBlockActor : BlockActor {

public:
    DaylightDetectorBlockActor::~DaylightDetectorBlockActor()
    virtual void tick(BlockSource &);

    DaylightDetectorBlockActor(BlockPos const&);
};

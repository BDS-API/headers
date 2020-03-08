#pragma once

#include "../unmapped/BlockSource"
#include "../../util/BlockPos"


class DaylightDetectorBlockActor : BlockActor {

public:
    virtual DaylightDetectorBlockActor::~DaylightDetectorBlockActor()
    virtual void tick(BlockSource &);

    DaylightDetectorBlockActor(BlockPos const&);
};

#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/BlockPos"


class DaylightDetectorBlockActor : BlockActor {

public:
    virtual DaylightDetectorBlockActor::~DaylightDetectorBlockActor();
    virtual void tick(BlockSource &);

    DaylightDetectorBlockActor(BlockPos const&);
};

#pragma once

class DaylightDetectorBlockActor : BlockActor {

public:
    virtual DaylightDetectorBlockActor::~DaylightDetectorBlockActor();
    virtual void tick(BlockSource &);

    DaylightDetectorBlockActor(BlockPos const&);
};

#pragma once

class DaylightDetectorBlockActor : BlockActor {

public:
    virtual ~DaylightDetectorBlockActor();
    virtual void tick(BlockSource &);

    void DaylightDetectorBlockActor(BlockPos const&);
};

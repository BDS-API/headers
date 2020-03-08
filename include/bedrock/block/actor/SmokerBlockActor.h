#pragma once

#include "../../util/BlockPos"


class SmokerBlockActor : FurnaceBlockActor {

public:
    virtual SmokerBlockActor::~SmokerBlockActor()
    virtual void getName()const;

    SmokerBlockActor(BlockPos const&);
};

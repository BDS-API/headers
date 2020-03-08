#pragma once

#include "../../util/BlockPos"


class SmokerBlockActor : FurnaceBlockActor {

public:
    SmokerBlockActor::~SmokerBlockActor()
    virtual void getName()const;

    SmokerBlockActor(BlockPos const&);
};

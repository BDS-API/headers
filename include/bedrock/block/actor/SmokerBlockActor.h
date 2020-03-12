#pragma once

#include "../../util/BlockPos.h"
#include "FurnaceBlockActor.h"


class SmokerBlockActor : FurnaceBlockActor {

public:
    virtual std::string getName()const;
    ~SmokerBlockActor();
    SmokerBlockActor(BlockPos const&);
};

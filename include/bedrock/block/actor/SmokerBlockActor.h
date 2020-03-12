#pragma once

#include <string>
#include "FurnaceBlockActor.h"


class SmokerBlockActor : FurnaceBlockActor {

public:
    ~SmokerBlockActor();
    virtual std::string getName()const;
    SmokerBlockActor(BlockPos const&);
};

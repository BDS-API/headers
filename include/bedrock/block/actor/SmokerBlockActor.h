#pragma once

#include "./FurnaceBlockActor.h"
#include "../../util/BlockPos.h"
#include <string>


class SmokerBlockActor : FurnaceBlockActor {

public:
    virtual ~SmokerBlockActor();
    virtual std::string getName()const;

    SmokerBlockActor(BlockPos const&);
};

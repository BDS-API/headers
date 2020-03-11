#pragma once

#include "./FurnaceBlockActor.h"
#include "../../util/BlockPos.h"
#include <string>


class BlastFurnaceBlockActor : FurnaceBlockActor {

public:
    virtual ~BlastFurnaceBlockActor();
    virtual std::string getName()const;

    BlastFurnaceBlockActor(BlockPos const&);
};

#pragma once

#include "../../util/BlockPos.h"
#include "FurnaceBlockActor.h"


class BlastFurnaceBlockActor : FurnaceBlockActor {

public:
    ~BlastFurnaceBlockActor();
    virtual std::string getName()const;
    BlastFurnaceBlockActor(BlockPos const&);
};

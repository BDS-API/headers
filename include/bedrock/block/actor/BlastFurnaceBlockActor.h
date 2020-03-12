#pragma once

#include <string>
#include "FurnaceBlockActor.h"


class BlastFurnaceBlockActor : FurnaceBlockActor {

public:
    ~BlastFurnaceBlockActor();
    virtual std::string getName()const;
    BlastFurnaceBlockActor(BlockPos const&);
};

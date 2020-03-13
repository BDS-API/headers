#pragma once

#include <string>
#include "FurnaceBlockActor.h"


class BlastFurnaceBlockActor : FurnaceBlockActor {

public:
    ~BlastFurnaceBlockActor(); // _ZN22BlastFurnaceBlockActorD2Ev
    virtual std::string getName()const; // _ZNK22BlastFurnaceBlockActor7getNameB5cxx11Ev
    BlastFurnaceBlockActor(BlockPos const&); // _ZN22BlastFurnaceBlockActorC2ERK8BlockPos
};

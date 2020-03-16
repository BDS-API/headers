#pragma once

#include "FurnaceBlockActor.h"
#include <string>


class BlastFurnaceBlockActor : public FurnaceBlockActor {

public:
    virtual ~BlastFurnaceBlockActor(); // _ZN22BlastFurnaceBlockActorD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK22BlastFurnaceBlockActor7getNameB5cxx11Ev
    BlastFurnaceBlockActor(BlockPos const&); // _ZN22BlastFurnaceBlockActorC2ERK8BlockPos
};

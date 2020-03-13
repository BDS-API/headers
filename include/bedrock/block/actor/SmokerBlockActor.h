#pragma once

#include <string>
#include "FurnaceBlockActor.h"


class SmokerBlockActor : FurnaceBlockActor {

public:
    ~SmokerBlockActor(); // _ZN16SmokerBlockActorD2Ev
    virtual std::string getName()const; // _ZNK16SmokerBlockActor7getNameB5cxx11Ev
    SmokerBlockActor(BlockPos const&); // _ZN16SmokerBlockActorC2ERK8BlockPos
};

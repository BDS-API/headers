#pragma once

#include "FurnaceBlockActor.h"
#include <string>


class SmokerBlockActor : public FurnaceBlockActor {

public:
    virtual ~SmokerBlockActor(); // _ZN16SmokerBlockActorD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getName()const; // _ZNK16SmokerBlockActor7getNameB5cxx11Ev
    SmokerBlockActor(BlockPos const&); // _ZN16SmokerBlockActorC2ERK8BlockPos
};

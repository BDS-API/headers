#pragma once

#include "../../util/BlockPos"


class BlastFurnaceBlockActor : FurnaceBlockActor {

public:
    virtual BlastFurnaceBlockActor::~BlastFurnaceBlockActor()
    virtual void getName()const;

    BlastFurnaceBlockActor(BlockPos const&);
};

#pragma once

#include "../../util/BlockPos"


class BlastFurnaceBlockActor : FurnaceBlockActor {

public:
    BlastFurnaceBlockActor::~BlastFurnaceBlockActor()
    virtual void getName()const;

    BlastFurnaceBlockActor(BlockPos const&);
};

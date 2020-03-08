#pragma once

#include "../../../unmapped/BlockPos"


class BlastFurnaceBlockActor : FurnaceBlockActor {

public:
    virtual BlastFurnaceBlockActor::~BlastFurnaceBlockActor();
    virtual void getName[abi:cxx11](void)const;

    BlastFurnaceBlockActor(BlockPos const&);
};

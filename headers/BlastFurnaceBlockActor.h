#pragma once

class BlastFurnaceBlockActor : FurnaceBlockActor {

public:
    virtual ~BlastFurnaceBlockActor();
    virtual void getName[abi:cxx11](void)const;

    void BlastFurnaceBlockActor(BlockPos const&);
};

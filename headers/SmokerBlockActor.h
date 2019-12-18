#pragma once

class SmokerBlockActor : FurnaceBlockActor {

public:
    virtual ~SmokerBlockActor();
    virtual void getName[abi:cxx11](void)const;

    void SmokerBlockActor(BlockPos const&);
};

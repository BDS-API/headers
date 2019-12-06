#pragma once

class FossilFeature : Feature {

public:
    virtual ~FossilFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void FossilFeature(void);
};

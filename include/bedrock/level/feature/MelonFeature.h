#pragma once

class MelonFeature : Feature {

public:
    virtual MelonFeature::~MelonFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    MelonFeature(void);
};

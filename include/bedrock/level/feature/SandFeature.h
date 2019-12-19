#pragma once

class SandFeature : Feature {

public:
    virtual SandFeature::~SandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SandFeature(Block const&, int);
};

#pragma once

class SandFeature : Feature {

public:
    virtual ~SandFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void SandFeature(Block const&, int);
};

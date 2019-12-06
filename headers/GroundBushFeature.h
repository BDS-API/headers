#pragma once

class GroundBushFeature : TreeFeature {

public:
    virtual ~GroundBushFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void GroundBushFeature(int, int);
};

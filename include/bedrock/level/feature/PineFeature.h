#pragma once

class PineFeature : TreeFeature {

public:
    virtual PineFeature::~PineFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    PineFeature(Actor *);
};

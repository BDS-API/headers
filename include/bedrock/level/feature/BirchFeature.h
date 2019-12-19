#pragma once

class BirchFeature : TreeFeature {

public:
    virtual BirchFeature::~BirchFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    BirchFeature(Actor *, bool, bool);
};

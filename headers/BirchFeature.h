#pragma once

class BirchFeature : TreeFeature {

public:
    virtual ~BirchFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void BirchFeature(Actor *, bool);
};

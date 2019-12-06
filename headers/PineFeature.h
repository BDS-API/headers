#pragma once

class PineFeature : TreeFeature {

public:
    virtual ~PineFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void PineFeature(Actor *);
};

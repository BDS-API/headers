#pragma once

class OakFeature : TreeFeature {

public:
    virtual OakFeature::~OakFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    OakFeature(Actor *, bool);
};

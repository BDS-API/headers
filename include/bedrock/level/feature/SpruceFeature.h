#pragma once

class SpruceFeature : TreeFeature {

public:
    virtual SpruceFeature::~SpruceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpruceFeature(Actor *);
};

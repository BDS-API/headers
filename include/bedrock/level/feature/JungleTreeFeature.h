#pragma once

class JungleTreeFeature : TreeFeature {

public:
    virtual JungleTreeFeature::~JungleTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    JungleTreeFeature(Actor *);
};

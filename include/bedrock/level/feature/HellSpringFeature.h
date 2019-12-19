#pragma once

class HellSpringFeature : Feature {

public:
    virtual HellSpringFeature::~HellSpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellSpringFeature(Block const&, bool);
};

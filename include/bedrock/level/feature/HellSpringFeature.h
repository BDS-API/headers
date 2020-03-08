#pragma once

#include "../../../unmapped/BlockSource"
#include "../../../unmapped/Block"


class HellSpringFeature : Feature {

public:
    virtual HellSpringFeature::~HellSpringFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HellSpringFeature(Block const&, bool);
};

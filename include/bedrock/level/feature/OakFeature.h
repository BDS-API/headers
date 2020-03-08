#pragma once

#include "../../../unmapped/BlockSource"
#include "../../actor/Actor"


class OakFeature : TreeFeature {

public:
    virtual OakFeature::~OakFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    OakFeature(Actor *, bool);
};

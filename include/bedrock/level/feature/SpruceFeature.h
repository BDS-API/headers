#pragma once

#include "../../../unmapped/BlockSource"
#include "../../actor/Actor"


class SpruceFeature : TreeFeature {

public:
    virtual SpruceFeature::~SpruceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SpruceFeature(Actor *);
};

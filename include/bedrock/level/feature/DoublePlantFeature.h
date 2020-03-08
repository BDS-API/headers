#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class DoublePlantFeature : Feature {

public:
    virtual DoublePlantFeature::~DoublePlantFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DoublePlantFeature(void);
    void place(BlockSource &, BlockPos const&, Random &, DoublePlantType)const;
};

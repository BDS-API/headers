#pragma once

#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"


class DoublePlantFeature : Feature {

public:
    DoublePlantFeature::~DoublePlantFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DoublePlantFeature(void);
    void place(BlockSource &, BlockPos const&, Random &, DoublePlantType)const;
};

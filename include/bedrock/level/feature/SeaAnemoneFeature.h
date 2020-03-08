#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../util/BlockPos"


class SeaAnemoneFeature : Feature {

public:
    virtual SeaAnemoneFeature::~SeaAnemoneFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeaAnemoneFeature(void);
};

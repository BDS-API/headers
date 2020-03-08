#pragma once

#include "../../util/BlockPos"
#include "../../block/unmapped/BlockSource"
#include "../../util/Random"


class SeaAnemoneFeature : Feature {

public:
    SeaAnemoneFeature::~SeaAnemoneFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    SeaAnemoneFeature(void);
};

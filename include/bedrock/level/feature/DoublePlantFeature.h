#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class DoublePlantFeature : Feature {

public:
    virtual ~DoublePlantFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DoublePlantFeature();
//  void place(BlockSource &, BlockPos const&, Random &, DoublePlantType)const; //TODO: incomplete function definition
};

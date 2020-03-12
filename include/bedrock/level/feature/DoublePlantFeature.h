#pragma once

#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/Random.h"


class DoublePlantFeature : Feature {

public:
    ~DoublePlantFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
//  void place(BlockSource &, BlockPos const&, Random &, DoublePlantType)const; //TODO: incomplete function definition
    DoublePlantFeature();
};

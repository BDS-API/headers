#pragma once

#include "Feature.h"


class DoublePlantFeature : Feature {

public:
    ~DoublePlantFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
//  void place(BlockSource &, BlockPos const&, Random &, DoublePlantType)const; //TODO: incomplete function definition
    DoublePlantFeature();
};

#pragma once

#include "Feature.h"


class SeaAnemoneFeature : Feature {

public:
    ~SeaAnemoneFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    SeaAnemoneFeature();
};

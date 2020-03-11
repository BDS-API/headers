#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class FossilFeature : Feature {

public:
    static std::string STRUCTURE_LOCATION_FOSSIL;
    static std::string STRUCTURE_LOCATION_FOSSIL_COAL;

    virtual ~FossilFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    FossilFeature();
};

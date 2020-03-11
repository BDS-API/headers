#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/FeatureRegistry.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LegacyForestFoliageFeature : Feature {

public:
    virtual ~LegacyForestFoliageFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

//  LegacyForestFoliageFeature(LegacyForestFoliageFeature::Type, FeatureRegistry const&); //TODO: incomplete function definition
    void _getTreeFeature(Random &)const;
};

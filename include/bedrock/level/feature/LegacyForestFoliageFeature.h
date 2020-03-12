#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/FeatureRegistry.h"


class LegacyForestFoliageFeature : Feature {

public:
    ~LegacyForestFoliageFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
//  LegacyForestFoliageFeature(LegacyForestFoliageFeature::Type, FeatureRegistry const&); //TODO: incomplete function definition
    void _getTreeFeature(Random &)const;
};

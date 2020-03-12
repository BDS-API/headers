#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "Feature.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/FeatureRegistry.h"


class LegacyTreeFeature : Feature {

public:
    ~LegacyTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
//  LegacyTreeFeature(LegacyTreeFeature::Type, FeatureRegistry const&); //TODO: incomplete function definition
};

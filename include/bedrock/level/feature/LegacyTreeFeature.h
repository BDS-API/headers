#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/FeatureRegistry.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class LegacyTreeFeature : Feature {

public:
    virtual ~LegacyTreeFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

//  LegacyTreeFeature(LegacyTreeFeature::Type, FeatureRegistry const&); //TODO: incomplete function definition
};

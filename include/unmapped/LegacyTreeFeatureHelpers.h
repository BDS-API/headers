#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/Random.h"
#include <functional>
#include "../bedrock/util/BlockPos.h"


namespace LegacyTreeFeatureHelpers {

    void _getRandomTreePosition(BlockSource &, BlockPos const&, Random &);
    void _setupForestCount(BlockPos const&, Random &, float, int &);
//  void _placeTrees(BlockSource &, BlockPos const&, Random &, int, WeakRefT<FeatureRefTraits>, std::function<WeakRefT<FeatureRefTraits> (Random &)> const&); //TODO: incomplete function definition
};

#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Random.h"
#include <functional>
#include "../bedrock/block/unmapped/BlockSource.h"


class LegacyTreeFeatureHelpers {

public:

    void _setupForestCount(BlockPos const&, Random &, float, int &);
//  void _placeTrees(BlockSource &, BlockPos const&, Random &, int, WeakRefT<FeatureRefTraits>, std::function<WeakRefT<FeatureRefTraits> (Random &)> const&); //TODO: incomplete function definition
    void _getRandomTreePosition(BlockSource &, BlockPos const&, Random &);
};

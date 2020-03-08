#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"


class LegacyTreeFeatureHelpers {

public:

    void _setupForestCount(BlockPos const&, Random &, float, int &);
    void _placeTrees(BlockSource &, BlockPos const&, Random &, int, WeakRefT<FeatureRefTraits>, std::function<WeakRefT ()(Random &)> const&);
    void _getRandomTreePosition(BlockSource &, BlockPos const&, Random &);
};

#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class LegacyTreeFeatureHelpers {

public:

    void _setupForestCount(BlockPos const&, Random &, float, int &);
    void _placeTrees(BlockSource &, BlockPos const&, Random &, int, WeakRefT<FeatureRefTraits>, std::function<WeakRefT ()(Random &)> const&);
    void _getRandomTreePosition(BlockSource &, BlockPos const&, Random &);
};

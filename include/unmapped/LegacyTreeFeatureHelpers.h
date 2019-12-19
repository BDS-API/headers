#pragma once

class LegacyTreeFeatureHelpers {

public:

    void _setupForestCount(BlockPos const&, Random &, float, int &);
    void _placeTrees(BlockSource &, BlockPos const&, Random &, int, WeakRefT<FeatureRefTraits>, std::function<WeakRefT<FeatureRefTraits> ()(Random &)> const&);
    void _getRandomTreePosition(BlockSource &, BlockPos const&, Random &);
};

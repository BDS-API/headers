#pragma once

#include <functional>


namespace LegacyTreeFeatureHelpers {

    void _setupForestCount(BlockPos const&, Random &, float, int &);
    void _getRandomTreePosition(BlockSource &, BlockPos const&, Random &);
//  void _placeTrees(BlockSource &, BlockPos const&, Random &, int, WeakRefT<FeatureRefTraits>, std::function<WeakRefT<FeatureRefTraits> (Random &)> const&); //TODO: incomplete function definition
};

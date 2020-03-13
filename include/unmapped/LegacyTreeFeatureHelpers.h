#pragma once

#include <functional>


namespace LegacyTreeFeatureHelpers {

    void _setupForestCount(BlockPos const&, Random &, float, int &); // _ZN24LegacyTreeFeatureHelpers17_setupForestCountERK8BlockPosR6RandomfRi
//  void _placeTrees(BlockSource &, BlockPos const&, Random &, int, WeakRefT<FeatureRefTraits>, std::function<WeakRefT<FeatureRefTraits> (Random &)> const&); //TODO: incomplete function definition // _ZN24LegacyTreeFeatureHelpers11_placeTreesER11BlockSourceRK8BlockPosR6Randomi8WeakRefTI16FeatureRefTraitsERKSt8functionIFS9_S6_EE
    void _getRandomTreePosition(BlockSource &, BlockPos const&, Random &); // _ZN24LegacyTreeFeatureHelpers22_getRandomTreePositionER11BlockSourceRK8BlockPosR6Random
};

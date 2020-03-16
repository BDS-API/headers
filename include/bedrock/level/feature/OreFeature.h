#pragma once

#include "IFeature.h"
#include <vector>


class OreFeature : public IFeature {

public:
    virtual ~OreFeature(); // _ZN10OreFeatureD2Ev
    virtual void __fake_function0(); // fake
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const; // _ZNK10OreFeature5placeER21IBlockPlacementTargetRK8BlockPosR6Random
    OreFeature(); // _ZN10OreFeatureC2Ev
    OreFeature(int, Block const*, std::vector<Block const*> &&); // _ZN10OreFeatureC2EiPK5BlockOSt6vectorIS2_SaIS2_EE
    void _isReplaceable(Block const&)const; // _ZNK10OreFeature14_isReplaceableERK5Block
};

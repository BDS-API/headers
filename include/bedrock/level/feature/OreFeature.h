#pragma once

#include <vector>
#include "IFeature.h"


class OreFeature : IFeature {

public:
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    ~OreFeature();
    void _isReplaceable(Block const&)const;
    OreFeature();
    OreFeature(int, Block const*, std::vector<Block const*> &&);
};

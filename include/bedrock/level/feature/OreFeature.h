#pragma once

#include "../../../unmapped/IBlockPlacementTarget"
#include "../../util/Random"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"


class OreFeature : IFeature {

public:
    OreFeature::~OreFeature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    OreFeature(void);
    OreFeature(int, Block const*, std::vector<Block const*, std::allocator<Block const*>> &&);
    void _isReplaceable(Block const&)const;
};

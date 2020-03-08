#pragma once

#include "../../../unmapped/IBlockPlacementTarget"
#include "../../../unmapped/Block"


class OreFeature : IFeature {

public:
    virtual OreFeature::~OreFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    OreFeature(void);
    OreFeature(int, Block const*, std::vector<Block const*, std::allocator<Block const*>> &&);
    void _isReplaceable(Block const&)const;
};

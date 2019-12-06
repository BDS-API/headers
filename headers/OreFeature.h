#pragma once

class OreFeature : IFeature {

public:
    virtual ~OreFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    void OreFeature(void);
    void OreFeature(int, Block const*, std::vector<Block const*, std::allocator<Block const*>> &&);
    void _isReplaceable(Block const&)const;
};

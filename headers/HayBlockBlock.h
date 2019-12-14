#pragma once

class HayBlockBlock : RotatedPillarBlock {

public:
    virtual ~HayBlockBlock();
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;

    void HayBlockBlock(std::string const&, int);
};

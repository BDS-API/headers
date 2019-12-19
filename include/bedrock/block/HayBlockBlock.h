#pragma once

class HayBlockBlock : RotatedPillarBlock {

public:
    virtual HayBlockBlock::~HayBlockBlock();
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;

    HayBlockBlock(std::string const&, int);
};

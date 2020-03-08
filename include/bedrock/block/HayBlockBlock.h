#pragma once

#include "../../unmapped/BlockSource"
#include "../../unmapped/Block"


class HayBlockBlock : RotatedPillarBlock {

public:
    virtual HayBlockBlock::~HayBlockBlock();
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;

    HayBlockBlock(std::string const&, int);
};

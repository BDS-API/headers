#pragma once

#include <string>
#include "RotatedPillarBlock.h"


class HayBlockBlock : RotatedPillarBlock {

public:
    virtual void getVariant(Block const&)const;
    ~HayBlockBlock();
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    HayBlockBlock(std::string const&, int);
};

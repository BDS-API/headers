#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "RotatedPillarBlock.h"
#include "../../unmapped/Block.h"


class HayBlockBlock : RotatedPillarBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~HayBlockBlock();
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void getVariant(Block const&)const;
    HayBlockBlock(std::string const&, int);
};

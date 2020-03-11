#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./RotatedPillarBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"


class HayBlockBlock : RotatedPillarBlock {

public:
    virtual ~HayBlockBlock();
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;

    HayBlockBlock(std::string const&, int);
};

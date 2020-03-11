#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../../unmapped/Block.h"


class BedrockBlock : BlockLegacy {

public:
    virtual ~BedrockBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    BedrockBlock(std::string const&, int);
};

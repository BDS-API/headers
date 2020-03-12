#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"


class BedrockBlock : BlockLegacy {

public:
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~BedrockBlock();
    BedrockBlock(std::string const&, int);
};

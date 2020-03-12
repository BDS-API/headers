#pragma once

#include <string>
#include "BlockLegacy.h"


class BedrockBlock : BlockLegacy {

public:
    ~BedrockBlock();
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    BedrockBlock(std::string const&, int);
};

#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class PodzolBlock : BlockLegacy {

public:
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~PodzolBlock();
    PodzolBlock(std::string const&, int);
};

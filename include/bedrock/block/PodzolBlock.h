#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class PodzolBlock : BlockLegacy {

public:
    virtual ~PodzolBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    PodzolBlock(std::string const&, int);
};

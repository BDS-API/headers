#pragma once

#include <string>
#include "BlockLegacy.h"


class PodzolBlock : BlockLegacy {

public:
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~PodzolBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    PodzolBlock(std::string const&, int);
};

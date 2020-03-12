#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "BushBlock.h"


class DeadBush : BushBlock {

public:
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    ~DeadBush();
    DeadBush(std::string const&, int);
};

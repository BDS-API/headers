#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "./BushBlock.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include <string>


class DeadBush : BushBlock {

public:
    virtual ~DeadBush();
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;

    DeadBush(std::string const&, int);
};

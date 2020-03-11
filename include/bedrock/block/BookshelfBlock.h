#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class BookshelfBlock : BlockLegacy {

public:
    virtual ~BookshelfBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    BookshelfBlock(std::string const&, int);
};

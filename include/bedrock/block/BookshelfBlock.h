#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class BookshelfBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    ~BookshelfBlock();
    BookshelfBlock(std::string const&, int);
};

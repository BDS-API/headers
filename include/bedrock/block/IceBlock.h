#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class IceBlock : BlockLegacy {

public:
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    ~IceBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    void melt(BlockSource &, BlockPos const&);
    IceBlock(std::string const&, int, bool);
};

#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class IceBlock : BlockLegacy {

public:
    virtual ~IceBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;

    IceBlock(std::string const&, int, bool);
    void melt(BlockSource &, BlockPos const&);
};

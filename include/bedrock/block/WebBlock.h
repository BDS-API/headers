#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class WebBlock : BlockLegacy {

public:
    virtual void waterSpreadCausesSpawn()const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    ~WebBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    WebBlock(std::string const&, int);
};

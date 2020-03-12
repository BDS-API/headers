#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"


class StonecutterBlock : BlockLegacy {

public:
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isCraftingBlock()const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    ~StonecutterBlock();
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    StonecutterBlock(std::string const&, int);
};

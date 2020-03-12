#pragma once

#include "../util/AABB.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"


class MovingBlock : ActorBlock {

public:
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    ~MovingBlock();
    virtual bool pushesUpFallingBlocks()const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    MovingBlock(std::string const&, int);
};

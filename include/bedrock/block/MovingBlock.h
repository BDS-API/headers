#pragma once

#include <string>
#include "ActorBlock.h"


class MovingBlock : ActorBlock {

public:
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~MovingBlock();
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual bool pushesUpFallingBlocks()const;
    MovingBlock(std::string const&, int);
};

#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "../util/AABB"


class MovingBlock : ActorBlock {

public:
    virtual MovingBlock::~MovingBlock()
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual bool pushesUpFallingBlocks()const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;

    MovingBlock(std::string const&, int);
};

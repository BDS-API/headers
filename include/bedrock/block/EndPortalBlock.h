#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class EndPortalBlock : ActorBlock {

public:
    virtual bool isWaterBlocking()const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual bool canContainLiquid()const;
    ~EndPortalBlock();
    EndPortalBlock(std::string const&, int);
};

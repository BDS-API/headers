#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "actor/BlockActor"
#include "../util/AABB"


class EndPortalBlock : ActorBlock {

public:
    virtual EndPortalBlock::~EndPortalBlock()
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool isWaterBlocking()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    EndPortalBlock(std::string const&, int);
};

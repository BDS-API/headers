#pragma once

#include "../util/AABB.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "actor/BlockActor.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "../util/Random.h"


class EndPortalBlock : ActorBlock {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual bool canContainLiquid()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    ~EndPortalBlock();
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isWaterBlocking()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    EndPortalBlock(std::string const&, int);
};

#pragma once

#include "../util/AABB.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "../util/Random.h"


class EndGatewayBlock : ActorBlock {

public:
    virtual void waterSpreadCausesSpawn()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual bool isWaterBlocking()const;
    virtual bool canContainLiquid()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    ~EndGatewayBlock();
    EndGatewayBlock(std::string const&, int);
};

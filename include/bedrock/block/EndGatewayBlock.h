#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include <memory>
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include <vector>
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class EndGatewayBlock : ActorBlock {

public:
    virtual ~EndGatewayBlock();
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool isWaterBlocking()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    EndGatewayBlock(std::string const&, int);
};

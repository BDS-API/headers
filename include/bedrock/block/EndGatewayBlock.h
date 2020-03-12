#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class EndGatewayBlock : ActorBlock {

public:
    virtual bool canContainLiquid()const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~EndGatewayBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isWaterBlocking()const;
    EndGatewayBlock(std::string const&, int);
};

#pragma once

#include "unmapped/BlockSource"
#include "../util/Random"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/AABB"


class EndGatewayBlock : ActorBlock {

public:
    virtual EndGatewayBlock::~EndGatewayBlock()
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

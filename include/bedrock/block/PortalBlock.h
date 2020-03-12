#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class PortalBlock : BlockLegacy {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canContainLiquid()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool isWaterBlocking()const;
    ~PortalBlock();
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void waterSpreadCausesSpawn()const;
    void trySpawnPortal(BlockSource &, BlockPos const&)const;
    void _locateFloorYValue(BlockSource &, BlockPos const&)const;
//  void _canSpawnBasedOnDifficulty(Difficulty, unsigned long)const; //TODO: incomplete function definition
//  void _offsetSpawnPosition(Vec3 &, PortalAxis)const; //TODO: incomplete function definition
    PortalBlock(std::string const&, int);
};

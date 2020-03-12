#pragma once

#include <string>
#include "BlockLegacy.h"


class PortalBlock : BlockLegacy {

public:
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool isWaterBlocking()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    ~PortalBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    void trySpawnPortal(BlockSource &, BlockPos const&)const;
    PortalBlock(std::string const&, int);
//  void _canSpawnBasedOnDifficulty(Difficulty, unsigned long)const; //TODO: incomplete function definition
//  void _offsetSpawnPosition(Vec3 &, PortalAxis)const; //TODO: incomplete function definition
    void _locateFloorYValue(BlockSource &, BlockPos const&)const;
};

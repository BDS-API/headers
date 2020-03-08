#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/Vec3"
#include "../util/AABB"


class PortalBlock : BlockLegacy {

public:
    virtual PortalBlock::~PortalBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isWaterBlocking()const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    PortalBlock(std::string const&, int);
    void _canSpawnBasedOnDifficulty(Difficulty, unsigned long)const;
    void _locateFloorYValue(BlockSource &, BlockPos const&)const;
    void _offsetSpawnPosition(Vec3 &, PortalAxis)const;
    void trySpawnPortal(BlockSource &, BlockPos const&)const;
};

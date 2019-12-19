#pragma once

class PortalBlock : BlockLegacy {

public:
    virtual PortalBlock::~PortalBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isWaterBlocking(void)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    PortalBlock(std::string const&, int);
    void _canSpawnBasedOnDifficulty(Difficulty, unsigned long)const;
    void _locateFloorYValue(BlockSource &, BlockPos const&)const;
    void _offsetSpawnPosition(Vec3 &, PortalAxis)const;
    void trySpawnPortal(BlockSource &, BlockPos const&)const;
};

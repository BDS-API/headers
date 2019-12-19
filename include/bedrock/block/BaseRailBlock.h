#pragma once

class BaseRailBlock : BlockLegacy {

public:
    static long DIR_FLAT_Z;
    static long DIR_FLAT_X;

    virtual BaseRailBlock::~BaseRailBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isWaterBlocking(void)const;
    virtual bool isRailBlock(void)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canSpawnOn(void)const;

    bool isRail(BlockSource &, BlockPos const&);
    void _createCircuitComponent(BlockSource &, BlockPos const&);
    void _isFacingWestEast(BlockSource &, BlockPos const&);
    void _canSurvive(BlockSource const&, BlockPos const&)const;
    bool isRail(Block const&);
    BaseRailBlock(std::string const&, int, bool);
    bool isUsesDataBit(void)const;
    void _updatePlacement(BlockSource &, BlockPos const&)const;
    void _blockStillExists(BlockSource const&, BlockPos const&)const;
    void updateDir(BlockSource &, BlockPos const&, bool)const;
};

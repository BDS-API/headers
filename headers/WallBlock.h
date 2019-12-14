#pragma once

class WallBlock : BlockLegacy {

public:
    static long WallBlock::WALL_WIDTH;
    static long WallBlock::WALL_HEIGHT;
    static long WallBlock::POST_WIDTH;
    static long WallBlock::POST_HEIGHT;

    virtual ~WallBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isWallBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched(void)const;

    void WallBlock(std::string const&, int, Material const&);
    void WallBlock(std::string const&, int, BlockLegacy const&);
};

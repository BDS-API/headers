#pragma once

class WallBlock : BlockLegacy {

public:
    static long WALL_WIDTH;
    static long WALL_HEIGHT;
    static long POST_WIDTH;
    static long POST_HEIGHT;
    static long WALL_NAMES[abi:cxx11];

    virtual WallBlock::~WallBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isWallBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched(void)const;

    WallBlock(std::string const&, int, Material const&);
    WallBlock(std::string const&, int, BlockLegacy const&);
};

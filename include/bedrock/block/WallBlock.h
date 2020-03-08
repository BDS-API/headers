#pragma once

#include "unmapped/BlockSource"
#include "../util/Random"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../util/AABB"


class WallBlock : BlockLegacy {

public:
    static long WALL_WIDTH;
    static long WALL_HEIGHT;
    static long POST_WIDTH;
    static long POST_HEIGHT;
    static long WALL_NAMES[abi:cxx11];

    virtual WallBlock::~WallBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isWallBlock()const;
    virtual bool canContainLiquid()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched()const;

    WallBlock(std::string const&, int, Material const&);
    WallBlock(std::string const&, int, BlockLegacy const&);
};

#pragma once

#include <string>
#include "BlockLegacy.h"


class WallBlock : BlockLegacy {

public:
    static long WALL_WIDTH;
    static long WALL_HEIGHT;
    static long POST_WIDTH;
    static long POST_HEIGHT;
    static std::string WALL_NAMES;

    virtual bool canContainLiquid()const;
    virtual bool canBeSilkTouched()const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    ~WallBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isWallBlock()const;
    WallBlock(std::string const&, int, Material const&);
    WallBlock(std::string const&, int, BlockLegacy const&);
};

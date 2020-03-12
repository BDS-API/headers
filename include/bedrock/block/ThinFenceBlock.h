#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class ThinFenceBlock : BlockLegacy {

public:
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    ~ThinFenceBlock();
    virtual bool canContainLiquid()const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isThinFenceBlock()const;
    ThinFenceBlock(std::string const&, int, Material const&, bool, bool, bool);
};

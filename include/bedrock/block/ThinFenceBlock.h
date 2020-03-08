#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/Random"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../../unmapped/BaseGameVersion"
#include "../util/AABB"


class ThinFenceBlock : BlockLegacy {

public:
    virtual ThinFenceBlock::~ThinFenceBlock()
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isThinFenceBlock()const;
    virtual bool canContainLiquid()const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;

    ThinFenceBlock(std::string const&, int, Material const&, bool, bool, bool);
};

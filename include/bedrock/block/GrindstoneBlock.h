#pragma once

#include <string>
#include "BlockLegacy.h"


class GrindstoneBlock : BlockLegacy {

public:
    virtual bool canContainLiquid()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isInteractiveBlock()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    ~GrindstoneBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    void _determineAttachment(Actor &, BlockPos const&, unsigned char)const;
    void _getShape(Block const&, AABB &)const;
    GrindstoneBlock(std::string const&, int);
};

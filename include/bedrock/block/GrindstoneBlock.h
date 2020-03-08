#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class GrindstoneBlock : BlockLegacy {

public:
    GrindstoneBlock::~GrindstoneBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isInteractiveBlock()const;
    virtual bool canContainLiquid()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    GrindstoneBlock(std::string const&, int);
    void _getShape(Block const&, AABB &)const;
    void _determineAttachment(Actor &, BlockPos const&, unsigned char)const;
};

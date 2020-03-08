#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../actor/Player"
#include "../util/Vec3"
#include "../util/AABB"


class GrindstoneBlock : BlockLegacy {

public:
    virtual GrindstoneBlock::~GrindstoneBlock()
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

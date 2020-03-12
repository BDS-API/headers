#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"


class GrindstoneBlock : BlockLegacy {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    ~GrindstoneBlock();
    void _getShape(Block const&, AABB &)const;
    GrindstoneBlock(std::string const&, int);
    void _determineAttachment(Actor &, BlockPos const&, unsigned char)const;
};

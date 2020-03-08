#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class PistonArmBlock : BlockLegacy {

public:
    PistonArmBlock::~PistonArmBlock()
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool canContainLiquid()const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual bool canBeSilkTouched()const;

    PistonArmBlock(std::string const&, int, PistonBlock::Type);
    void _getCollisions(AABB &, AABB &, AABB &, unsigned char)const;
    bool isSticky()const;
};

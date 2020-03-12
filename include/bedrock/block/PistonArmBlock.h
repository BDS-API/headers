#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class PistonArmBlock : BlockLegacy {

public:
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual bool canContainLiquid()const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    ~PistonArmBlock();
    virtual bool canBeSilkTouched()const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    void _getCollisions(AABB &, AABB &, AABB &, unsigned char)const;
//  PistonArmBlock(std::string const&, int, PistonBlock::Type); //TODO: incomplete function definition
    bool isSticky()const;
};

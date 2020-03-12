#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class PistonArmBlock : BlockLegacy {

public:
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual bool canContainLiquid()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    ~PistonArmBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    void _getCollisions(AABB &, AABB &, AABB &, unsigned char)const;
    bool isSticky()const;
//  PistonArmBlock(std::string const&, int, PistonBlock::Type); //TODO: incomplete function definition
};

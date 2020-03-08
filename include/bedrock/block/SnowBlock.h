#pragma once

#include "unmapped/BlockSource"
#include "../util/Random"
#include "../actor/Actor"
#include "../actor/Mob"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/AABB"


class SnowBlock : BlockLegacy {

public:
    virtual SnowBlock::~SnowBlock()
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;

    SnowBlock(std::string const&, int);
};

#pragma once

#include "../actor/Actor"
#include "../actor/Mob"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class SnowBlock : BlockLegacy {

public:
    SnowBlock::~SnowBlock()
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;

    SnowBlock(std::string const&, int);
};

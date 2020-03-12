#pragma once

#include <string>
#include "BlockLegacy.h"


class SnowBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;
    ~SnowBlock();
    virtual void waterSpreadCausesSpawn()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    SnowBlock(std::string const&, int);
};

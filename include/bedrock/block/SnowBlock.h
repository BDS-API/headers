#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Mob.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class SnowBlock : BlockLegacy {

public:
    virtual void waterSpreadCausesSpawn()const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    ~SnowBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    SnowBlock(std::string const&, int);
};

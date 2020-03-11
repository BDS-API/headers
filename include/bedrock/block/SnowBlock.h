#pragma once

#include "../actor/Mob.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class SnowBlock : BlockLegacy {

public:
    virtual ~SnowBlock();
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;

    SnowBlock(std::string const&, int);
};

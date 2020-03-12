#pragma once

#include "../util/AABB.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "BlockLegacy.h"


class StructureVoid : BlockLegacy {

public:
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canHaveExtraData()const;
    ~StructureVoid();
    virtual bool canBeSilkTouched()const;
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    StructureVoid(std::string const&, int);
};

#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class StructureVoid : BlockLegacy {

public:
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual bool canHaveExtraData()const;
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canBeSilkTouched()const;
    ~StructureVoid();
    StructureVoid(std::string const&, int);
};

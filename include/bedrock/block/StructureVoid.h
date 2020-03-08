#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class StructureVoid : BlockLegacy {

public:
    StructureVoid::~StructureVoid()
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canHaveExtraData()const;
    virtual bool canBeSilkTouched()const;

    StructureVoid(std::string const&, int);
};

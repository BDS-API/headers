#pragma once

#include <string>
#include "BlockLegacy.h"


class SnowBlock : BlockLegacy {

public:
    ~SnowBlock(); // _ZN9SnowBlockD2Ev
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK9SnowBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void waterSpreadCausesSpawn()const; // _ZNK9SnowBlock22waterSpreadCausesSpawnEv
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK9SnowBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9SnowBlock15getResourceItemER6RandomRK5Blocki
    virtual void calcGroundFriction(Mob &, BlockPos const&)const; // _ZNK9SnowBlock18calcGroundFrictionER3MobRK8BlockPos
    SnowBlock(std::string const&, int); // _ZN9SnowBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

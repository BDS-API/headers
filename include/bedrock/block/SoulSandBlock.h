#pragma once

#include <string>
#include "BlockLegacy.h"


class SoulSandBlock : BlockLegacy {

public:
    ~SoulSandBlock(); // _ZN13SoulSandBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13SoulSandBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK13SoulSandBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK13SoulSandBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK13SoulSandBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13SoulSandBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK13SoulSandBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK13SoulSandBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    SoulSandBlock(std::string const&, int); // _ZN13SoulSandBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _tryAddBubbleColumnSegment(BlockSource &, BlockPos const&)const; // _ZNK13SoulSandBlock26_tryAddBubbleColumnSegmentER11BlockSourceRK8BlockPos
};

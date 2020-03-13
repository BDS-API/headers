#pragma once

#include <string>
#include "BlockLegacy.h"
#include <vector>


class StructureVoid : BlockLegacy {

public:
    ~StructureVoid(); // _ZN13StructureVoidD2Ev
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK13StructureVoid17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const; // _ZNK13StructureVoid19isObstructingChestsER11BlockSourceRK8BlockPos
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK13StructureVoid18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK13StructureVoid15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK13StructureVoid12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool canHaveExtraData()const; // _ZNK13StructureVoid16canHaveExtraDataEv
    virtual bool canBeSilkTouched()const; // _ZNK13StructureVoid16canBeSilkTouchedEv
    StructureVoid(std::string const&, int); // _ZN13StructureVoidC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

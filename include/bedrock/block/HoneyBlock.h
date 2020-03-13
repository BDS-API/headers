#pragma once

#include <string>
#include "BlockLegacy.h"


class HoneyBlock : BlockLegacy {

public:
    ~HoneyBlock(); // _ZN10HoneyBlockD2Ev
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK10HoneyBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void onStepOn(Actor &, BlockPos const&)const; // _ZNK10HoneyBlock8onStepOnER5ActorRK8BlockPos
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK10HoneyBlock8onFallOnER11BlockSourceRK8BlockPosP5Actorf
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK10HoneyBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual void getExtraRenderLayers()const; // _ZNK10HoneyBlock20getExtraRenderLayersEv
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK10HoneyBlock14getVisualShapeERK5BlockR4AABBb
    HoneyBlock(std::string const&, int, Material const&); // _ZN10HoneyBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void _isSlidingDown(BlockPos const&, Actor &)const; // _ZNK10HoneyBlock14_isSlidingDownERK8BlockPosR5Actor
};

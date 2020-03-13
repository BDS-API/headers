#pragma once

#include <string>
#include "BlockLegacy.h"


class FarmBlock : BlockLegacy {

public:
    ~FarmBlock(); // _ZN9FarmBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9FarmBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9FarmBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool canContainLiquid()const; // _ZNK9FarmBlock16canContainLiquidEv
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const; // _ZNK9FarmBlock15transformOnFallER11BlockSourceRK8BlockPosP5Actorf
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9FarmBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9FarmBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9FarmBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getVariant(Block const&)const; // _ZNK9FarmBlock10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK9FarmBlock16canBeSilkTouchedEv
    FarmBlock(std::string const&, int); // _ZN9FarmBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    bool isNearWater(BlockSource &, BlockPos const&)const; // _ZNK9FarmBlock11isNearWaterER11BlockSourceRK8BlockPos
    bool isUnderCrops(BlockSource &, BlockPos const&)const; // _ZNK9FarmBlock12isUnderCropsER11BlockSourceRK8BlockPos
};

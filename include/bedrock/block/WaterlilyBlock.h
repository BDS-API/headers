#pragma once

#include <string>
#include "BushBlock.h"


class WaterlilyBlock : BushBlock {

public:
    ~WaterlilyBlock(); // _ZN14WaterlilyBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK14WaterlilyBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool canContainLiquid()const; // _ZNK14WaterlilyBlock16canContainLiquidEv
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK14WaterlilyBlock10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK14WaterlilyBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK14WaterlilyBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getColor(Block const&)const; // _ZNK14WaterlilyBlock8getColorERK5Block
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const; // _ZNK14WaterlilyBlock13getColorAtPosER11BlockSourceRK8BlockPos
    WaterlilyBlock(std::string const&, int); // _ZN14WaterlilyBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

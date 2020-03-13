#pragma once

#include <string>
#include "LiquidBlock.h"


class LiquidBlockStatic : LiquidBlock {

public:
    ~LiquidBlockStatic(); // _ZN17LiquidBlockStaticD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17LiquidBlockStatic4tickER11BlockSourceRK8BlockPosR6Random
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK17LiquidBlockStatic15neighborChangedER11BlockSourceRK8BlockPosS4_
    LiquidBlockStatic(std::string const&, int, Material const&); // _ZN17LiquidBlockStaticC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void _setDynamic(BlockSource &, BlockPos const&)const; // _ZNK17LiquidBlockStatic11_setDynamicER11BlockSourceRK8BlockPos
    void _isFlammable(BlockSource &, BlockPos const&); // _ZN17LiquidBlockStatic12_isFlammableER11BlockSourceRK8BlockPos
};

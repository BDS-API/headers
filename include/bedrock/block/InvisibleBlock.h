#pragma once

#include <string>
#include "BlockLegacy.h"


class InvisibleBlock : BlockLegacy {

public:
    ~InvisibleBlock(); // _ZN14InvisibleBlockD2Ev
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const; // _ZNK14InvisibleBlock4clipER11BlockSourceRK8BlockPosRK4Vec3S7_b
    InvisibleBlock(std::string const&, int, Material const&); // _ZN14InvisibleBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};

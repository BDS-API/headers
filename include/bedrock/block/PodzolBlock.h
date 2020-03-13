#pragma once

#include <string>
#include "BlockLegacy.h"


class PodzolBlock : BlockLegacy {

public:
    ~PodzolBlock(); // _ZN11PodzolBlockD2Ev
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11PodzolBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11PodzolBlock15getResourceItemER6RandomRK5Blocki
    PodzolBlock(std::string const&, int); // _ZN11PodzolBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

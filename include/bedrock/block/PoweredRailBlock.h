#pragma once

#include <string>
#include "BaseRailBlock.h"


class PoweredRailBlock : BaseRailBlock {

public:
    ~PoweredRailBlock(); // _ZN16PoweredRailBlockD2Ev
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK16PoweredRailBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void getVariant(Block const&)const; // _ZNK16PoweredRailBlock10getVariantERK5Block
    PoweredRailBlock(std::string const&, int); // _ZN16PoweredRailBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

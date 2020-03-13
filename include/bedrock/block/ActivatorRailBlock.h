#pragma once

#include <string>
#include "BaseRailBlock.h"


class ActivatorRailBlock : BaseRailBlock {

public:
    ~ActivatorRailBlock(); // _ZN18ActivatorRailBlockD2Ev
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK18ActivatorRailBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void getVariant(Block const&)const; // _ZNK18ActivatorRailBlock10getVariantERK5Block
    ActivatorRailBlock(std::string const&, int); // _ZN18ActivatorRailBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

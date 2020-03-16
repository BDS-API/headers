#pragma once

#include <string>
#include "BaseRailBlock.h"


class PoweredRailBlock : public BaseRailBlock {

public:
    virtual ~PoweredRailBlock(); // _ZN16PoweredRailBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK16PoweredRailBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void getVariant(Block const&)const; // _ZNK16PoweredRailBlock10getVariantERK5Block
    PoweredRailBlock(std::string const&, int); // _ZN16PoweredRailBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

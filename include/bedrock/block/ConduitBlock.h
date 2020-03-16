#pragma once

#include <string>
#include "ActorBlock.h"


class ConduitBlock : public ActorBlock {

public:
    virtual ~ConduitBlock(); // _ZN12ConduitBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canContainLiquid()const; // _ZNK12ConduitBlock16canContainLiquidEv
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK12ConduitBlock8mayPlaceER11BlockSourceRK8BlockPosh
    ConduitBlock(std::string const&, int); // _ZN12ConduitBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

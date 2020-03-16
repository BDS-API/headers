#pragma once

#include <string>
#include "BlockLegacy.h"


class BarrierBlock : public BlockLegacy {

public:
    virtual ~BarrierBlock(); // _ZN12BarrierBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK12BarrierBlock10canConnectERK5BlockhS2_
    virtual bool canContainLiquid()const; // _ZNK12BarrierBlock16canContainLiquidEv
    virtual void getShadeBrightness()const; // _ZNK12BarrierBlock18getShadeBrightnessEv
    BarrierBlock(std::string const&, int); // _ZN12BarrierBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

#pragma once

#include <string>
#include "BlockLegacy.h"


class SeaLanternBlock : BlockLegacy {

public:
    ~SeaLanternBlock(); // _ZN15SeaLanternBlockD2Ev
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK15SeaLanternBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15SeaLanternBlock15getResourceItemER6RandomRK5Blocki
    virtual bool canBeSilkTouched()const; // _ZNK15SeaLanternBlock16canBeSilkTouchedEv
    SeaLanternBlock(std::string const&, int); // _ZN15SeaLanternBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

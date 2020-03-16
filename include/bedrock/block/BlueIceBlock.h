#pragma once

#include <string>
#include "BlockLegacy.h"


class BlueIceBlock : public BlockLegacy {

public:
    virtual ~BlueIceBlock(); // _ZN12BlueIceBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK12BlueIceBlock16getResourceCountER6RandomRK5Blocki
    BlueIceBlock(std::string const&, int); // _ZN12BlueIceBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

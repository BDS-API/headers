#pragma once

#include <string>
#include "BlockLegacy.h"


class HoneycombBlock : public BlockLegacy {

public:
    virtual ~HoneycombBlock(); // _ZN14HoneycombBlockD2Ev
    virtual void __fake_function0(); // fake
    HoneycombBlock(std::string const&, int, Material const&); // _ZN14HoneycombBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};

#pragma once

#include <string>
#include "BlockLegacy.h"


class HoneycombBlock : BlockLegacy {

public:
    ~HoneycombBlock(); // _ZN14HoneycombBlockD2Ev
    HoneycombBlock(std::string const&, int, Material const&); // _ZN14HoneycombBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};

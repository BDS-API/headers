#pragma once

#include <string>
#include "BlockLegacy.h"


class DriedKelpBlock : BlockLegacy {

public:
    ~DriedKelpBlock(); // _ZN14DriedKelpBlockD2Ev
    DriedKelpBlock(std::string const&, int, Material const&); // _ZN14DriedKelpBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};

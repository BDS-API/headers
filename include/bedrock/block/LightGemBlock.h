#pragma once

#include <string>
#include "BlockLegacy.h"


class LightGemBlock : BlockLegacy {

public:
    ~LightGemBlock(); // _ZN13LightGemBlockD2Ev
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK13LightGemBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13LightGemBlock15getResourceItemER6RandomRK5Blocki
    LightGemBlock(std::string const&, int, Material const&); // _ZN13LightGemBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};

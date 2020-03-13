#pragma once

#include <string>
#include "BlockLegacy.h"


class CartographyTableBlock : BlockLegacy {

public:
    ~CartographyTableBlock(); // _ZN21CartographyTableBlockD2Ev
    virtual bool isCraftingBlock()const; // _ZNK21CartographyTableBlock15isCraftingBlockEv
    virtual void use(Player &, BlockPos const&)const; // _ZNK21CartographyTableBlock3useER6PlayerRK8BlockPos
    CartographyTableBlock(std::string const&, int); // _ZN21CartographyTableBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

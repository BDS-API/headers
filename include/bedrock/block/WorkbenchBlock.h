#pragma once

#include <string>
#include "BlockLegacy.h"


class WorkbenchBlock : BlockLegacy {

public:
    ~WorkbenchBlock(); // _ZN14WorkbenchBlockD2Ev
    virtual bool isCraftingBlock()const; // _ZNK14WorkbenchBlock15isCraftingBlockEv
    virtual void use(Player &, BlockPos const&)const; // _ZNK14WorkbenchBlock3useER6PlayerRK8BlockPos
    WorkbenchBlock(std::string const&, int); // _ZN14WorkbenchBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

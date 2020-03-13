#pragma once

#include <string>
#include "FaceDirectionalBlock.h"


class LoomBlock : FaceDirectionalBlock {

public:
    ~LoomBlock(); // _ZN9LoomBlockD2Ev
    virtual bool isCraftingBlock()const; // _ZNK9LoomBlock15isCraftingBlockEv
    virtual void use(Player &, BlockPos const&)const; // _ZNK9LoomBlock3useER6PlayerRK8BlockPos
    LoomBlock(std::string const&, int); // _ZN9LoomBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

#pragma once

#include <string>
#include "BlockLegacy.h"


class BedrockBlock : BlockLegacy {

public:
    ~BedrockBlock(); // _ZN12BedrockBlockD2Ev
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12BedrockBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK12BedrockBlock24getSilkTouchItemInstanceERK5Block
    BedrockBlock(std::string const&, int); // _ZN12BedrockBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

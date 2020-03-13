#pragma once

#include <string>
#include "FurnaceBlock.h"


class SmokerBlock : FurnaceBlock {

public:
    ~SmokerBlock(); // _ZN11SmokerBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11SmokerBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11SmokerBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK11SmokerBlock3useER6PlayerRK8BlockPos
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK11SmokerBlock24getSilkTouchItemInstanceERK5Block
    SmokerBlock(std::string const&, int, bool); // _ZN11SmokerBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
};

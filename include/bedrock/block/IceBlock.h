#pragma once

#include <string>
#include "BlockLegacy.h"


class IceBlock : BlockLegacy {

public:
    ~IceBlock(); // _ZN8IceBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK8IceBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK8IceBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK8IceBlock16getResourceCountER6RandomRK5Blocki
    IceBlock(std::string const&, int, bool); // _ZN8IceBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void melt(BlockSource &, BlockPos const&); // _ZN8IceBlock4meltER11BlockSourceRK8BlockPos
};

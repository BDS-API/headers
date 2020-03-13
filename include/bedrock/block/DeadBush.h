#pragma once

#include <string>
#include "BushBlock.h"


class DeadBush : BushBlock {

public:
    ~DeadBush(); // _ZN8DeadBushD2Ev
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK8DeadBush10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK8DeadBush16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK8DeadBush15getResourceItemER6RandomRK5Blocki
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK8DeadBush13playerDestroyER6PlayerRK8BlockPosRK5Block
    DeadBush(std::string const&, int); // _ZN8DeadBushC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

#pragma once

#include <string>
#include "ChestBlock.h"


class EnderChestBlock : public ChestBlock {

public:
    virtual ~EnderChestBlock(); // _ZN15EnderChestBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK15EnderChestBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15EnderChestBlock15getResourceItemER6RandomRK5Blocki
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK15EnderChestBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK15EnderChestBlock16canBeSilkTouchedEv
    EnderChestBlock(std::string const&, int); // _ZN15EnderChestBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

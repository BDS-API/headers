#pragma once

#include <string>
#include "FurnaceBlock.h"


class BlastFurnaceBlock : public FurnaceBlock {

public:
    virtual ~BlastFurnaceBlock(); // _ZN17BlastFurnaceBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK17BlastFurnaceBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK17BlastFurnaceBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK17BlastFurnaceBlock3useER6PlayerRK8BlockPos
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK17BlastFurnaceBlock24getSilkTouchItemInstanceERK5Block
    BlastFurnaceBlock(std::string const&, int, bool); // _ZN17BlastFurnaceBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
};

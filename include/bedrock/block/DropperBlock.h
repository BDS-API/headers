#pragma once

#include <string>
#include "DispenserBlock.h"


class DropperBlock : DispenserBlock {

public:
    ~DropperBlock(); // _ZN12DropperBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK12DropperBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12DropperBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK12DropperBlock24getSilkTouchItemInstanceERK5Block
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const; // _ZNK12DropperBlock12dispenseFromER11BlockSourceRK8BlockPos
    DropperBlock(std::string const&, int); // _ZN12DropperBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getAttachedFace(int); // _ZN12DropperBlock15getAttachedFaceEi
};

#pragma once

#include "RotatedPillarBlock.h"
#include <string>


class StrippedLogBlock : RotatedPillarBlock {

public:
    ~StrippedLogBlock(); // _ZN16StrippedLogBlockD2Ev
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK16StrippedLogBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK16StrippedLogBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK16StrippedLogBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getVariant(Block const&)const; // _ZNK16StrippedLogBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK16StrippedLogBlock24getSilkTouchItemInstanceERK5Block
    StrippedLogBlock(std::string const&, int); // _ZN16StrippedLogBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

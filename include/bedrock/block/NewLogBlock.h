#pragma once

#include <string>
#include "LogBlock.h"


class NewLogBlock : LogBlock {

public:
    ~NewLogBlock(); // _ZN11NewLogBlockD2Ev
    virtual bool isStrippable(Block const&)const; // _ZNK11NewLogBlock12isStrippableERK5Block
    virtual void getStrippedBlock(Block const&)const; // _ZNK11NewLogBlock16getStrippedBlockERK5Block
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11NewLogBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11NewLogBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK11NewLogBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual void getVariant(Block const&)const; // _ZNK11NewLogBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK11NewLogBlock24getSilkTouchItemInstanceERK5Block
    NewLogBlock(std::string const&, int); // _ZN11NewLogBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

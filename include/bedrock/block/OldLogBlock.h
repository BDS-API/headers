#pragma once

#include <string>
#include "LogBlock.h"


class OldLogBlock : LogBlock {

public:
    ~OldLogBlock(); // _ZN11OldLogBlockD2Ev
    virtual bool isStrippable(Block const&)const; // _ZNK11OldLogBlock12isStrippableERK5Block
    virtual void getStrippedBlock(Block const&)const; // _ZNK11OldLogBlock16getStrippedBlockERK5Block
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11OldLogBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11OldLogBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK11OldLogBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK11OldLogBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK11OldLogBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK11OldLogBlock24getSilkTouchItemInstanceERK5Block
    OldLogBlock(std::string const&, int); // _ZN11OldLogBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

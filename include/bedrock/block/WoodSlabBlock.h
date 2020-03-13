#pragma once

#include <string>
#include "SlabBlock.h"


class WoodSlabBlock : SlabBlock {

public:
    ~WoodSlabBlock(); // _ZN13WoodSlabBlockD2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK13WoodSlabBlock15isValidAuxValueEi
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13WoodSlabBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13WoodSlabBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK13WoodSlabBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual void getVariant(Block const&)const; // _ZNK13WoodSlabBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK13WoodSlabBlock24getSilkTouchItemInstanceERK5Block
//  WoodSlabBlock(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition // _ZN13WoodSlabBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib7WeakPtrI11BlockLegacyE
};

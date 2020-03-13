#pragma once

#include <string>
#include "LeafBlock.h"


class NewLeafBlock : LeafBlock {

public:
    ~NewLeafBlock(); // _ZN12NewLeafBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK12NewLeafBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12NewLeafBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK12NewLeafBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK12NewLeafBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual void getVariant(Block const&)const; // _ZNK12NewLeafBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK12NewLeafBlock24getSilkTouchItemInstanceERK5Block
    virtual void getExtraResourceItem(Block const&)const; // _ZNK12NewLeafBlock20getExtraResourceItemERK5Block
//  NewLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>); //TODO: incomplete function definition // _ZN12NewLeafBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi7WeakPtrI11BlockLegacyE
};

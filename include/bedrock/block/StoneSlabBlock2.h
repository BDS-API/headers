#pragma once

#include <string>
#include "SlabBlock.h"


class StoneSlabBlock2 : SlabBlock {

public:
    static std::string SLAB_NAMES;

    ~StoneSlabBlock2(); // _ZN15StoneSlabBlock2D2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK15StoneSlabBlock215isValidAuxValueEi
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15StoneSlabBlock215getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15StoneSlabBlock214asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK15StoneSlabBlock218buildDescriptionIdB5cxx11ERK5Block
    virtual void getVariant(Block const&)const; // _ZNK15StoneSlabBlock210getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK15StoneSlabBlock224getSilkTouchItemInstanceERK5Block
//  StoneSlabBlock2(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition // _ZN15StoneSlabBlock2C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib7WeakPtrI11BlockLegacyE
};

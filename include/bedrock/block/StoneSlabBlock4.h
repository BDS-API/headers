#pragma once

#include <string>
#include "SlabBlock.h"


class StoneSlabBlock4 : SlabBlock {

public:
    static std::string SLAB_NAMES;

    ~StoneSlabBlock4(); // _ZN15StoneSlabBlock4D2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK15StoneSlabBlock415isValidAuxValueEi
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15StoneSlabBlock415getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15StoneSlabBlock414asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK15StoneSlabBlock418buildDescriptionIdB5cxx11ERK5Block
    virtual void getVariant(Block const&)const; // _ZNK15StoneSlabBlock410getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK15StoneSlabBlock424getSilkTouchItemInstanceERK5Block
//  StoneSlabBlock4(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition // _ZN15StoneSlabBlock4C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib7WeakPtrI11BlockLegacyE
};

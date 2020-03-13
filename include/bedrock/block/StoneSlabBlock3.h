#pragma once

#include <string>
#include "SlabBlock.h"


class StoneSlabBlock3 : SlabBlock {

public:
    static std::string SLAB_NAMES;

    ~StoneSlabBlock3(); // _ZN15StoneSlabBlock3D2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK15StoneSlabBlock315isValidAuxValueEi
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15StoneSlabBlock315getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK15StoneSlabBlock314asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK15StoneSlabBlock318buildDescriptionIdB5cxx11ERK5Block
    virtual void getVariant(Block const&)const; // _ZNK15StoneSlabBlock310getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK15StoneSlabBlock324getSilkTouchItemInstanceERK5Block
//  StoneSlabBlock3(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition // _ZN15StoneSlabBlock3C2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib7WeakPtrI11BlockLegacyE
};

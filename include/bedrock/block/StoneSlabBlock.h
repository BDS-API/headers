#pragma once

#include <string>
#include "SlabBlock.h"


class StoneSlabBlock : public SlabBlock {

public:
    static std::string SLAB_NAMES;

    virtual ~StoneSlabBlock(); // _ZN14StoneSlabBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isValidAuxValue(int)const; // _ZNK14StoneSlabBlock15isValidAuxValueEi
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14StoneSlabBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK14StoneSlabBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK14StoneSlabBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual void getVariant(Block const&)const; // _ZNK14StoneSlabBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK14StoneSlabBlock24getSilkTouchItemInstanceERK5Block
//    StoneSlabBlock(std::string const&, int, bool, long); //TODO: incomplete function definition // _ZN14StoneSlabBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib7WeakPtrI11BlockLegacyE
};

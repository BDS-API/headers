#pragma once

#include <string>
#include "BlockLegacy.h"


class CoralBlock : BlockLegacy {

public:
    static long DEAD_CORAL_OFFSET;
    static long DEAD_CORAL_BIT;

    ~CoralBlock(); // _ZN10CoralBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10CoralBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isValidAuxValue(int)const; // _ZNK10CoralBlock15isValidAuxValueEi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK10CoralBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10CoralBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK10CoralBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10CoralBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK10CoralBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK10CoralBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK10CoralBlock10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK10CoralBlock16canBeSilkTouchedEv
    CoralBlock(std::string const&, int); // _ZN10CoralBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

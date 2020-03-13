#pragma once

#include <string>
#include "BlockLegacy.h"


class ColoredBlock : BlockLegacy {

public:
    ~ColoredBlock(); // _ZN12ColoredBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK12ColoredBlock15getResourceItemER6RandomRK5Blocki
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK12ColoredBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK12ColoredBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK12ColoredBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK12ColoredBlock24getSilkTouchItemInstanceERK5Block
    ColoredBlock(std::string const&, int, Material const&); // _ZN12ColoredBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};

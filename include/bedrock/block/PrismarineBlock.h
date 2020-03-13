#pragma once

#include <string>
#include "BlockLegacy.h"


class PrismarineBlock : BlockLegacy {

public:
    ~PrismarineBlock(); // _ZN15PrismarineBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15PrismarineBlock15getResourceItemER6RandomRK5Blocki
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK15PrismarineBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK15PrismarineBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK15PrismarineBlock28isAuxValueRelevantForPickingEv
    PrismarineBlock(std::string const&, int); // _ZN15PrismarineBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

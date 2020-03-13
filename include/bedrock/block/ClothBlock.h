#pragma once

#include <string>
#include "BlockLegacy.h"


class ClothBlock : BlockLegacy {

public:
    ~ClothBlock(); // _ZN10ClothBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK10ClothBlock15getResourceItemER6RandomRK5Blocki
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK10ClothBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK10ClothBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK10ClothBlock24getSilkTouchItemInstanceERK5Block
    ClothBlock(std::string const&, int); // _ZN10ClothBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

#pragma once

#include <string>
#include "BlockLegacy.h"


class StoneBrickBlock : BlockLegacy {

public:
    ~StoneBrickBlock(); // _ZN15StoneBrickBlockD2Ev
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK15StoneBrickBlock15getResourceItemER6RandomRK5Blocki
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK15StoneBrickBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK15StoneBrickBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK15StoneBrickBlock24getSilkTouchItemInstanceERK5Block
    StoneBrickBlock(std::string const&, int, Material const&); // _ZN15StoneBrickBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};

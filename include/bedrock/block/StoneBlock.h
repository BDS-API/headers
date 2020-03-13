#pragma once

#include <string>
#include "BlockLegacy.h"


class StoneBlock : BlockLegacy {

public:
    ~StoneBlock(); // _ZN10StoneBlockD2Ev
    virtual bool canBeOriginalSurface()const; // _ZNK10StoneBlock20canBeOriginalSurfaceEv
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK10StoneBlock15getResourceItemER6RandomRK5Blocki
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK10StoneBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK10StoneBlock28isAuxValueRelevantForPickingEv
    StoneBlock(std::string const&, int); // _ZN10StoneBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

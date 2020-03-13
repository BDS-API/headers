#pragma once

#include <string>
#include "BlockLegacy.h"


class SandStoneBlock : BlockLegacy {

public:
    ~SandStoneBlock(); // _ZN14SandStoneBlockD2Ev
    virtual bool canBeOriginalSurface()const; // _ZNK14SandStoneBlock20canBeOriginalSurfaceEv
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14SandStoneBlock15getResourceItemER6RandomRK5Blocki
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK14SandStoneBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK14SandStoneBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK14SandStoneBlock24getSilkTouchItemInstanceERK5Block
    SandStoneBlock(std::string const&, int, Material const&); // _ZN14SandStoneBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};

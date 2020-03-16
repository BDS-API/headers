#pragma once

#include <string>
#include "ThinFenceBlock.h"


class StainedGlassPaneBlock : public ThinFenceBlock {

public:
    virtual ~StainedGlassPaneBlock(); // _ZN21StainedGlassPaneBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK21StainedGlassPaneBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK21StainedGlassPaneBlock28isAuxValueRelevantForPickingEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK21StainedGlassPaneBlock24getSilkTouchItemInstanceERK5Block
    StainedGlassPaneBlock(std::string const&, int, Material const&, bool, bool, bool); // _ZN21StainedGlassPaneBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Materialbbb
};

#pragma once

#include "../../unmapped/Material"
#include "../../unmapped/Block"


class StainedGlassPaneBlock : ThinFenceBlock {

public:
    virtual StainedGlassPaneBlock::~StainedGlassPaneBlock()
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StainedGlassPaneBlock(std::string const&, int, Material const&, bool, bool, bool);
};

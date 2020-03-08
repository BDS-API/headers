#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/Material"


class StainedGlassPaneBlock : ThinFenceBlock {

public:
    StainedGlassPaneBlock::~StainedGlassPaneBlock()
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StainedGlassPaneBlock(std::string const&, int, Material const&, bool, bool, bool);
};

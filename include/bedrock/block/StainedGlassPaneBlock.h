#pragma once

#include <string>
#include "ThinFenceBlock.h"


class StainedGlassPaneBlock : ThinFenceBlock {

public:
    virtual void getSilkTouchItemInstance(Block const&)const;
    ~StainedGlassPaneBlock();
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    StainedGlassPaneBlock(std::string const&, int, Material const&, bool, bool, bool);
};

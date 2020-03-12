#pragma once

#include "ThinFenceBlock.h"
#include "../../unmapped/Block.h"
#include <string>
#include "../../unmapped/Material.h"


class StainedGlassPaneBlock : ThinFenceBlock {

public:
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~StainedGlassPaneBlock();
    virtual void getSilkTouchItemInstance(Block const&)const;
    StainedGlassPaneBlock(std::string const&, int, Material const&, bool, bool, bool);
};

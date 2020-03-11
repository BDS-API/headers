#pragma once

#include "../../unmapped/Block.h"
#include "./ThinFenceBlock.h"
#include "../../unmapped/Material.h"
#include <string>


class StainedGlassPaneBlock : ThinFenceBlock {

public:
    virtual ~StainedGlassPaneBlock();
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StainedGlassPaneBlock(std::string const&, int, Material const&, bool, bool, bool);
};

#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class SandStoneBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool canBeOriginalSurface()const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~SandStoneBlock();
    virtual void getSilkTouchItemInstance(Block const&)const;
    SandStoneBlock(std::string const&, int, Material const&);
};

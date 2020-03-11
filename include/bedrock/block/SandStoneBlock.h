#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class SandStoneBlock : BlockLegacy {

public:
    virtual ~SandStoneBlock();
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    SandStoneBlock(std::string const&, int, Material const&);
};

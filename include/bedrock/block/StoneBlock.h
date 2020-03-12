#pragma once

#include "BlockLegacy.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"
#include <string>


class StoneBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~StoneBlock();
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool canBeOriginalSurface()const;
    StoneBlock(std::string const&, int);
};

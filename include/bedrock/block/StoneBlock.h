#pragma once

#include "./BlockLegacy.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include <string>


class StoneBlock : BlockLegacy {

public:
    virtual ~StoneBlock();
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;

    StoneBlock(std::string const&, int);
};

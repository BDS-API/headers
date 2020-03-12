#pragma once

#include <string>
#include "BlockLegacy.h"


class StoneBlock : BlockLegacy {

public:
    ~StoneBlock();
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeOriginalSurface()const;
    virtual bool isAuxValueRelevantForPicking()const;
    StoneBlock(std::string const&, int);
};

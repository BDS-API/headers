#pragma once

#include <string>
#include "BlockLegacy.h"


class SandStoneBlock : BlockLegacy {

public:
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~SandStoneBlock();
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    SandStoneBlock(std::string const&, int, Material const&);
};

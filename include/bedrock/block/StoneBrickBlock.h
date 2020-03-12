#pragma once

#include <string>
#include "BlockLegacy.h"


class StoneBrickBlock : BlockLegacy {

public:
    ~StoneBrickBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    StoneBrickBlock(std::string const&, int, Material const&);
};

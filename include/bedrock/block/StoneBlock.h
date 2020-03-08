#pragma once

#include "../util/Random"
#include "../../unmapped/Block"


class StoneBlock : BlockLegacy {

public:
    virtual StoneBlock::~StoneBlock()
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;

    StoneBlock(std::string const&, int);
};

#pragma once

#include "../util/Random"
#include "../../unmapped/Material"
#include "../../unmapped/Block"


class SandStoneBlock : BlockLegacy {

public:
    virtual SandStoneBlock::~SandStoneBlock()
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    SandStoneBlock(std::string const&, int, Material const&);
};

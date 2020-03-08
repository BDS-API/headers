#pragma once

#include "../util/Random"
#include "../../unmapped/Material"
#include "../../unmapped/Block"


class StoneBrickBlock : BlockLegacy {

public:
    virtual StoneBrickBlock::~StoneBrickBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StoneBrickBlock(std::string const&, int, Material const&);
};

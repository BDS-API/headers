#pragma once

#include "../util/Random"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class StoneBrickBlock : BlockLegacy {

public:
    StoneBrickBlock::~StoneBrickBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StoneBrickBlock(std::string const&, int, Material const&);
};

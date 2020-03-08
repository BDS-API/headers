#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class ConcreteBlock : BlockLegacy {

public:
    ConcreteBlock::~ConcreteBlock()
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    ConcreteBlock(std::string const&, int);
};

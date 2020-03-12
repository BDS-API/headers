#pragma once

#include <string>
#include "BlockLegacy.h"


class ConcreteBlock : BlockLegacy {

public:
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    ~ConcreteBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    ConcreteBlock(std::string const&, int);
};

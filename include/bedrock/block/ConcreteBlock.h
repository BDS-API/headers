#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ConcreteBlock : BlockLegacy {

public:
    ~ConcreteBlock();
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool isValidAuxValue(int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    ConcreteBlock(std::string const&, int);
};

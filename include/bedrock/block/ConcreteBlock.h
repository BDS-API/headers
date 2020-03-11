#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class ConcreteBlock : BlockLegacy {

public:
    virtual ~ConcreteBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    ConcreteBlock(std::string const&, int);
};

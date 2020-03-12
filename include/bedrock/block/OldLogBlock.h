#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "LogBlock.h"
#include "../util/Random.h"


class OldLogBlock : LogBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool isStrippable(Block const&)const;
    ~OldLogBlock();
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    OldLogBlock(std::string const&, int);
};

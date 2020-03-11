#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "./LogBlock.h"
#include "../util/Random.h"
#include <string>


class OldLogBlock : LogBlock {

public:
    virtual ~OldLogBlock();
    virtual bool isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    OldLogBlock(std::string const&, int);
};

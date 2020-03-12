#pragma once

#include <string>
#include "LogBlock.h"


class OldLogBlock : LogBlock {

public:
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getVariant(Block const&)const;
    ~OldLogBlock();
    virtual void getStrippedBlock(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isStrippable(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    OldLogBlock(std::string const&, int);
};

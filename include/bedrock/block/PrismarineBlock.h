#pragma once

#include <string>
#include "BlockLegacy.h"


class PrismarineBlock : BlockLegacy {

public:
    virtual std::string buildDescriptionId(Block const&)const;
    ~PrismarineBlock();
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    PrismarineBlock(std::string const&, int);
};

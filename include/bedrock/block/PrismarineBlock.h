#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class PrismarineBlock : BlockLegacy {

public:
    PrismarineBlock::~PrismarineBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;

    PrismarineBlock(std::string const&, int);
};

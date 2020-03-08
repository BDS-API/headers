#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class LogBlock : RotatedPillarBlock {

public:
    virtual LogBlock::~LogBlock()
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;

    LogBlock(std::string const&, int);
};

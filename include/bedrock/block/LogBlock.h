#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class LogBlock : RotatedPillarBlock {

public:
    LogBlock::~LogBlock()
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;

    LogBlock(std::string const&, int);
};

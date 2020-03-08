#pragma once

#include "../../unmapped/BlockSource"
#include "../../unmapped/Random"


class LogBlock : RotatedPillarBlock {

public:
    virtual LogBlock::~LogBlock();
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;

    LogBlock(std::string const&, int);
};

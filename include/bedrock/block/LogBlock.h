#pragma once

#include <string>
#include "RotatedPillarBlock.h"


class LogBlock : RotatedPillarBlock {

public:
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~LogBlock();
    LogBlock(std::string const&, int);
};

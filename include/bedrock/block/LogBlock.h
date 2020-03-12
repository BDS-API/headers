#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "RotatedPillarBlock.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class LogBlock : RotatedPillarBlock {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    ~LogBlock();
    virtual bool isAuxValueRelevantForPicking()const;
    LogBlock(std::string const&, int);
};

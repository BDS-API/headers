#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./RotatedPillarBlock.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class LogBlock : RotatedPillarBlock {

public:
    virtual ~LogBlock();
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;

    LogBlock(std::string const&, int);
};

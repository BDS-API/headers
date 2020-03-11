#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "./PatternEntry.h"
#include "./Block.h"
#include <functional>
#include "../bedrock/util/BlockPos.h"


class PatternEntry {

public:

    ~PatternEntry();
    PatternEntry(Block const&, std::function<bool (BlockSource &, BlockPos const&, Block const&)>);
    PatternEntry(PatternEntry const&);
    PatternEntry(PatternEntry &&);
};

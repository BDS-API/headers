#pragma once

#include <functional>


class PatternEntry {

public:
    ~PatternEntry();
    PatternEntry(PatternEntry &&);
    PatternEntry(PatternEntry const&);
    PatternEntry(Block const&, std::function<bool (BlockSource &, BlockPos const&, Block const&)>);
};

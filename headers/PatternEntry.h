#pragma once

class PatternEntry {

public:

    void PatternEntry(Block const&, std::function<bool ()(BlockSource &, BlockPos const&, Block const&)>);
    void PatternEntry(PatternEntry const&);
    void PatternEntry(PatternEntry&&);
};

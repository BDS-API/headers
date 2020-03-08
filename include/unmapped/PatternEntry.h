#pragma once



class PatternEntry {

public:

    PatternEntry(Block const&, std::function<bool ()(BlockSource &, BlockPos const&, Block const&)>);
    PatternEntry(PatternEntry const&);
    PatternEntry(PatternEntry&&);
};

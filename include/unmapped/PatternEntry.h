#pragma once

#include <functional>


class PatternEntry {

public:
    ~PatternEntry(); // _ZN12PatternEntryD2Ev
    PatternEntry(Block const&, std::function<bool (BlockSource &, BlockPos const&, Block const&)>); // _ZN12PatternEntryC2ERK5BlockSt8functionIFbR11BlockSourceRK8BlockPosS2_EE
    PatternEntry(PatternEntry const&); // _ZN12PatternEntryC2ERKS_
    PatternEntry(PatternEntry &&); // _ZN12PatternEntryC2EOS_
};

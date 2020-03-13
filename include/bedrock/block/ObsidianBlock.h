#pragma once

#include <string>
#include "BlockLegacy.h"


class ObsidianBlock : BlockLegacy {

public:
    ~ObsidianBlock(); // _ZN13ObsidianBlockD2Ev
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13ObsidianBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    ObsidianBlock(std::string const&, int, bool); // _ZN13ObsidianBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void poofParticles(BlockSource &, BlockPos const&)const; // _ZNK13ObsidianBlock13poofParticlesER11BlockSourceRK8BlockPos
};

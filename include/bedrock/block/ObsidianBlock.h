#pragma once

#include <string>
#include "BlockLegacy.h"


class ObsidianBlock : BlockLegacy {

public:
    ~ObsidianBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    void poofParticles(BlockSource &, BlockPos const&)const;
    ObsidianBlock(std::string const&, int, bool);
};

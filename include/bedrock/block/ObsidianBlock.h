#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"


class ObsidianBlock : BlockLegacy {

public:
    ObsidianBlock::~ObsidianBlock()
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    ObsidianBlock(std::string const&, int, bool);
    void poofParticles(BlockSource &, BlockPos const&)const;
};

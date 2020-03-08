#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../util/BlockPos"


class ObsidianBlock : BlockLegacy {

public:
    virtual ObsidianBlock::~ObsidianBlock()
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    ObsidianBlock(std::string const&, int, bool);
    void poofParticles(BlockSource &, BlockPos const&)const;
};

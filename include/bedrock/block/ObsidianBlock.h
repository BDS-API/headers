#pragma once

#include "unmapped/BlockSource.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include <string>


class ObsidianBlock : BlockLegacy {

public:
    virtual ~ObsidianBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    ObsidianBlock(std::string const&, int, bool);
    void poofParticles(BlockSource &, BlockPos const&)const;
};

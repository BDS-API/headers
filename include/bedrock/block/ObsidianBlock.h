#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../util/BlockPos.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ObsidianBlock : BlockLegacy {

public:
    ~ObsidianBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    void poofParticles(BlockSource &, BlockPos const&)const;
    ObsidianBlock(std::string const&, int, bool);
};

#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "HeavyBlock.h"


class DragonEggBlock : HeavyBlock {

public:
    virtual std::string getDustParticleName(Block const&)const;
    ~DragonEggBlock();
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getDustColor(Block const&)const;
    DragonEggBlock(std::string const&, int);
    void _teleport(BlockSource &, Random &, BlockPos const&)const;
};

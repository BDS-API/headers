#pragma once

#include "unmapped/BlockSource.h"
#include "./HeavyBlock.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class DragonEggBlock : HeavyBlock {

public:
    virtual ~DragonEggBlock();
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getDustColor(Block const&)const;
    virtual std::string getDustParticleName(Block const&)const;

    DragonEggBlock(std::string const&, int);
    void _teleport(BlockSource &, Random &, BlockPos const&)const;
};

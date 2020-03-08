#pragma once

#include "../actor/Player"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class DragonEggBlock : HeavyBlock {

public:
    DragonEggBlock::~DragonEggBlock()
    virtual bool breaksFallingBlocks(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName(Block const&)const;

    DragonEggBlock(std::string const&, int);
    void _teleport(BlockSource &, Random &, BlockPos const&)const;
};

#pragma once

#include <string>
#include "HeavyBlock.h"


class DragonEggBlock : HeavyBlock {

public:
    ~DragonEggBlock();
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getDustColor(Block const&)const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool breaksFallingBlocks(Block const&)const;
    void _teleport(BlockSource &, Random &, BlockPos const&)const;
    DragonEggBlock(std::string const&, int);
};

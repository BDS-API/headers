#pragma once

#include <string>
#include "ActorBlock.h"


class NetherReactorBlock : ActorBlock {

public:
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    ~NetherReactorBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    NetherReactorBlock(std::string const&, int, Material const&);
};

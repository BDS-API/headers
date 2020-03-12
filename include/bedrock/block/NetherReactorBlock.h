#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "ActorBlock.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class NetherReactorBlock : ActorBlock {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~NetherReactorBlock();
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    NetherReactorBlock(std::string const&, int, Material const&);
};

#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Material.h"
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class NetherReactorBlock : ActorBlock {

public:
    virtual ~NetherReactorBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;

    NetherReactorBlock(std::string const&, int, Material const&);
};

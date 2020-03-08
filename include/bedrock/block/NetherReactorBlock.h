#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class NetherReactorBlock : ActorBlock {

public:
    NetherReactorBlock::~NetherReactorBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;

    NetherReactorBlock(std::string const&, int, Material const&);
};

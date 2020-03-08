#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class NetherReactorBlock : ActorBlock {

public:
    virtual NetherReactorBlock::~NetherReactorBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;

    NetherReactorBlock(std::string const&, int, Material const&);
};

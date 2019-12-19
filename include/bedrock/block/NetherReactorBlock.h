#pragma once

class NetherReactorBlock : ActorBlock {

public:
    virtual NetherReactorBlock::~NetherReactorBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;

    NetherReactorBlock(std::string const&, int, Material const&);
};

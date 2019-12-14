#pragma once

class NetherReactorBlock : ActorBlock {

public:
    virtual ~NetherReactorBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;

    void NetherReactorBlock(std::string const&, int, Material const&);
};

#pragma once

class NetherReactorBlock : ActorBlock {

public:
    virtual ~NetherReactorBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;

    void NetherReactorBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&);
};

#pragma once

class IceBlock : BlockLegacy {

public:
    virtual ~IceBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;

    void IceBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool);
    void melt(BlockSource &, BlockPos const&);
};

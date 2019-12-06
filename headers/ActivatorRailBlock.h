#pragma once

class ActivatorRailBlock : BaseRailBlock {

public:
    virtual ~ActivatorRailBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getVariant(Block const&)const;

    void ActivatorRailBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

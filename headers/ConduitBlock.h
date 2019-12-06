#pragma once

class ConduitBlock : ActorBlock {

public:
    virtual ~ConduitBlock();
    virtual bool canContainLiquid(void)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;

    void ConduitBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

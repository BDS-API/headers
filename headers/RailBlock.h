#pragma once

class RailBlock : BaseRailBlock {

public:
    virtual ~RailBlock();
    virtual void getVariant(Block const&)const;

    void RailBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

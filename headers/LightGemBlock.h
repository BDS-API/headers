#pragma once

class LightGemBlock : BlockLegacy {

public:
    virtual ~LightGemBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    void LightGemBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&);
};

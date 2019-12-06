#pragma once

class BlueIceBlock : BlockLegacy {

public:
    virtual ~BlueIceBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;

    void BlueIceBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

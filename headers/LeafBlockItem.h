#pragma once

class LeafBlockItem : BlockItem {

public:
    virtual ~LeafBlockItem();
    virtual void getLevelDataForAuxValue(int)const;

    void LeafBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Block const*);
};

#pragma once

class ClothBlockItem : BlockItem {

public:
    virtual ~ClothBlockItem();
    virtual void getLevelDataForAuxValue(int)const;

    void ClothBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Block const*);
};

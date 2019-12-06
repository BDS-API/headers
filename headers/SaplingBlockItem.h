#pragma once

class SaplingBlockItem : BlockItem {

public:
    virtual ~SaplingBlockItem();
    virtual void getLevelDataForAuxValue(int)const;

    void SaplingBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

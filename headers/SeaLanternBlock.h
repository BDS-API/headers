#pragma once

class SeaLanternBlock : BlockLegacy {

public:
    virtual ~SeaLanternBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched(void)const;

    void SeaLanternBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

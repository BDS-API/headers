#pragma once

class MelonBlock : BlockLegacy {

public:
    virtual ~MelonBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    void MelonBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

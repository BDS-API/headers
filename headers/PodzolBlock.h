#pragma once

class PodzolBlock : BlockLegacy {

public:
    virtual ~PodzolBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    void PodzolBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

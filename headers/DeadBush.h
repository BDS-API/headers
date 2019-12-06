#pragma once

class DeadBush : BushBlock {

public:
    virtual ~DeadBush();
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;

    void DeadBush(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

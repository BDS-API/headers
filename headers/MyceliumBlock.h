#pragma once

class MyceliumBlock : BlockLegacy {

public:
    static long MyceliumBlock::MIN_BRIGHTNESS;

    virtual ~MyceliumBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    void MyceliumBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};

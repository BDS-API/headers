#pragma once

class FrostedIceBlock : BlockLegacy {

public:
    static long FrostedIceBlock::MIN_NEIGHBORS;
    static long FrostedIceBlock::MAX_AGE;

    virtual ~FrostedIceBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canBeSilkTouched(void)const;

    void FrostedIceBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool);
    void _countNeighbors(BlockSource &, BlockPos const&)const;
    void _slightlyMelt(BlockSource &, BlockPos const&, Random &, bool)const;
    void getTickDelay(Random &)const;
};

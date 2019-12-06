#pragma once

class WeightedPressurePlateBlock : BasePressurePlateBlock {

public:
    static long WeightedPressurePlateBlock::MAX_WEIGHT_LIGHT;
    static long WeightedPressurePlateBlock::MAX_WEIGHT_HEAVY;

    virtual ~WeightedPressurePlateBlock();
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getTickDelay(void)const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void getSignalForData(int)const;
    virtual void getRedstoneSignal(int)const;

    void WeightedPressurePlateBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&, int);
};

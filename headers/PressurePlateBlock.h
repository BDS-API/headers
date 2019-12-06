#pragma once

class PressurePlateBlock : BasePressurePlateBlock {

public:
    virtual ~PressurePlateBlock();
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void getSignalForData(int)const;
    virtual void getRedstoneSignal(int)const;

    void PressurePlateBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&, PressurePlateBlock::Sensitivity);
};

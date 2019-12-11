#pragma once

class ChemicalHeatBlock : BlockLegacy {

public:
    virtual ~ChemicalHeatBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers(void)const;

    void ChemicalHeatBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _getRelativeOffsets(void);
    void _melt(BlockSource &, BlockPos const&, Random &)const;
    void _queueTick(BlockSource &, BlockPos const&, Random &)const;
};

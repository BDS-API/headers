#pragma once

class ColoredTorchBlock : TorchBlock {

public:
    virtual ~ColoredTorchBlock();
    virtual bool canBeUsedInCommands(bool)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    void ColoredTorchBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, ColoredTorchColor);
    void _getColor(Block const&)const;
    void getItemForColor(ColoredTorchColor);
};

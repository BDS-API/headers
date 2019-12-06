#pragma once

class WoodSlabBlock : SlabBlock {

public:
    virtual ~WoodSlabBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void WoodSlabBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool, WeakPtr<BlockLegacy>);
};

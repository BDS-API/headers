#pragma once

class StoneSlabBlock : SlabBlock {

public:
    virtual ~StoneSlabBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void StoneSlabBlock(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};

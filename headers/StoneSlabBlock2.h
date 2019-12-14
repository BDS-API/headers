#pragma once

class StoneSlabBlock2 : SlabBlock {

public:
    virtual ~StoneSlabBlock2();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void StoneSlabBlock2(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};

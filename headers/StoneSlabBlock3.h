#pragma once

class StoneSlabBlock3 : SlabBlock {

public:
    virtual ~StoneSlabBlock3();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void StoneSlabBlock3(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};

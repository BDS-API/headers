#pragma once

class StoneSlabBlock4 : SlabBlock {

public:
    virtual ~StoneSlabBlock4();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void StoneSlabBlock4(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};

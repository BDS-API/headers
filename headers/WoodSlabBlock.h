#pragma once

class WoodSlabBlock : SlabBlock {

public:
    virtual ~WoodSlabBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void WoodSlabBlock(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};

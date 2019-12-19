#pragma once

class StoneSlabBlock4 : SlabBlock {

public:
    static long SLAB_NAMES[abi:cxx11];

    virtual StoneSlabBlock4::~StoneSlabBlock4();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StoneSlabBlock4(std::string const&, int, bool, WeakPtr<BlockLegacy>);
};

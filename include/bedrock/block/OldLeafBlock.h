#pragma once

class OldLeafBlock : LeafBlock {

public:
    virtual OldLeafBlock::~OldLeafBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getExtraResourceItem(Block const&)const;

    OldLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>);
};

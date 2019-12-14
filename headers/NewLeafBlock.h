#pragma once

class NewLeafBlock : LeafBlock {

public:
    virtual ~NewLeafBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getExtraResourceItem(Block const&)const;

    void NewLeafBlock(std::string const&, int, WeakPtr<BlockLegacy>);
};

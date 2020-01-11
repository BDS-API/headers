#pragma once

class DropperBlock : DispenserBlock {

public:
    virtual DropperBlock::~DropperBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const;

    DropperBlock(std::string const&, int);
    void getAttachedFace(int);
};
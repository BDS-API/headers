#pragma once

class SmokerBlock : FurnaceBlock {

public:
    virtual SmokerBlock::~SmokerBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    SmokerBlock(std::string const&, int, bool);
};

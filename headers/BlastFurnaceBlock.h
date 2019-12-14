#pragma once

class BlastFurnaceBlock : FurnaceBlock {

public:
    virtual ~BlastFurnaceBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void BlastFurnaceBlock(std::string const&, int, bool);
};

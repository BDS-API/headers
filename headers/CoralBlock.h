#pragma once

class CoralBlock : BlockLegacy {

public:
    static long CoralBlock::DEAD_CORAL_OFFSET;
    static long CoralBlock::DEAD_CORAL_BIT;

    virtual ~CoralBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isValidAuxValue(int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched(void)const;

    void CoralBlock(std::string const&, int);
};

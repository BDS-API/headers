#pragma once

class FarmBlock : BlockLegacy {

public:
    virtual FarmBlock::~FarmBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid(void)const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched(void)const;

    FarmBlock(std::string const&, int);
    bool isNearWater(BlockSource &, BlockPos const&)const;
    bool isUnderCrops(BlockSource &, BlockPos const&)const;
};

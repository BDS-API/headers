#pragma once

class BambooSapling : Sapling {

public:
    virtual BambooSapling::~BambooSapling();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual bool canContainLiquid(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    BambooSapling(std::string const&, int);
    void _grow(BlockSource &, BlockPos const&)const;
};

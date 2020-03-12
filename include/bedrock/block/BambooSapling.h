#pragma once

#include "Sapling.h"
#include <string>


class BambooSapling : Sapling {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool isValidAuxValue(int)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool canContainLiquid()const;
    ~BambooSapling();
    virtual void getVariant(Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    BambooSapling(std::string const&, int);
    void _grow(BlockSource &, BlockPos const&)const;
};

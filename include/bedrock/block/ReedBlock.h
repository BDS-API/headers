#pragma once

#include <string>
#include "BlockLegacy.h"


class ReedBlock : BlockLegacy {

public:
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void waterSpreadCausesSpawn()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual bool canContainLiquid()const;
    ~ReedBlock();
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual bool canBeSilkTouched()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    void checkAlive(BlockSource &, BlockPos const&)const;
    ReedBlock(std::string const&, int);
};

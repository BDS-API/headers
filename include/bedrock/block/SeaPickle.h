#pragma once

#include <string>
#include "BushBlock.h"


class SeaPickle : BushBlock {

public:
    virtual bool canBeSilkTouched()const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getColor(Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual bool hasVariableLighting()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void waterSpreadCausesSpawn()const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    ~SeaPickle();
    virtual void getLightEmission(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    SeaPickle(std::string const&, int);
};

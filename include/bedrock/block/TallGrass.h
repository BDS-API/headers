#pragma once

#include <string>
#include "BushBlock.h"


class TallGrass : BushBlock {

public:
    virtual void getColor(Block const&)const;
    virtual void getRenderLayer()const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool canBeSilkTouched()const;
    ~TallGrass();
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    void _getRenderLayerImpl()const;
    TallGrass(std::string const&, int);
};

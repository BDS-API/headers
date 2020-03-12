#pragma once

#include <string>
#include "BushBlock.h"


class FlowerBlock : BushBlock {

public:
    virtual void getRenderLayer()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~FlowerBlock();
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    void _randomWalk(BlockSource &, int &, int &, int &, int)const;
//  FlowerBlock(std::string const&, int, FlowerBlock::Type); //TODO: incomplete function definition
    void _getRenderLayerImpl()const;
};

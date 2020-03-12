#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "BushBlock.h"


class FlowerBlock : BushBlock {

public:
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getRenderLayer()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    ~FlowerBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    void _getRenderLayerImpl()const;
    void _randomWalk(BlockSource &, int &, int &, int &, int)const;
//  FlowerBlock(std::string const&, int, FlowerBlock::Type); //TODO: incomplete function definition
};

#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./BushBlock.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class FlowerBlock : BushBlock {

public:
    virtual ~FlowerBlock();
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getRenderLayer()const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

//  FlowerBlock(std::string const&, int, FlowerBlock::Type); //TODO: incomplete function definition
    void _randomWalk(BlockSource &, int &, int &, int &, int)const;
    void _getRenderLayerImpl()const;
};

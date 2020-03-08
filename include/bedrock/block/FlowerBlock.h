#pragma once

#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class FlowerBlock : BushBlock {

public:
    FlowerBlock::~FlowerBlock()
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getRenderLayer()const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    FlowerBlock(std::string const&, int, FlowerBlock::Type);
    void _randomWalk(BlockSource &, int &, int &, int &, int)const;
    void _getRenderLayerImpl()const;
};

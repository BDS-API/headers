#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "BushBlock.h"


class MushroomBlock : BushBlock {

public:
    ~MushroomBlock();
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getRenderLayer()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual bool canContainLiquid()const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    void _growTree(BlockSource &, BlockPos const&, Random &)const;
    MushroomBlock(std::string const&, int);
    void _getRenderLayerImpl()const;
};

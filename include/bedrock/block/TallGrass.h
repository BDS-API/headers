#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "BushBlock.h"


class TallGrass : BushBlock {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getRenderLayer()const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~TallGrass();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    TallGrass(std::string const&, int);
    void _getRenderLayerImpl()const;
};

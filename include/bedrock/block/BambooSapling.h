#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "Sapling.h"
#include "../util/Random.h"


class BambooSapling : Sapling {

public:
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canContainLiquid()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    ~BambooSapling();
    virtual void getResourceItem(Random &, Block const&, int)const;
    void _grow(BlockSource &, BlockPos const&)const;
    BambooSapling(std::string const&, int);
};

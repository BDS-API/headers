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


class CoralFan : BushBlock {

public:
    static long CORAL_FAN_NAMES_COUNT;
    static std::string CORAL_FAN_NAMES;

    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isWaterBlocking()const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void getColor(Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~CoralFan();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual bool canBeSilkTouched()const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    CoralFan(std::string const&, int);
};

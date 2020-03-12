#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class Coral : BlockLegacy {

public:
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool isValidAuxValue(int)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    ~Coral();
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getColor(Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool isWaterBlocking()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    Coral(std::string const&, int);
    void checkAlive(BlockSource &, BlockPos const&)const;
};

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


class SeaGrass : BlockLegacy {

public:
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getColor(Block const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canBeSilkTouched()const;
    ~SeaGrass();
    void trySpawnSeaGrass(BlockSource &, BlockPos const&);
    SeaGrass(std::string const&, int);
    void checkAlive(BlockSource &, BlockPos const&)const;
};

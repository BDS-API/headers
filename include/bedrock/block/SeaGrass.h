#pragma once

#include <string>
#include "BlockLegacy.h"


class SeaGrass : BlockLegacy {

public:
    virtual bool isValidAuxValue(int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    virtual std::string buildDescriptionId(Block const&)const;
    ~SeaGrass();
    virtual bool canBeSilkTouched()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void waterSpreadCausesSpawn()const;
    SeaGrass(std::string const&, int);
    void trySpawnSeaGrass(BlockSource &, BlockPos const&);
    void checkAlive(BlockSource &, BlockPos const&)const;
};

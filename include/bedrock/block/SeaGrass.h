#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../actor/Player"
#include "../util/AABB"


class SeaGrass : BlockLegacy {

public:
    virtual SeaGrass::~SeaGrass()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual void getColor(Block const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canBeSilkTouched()const;

    SeaGrass(std::string const&, int);
    void checkAlive(BlockSource &, BlockPos const&)const;
    void trySpawnSeaGrass(BlockSource &, BlockPos const&);
};

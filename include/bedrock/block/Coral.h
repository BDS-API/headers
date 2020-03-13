#pragma once

#include <string>
#include "BlockLegacy.h"


class Coral : BlockLegacy {

public:
    ~Coral(); // _ZN5CoralD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK5Coral4tickER11BlockSourceRK8BlockPosR6Random
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK5Coral22randomlyModifyPositionERK8BlockPos
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK5Coral7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isWaterBlocking()const; // _ZNK5Coral15isWaterBlockingEv
    virtual bool isValidAuxValue(int)const; // _ZNK5Coral15isValidAuxValueEi
    virtual void waterSpreadCausesSpawn()const; // _ZNK5Coral22waterSpreadCausesSpawnEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK5Coral7onPlaceER11BlockSourceRK8BlockPos
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK5Coral12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK5Coral20mayConsumeFertilizerER11BlockSource
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK5Coral10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK5Coral15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK5Coral16getResourceCountER6RandomRK5Blocki
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK5Coral14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK5Coral13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK5Coral10canSurviveER11BlockSourceRK8BlockPos
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK5Coral11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK5Coral18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK5Coral28isAuxValueRelevantForPickingEv
    virtual void getColor(Block const&)const; // _ZNK5Coral8getColorERK5Block
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK5Coral8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void getVariant(Block const&)const; // _ZNK5Coral10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK5Coral16canBeSilkTouchedEv
    Coral(std::string const&, int); // _ZN5CoralC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK5Coral10checkAliveER11BlockSourceRK8BlockPos
};

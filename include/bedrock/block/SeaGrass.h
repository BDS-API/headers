#pragma once

#include <string>
#include "BlockLegacy.h"


class SeaGrass : BlockLegacy {

public:
    ~SeaGrass(); // _ZN8SeaGrassD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK8SeaGrass4tickER11BlockSourceRK8BlockPosR6Random
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK8SeaGrass22randomlyModifyPositionERK8BlockPos
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK8SeaGrass7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isValidAuxValue(int)const; // _ZNK8SeaGrass15isValidAuxValueEi
    virtual void waterSpreadCausesSpawn()const; // _ZNK8SeaGrass22waterSpreadCausesSpawnEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK8SeaGrass7onPlaceER11BlockSourceRK8BlockPos
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK8SeaGrass12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK8SeaGrass20mayConsumeFertilizerER11BlockSource
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK8SeaGrass8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK8SeaGrass15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK8SeaGrass16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK8SeaGrass14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK8SeaGrass13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK8SeaGrass10canSurviveER11BlockSourceRK8BlockPos
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK8SeaGrass11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK8SeaGrass18buildDescriptionIdB5cxx11ERK5Block
    virtual void getColor(Block const&)const; // _ZNK8SeaGrass8getColorERK5Block
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK8SeaGrass8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual bool canBeSilkTouched()const; // _ZNK8SeaGrass16canBeSilkTouchedEv
    SeaGrass(std::string const&, int); // _ZN8SeaGrassC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK8SeaGrass10checkAliveER11BlockSourceRK8BlockPos
    void trySpawnSeaGrass(BlockSource &, BlockPos const&); // _ZN8SeaGrass16trySpawnSeaGrassER11BlockSourceRK8BlockPos
};

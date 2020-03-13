#pragma once

#include <string>
#include "BushBlock.h"


class SeaPickle : BushBlock {

public:
    ~SeaPickle(); // _ZN9SeaPickleD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9SeaPickle4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9SeaPickle7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getLightEmission(Block const&)const; // _ZNK9SeaPickle16getLightEmissionERK5Block
    virtual bool hasVariableLighting()const; // _ZNK9SeaPickle19hasVariableLightingEv
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK9SeaPickle17canProvideSupportERK5Blockh16BlockSupportType
    virtual void waterSpreadCausesSpawn()const; // _ZNK9SeaPickle22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK9SeaPickle16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK9SeaPickle7onPlaceER11BlockSourceRK8BlockPos
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9SeaPickle12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK9SeaPickle20mayConsumeFertilizerER11BlockSource
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK9SeaPickle10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9SeaPickle15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9SeaPickle15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9SeaPickle14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK9SeaPickle13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK9SeaPickle10canSurviveER11BlockSourceRK8BlockPos
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK9SeaPickle11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK9SeaPickle18buildDescriptionIdB5cxx11ERK5Block
    virtual void getColor(Block const&)const; // _ZNK9SeaPickle8getColorERK5Block
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9SeaPickle8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual bool canBeSilkTouched()const; // _ZNK9SeaPickle16canBeSilkTouchedEv
    virtual void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK9SeaPickle10checkAliveER11BlockSourceRK8BlockPos
    SeaPickle(std::string const&, int); // _ZN9SeaPickleC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

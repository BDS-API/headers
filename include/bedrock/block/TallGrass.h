#pragma once

#include <string>
#include "BushBlock.h"


class TallGrass : BushBlock {

public:
    ~TallGrass(); // _ZN9TallGrassD2Ev
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK9TallGrass22randomlyModifyPositionERK8BlockPos
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9TallGrass7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool canContainLiquid()const; // _ZNK9TallGrass16canContainLiquidEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9TallGrass12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK9TallGrass20mayConsumeFertilizerER11BlockSource
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK9TallGrass8mayPlaceER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9TallGrass15getResourceItemER6RandomRK5Blocki
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK9TallGrass13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK9TallGrass10canSurviveER11BlockSourceRK8BlockPos
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK9TallGrass11getMapColorER11BlockSourceRK8BlockPos
    virtual void getRenderLayer()const; // _ZNK9TallGrass14getRenderLayerEv
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK9TallGrass18buildDescriptionIdB5cxx11ERK5Block
    virtual void getColor(Block const&)const; // _ZNK9TallGrass8getColorERK5Block
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9TallGrass8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK9TallGrass14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual bool canBeSilkTouched()const; // _ZNK9TallGrass16canBeSilkTouchedEv
    TallGrass(std::string const&, int); // _ZN9TallGrassC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getRenderLayerImpl()const; // _ZNK9TallGrass19_getRenderLayerImplEv
};

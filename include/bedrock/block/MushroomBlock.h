#pragma once

#include <string>
#include "BushBlock.h"


class MushroomBlock : BushBlock {

public:
    ~MushroomBlock(); // _ZN13MushroomBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13MushroomBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool canContainLiquid()const; // _ZNK13MushroomBlock16canContainLiquidEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK13MushroomBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK13MushroomBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK13MushroomBlock10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK13MushroomBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getRenderLayer()const; // _ZNK13MushroomBlock14getRenderLayerEv
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK13MushroomBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    MushroomBlock(std::string const&, int); // _ZN13MushroomBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _growTree(BlockSource &, BlockPos const&, Random &)const; // _ZNK13MushroomBlock9_growTreeER11BlockSourceRK8BlockPosR6Random
    void _getRenderLayerImpl()const; // _ZNK13MushroomBlock19_getRenderLayerImplEv
};

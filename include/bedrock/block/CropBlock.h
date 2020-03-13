#pragma once

#include <string>
#include "BushBlock.h"


class CropBlock : BushBlock {

public:
    ~CropBlock(); // _ZN9CropBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9CropBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9CropBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isCropBlock()const; // _ZNK9CropBlock11isCropBlockEv
    virtual bool canContainLiquid()const; // _ZNK9CropBlock16canContainLiquidEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9CropBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK9CropBlock10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9CropBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9CropBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK9CropBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK9CropBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const; // _ZNK9CropBlock12executeEventER11BlockSourceRK8BlockPosRK5BlockRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER5Actor
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const; // _ZNK9CropBlock6hasTagER11BlockSourceRK8BlockPosRK5BlockRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getVariant(Block const&)const; // _ZNK9CropBlock10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK9CropBlock16canBeSilkTouchedEv
    virtual void getBaseSeed()const; // _ZNK9CropBlock11getBaseSeedEv
    virtual void getBaseCrop()const; // _ZNK9CropBlock11getBaseCropEv
    virtual void getSeedNum(Random &, int, int)const; // _ZNK9CropBlock10getSeedNumER6Randomii
    virtual void getCropNum(Random &, int, int)const; // _ZNK9CropBlock10getCropNumER6Randomii
    CropBlock(std::string const&, int); // _ZN9CropBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getGrowthSpeed(BlockSource &, BlockPos const&)const; // _ZNK9CropBlock14getGrowthSpeedER11BlockSourceRK8BlockPos
};

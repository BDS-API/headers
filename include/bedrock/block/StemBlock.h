#pragma once

#include <string>
#include "BushBlock.h"


class StemBlock : BushBlock {

public:
    ~StemBlock(); // _ZN9StemBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK9StemBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isStemBlock()const; // _ZNK9StemBlock11isStemBlockEv
    virtual bool canContainLiquid()const; // _ZNK9StemBlock16canContainLiquidEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK9StemBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK9StemBlock10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK9StemBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9StemBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9StemBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getColor(Block const&)const; // _ZNK9StemBlock8getColorERK5Block
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const; // _ZNK9StemBlock13getColorAtPosER11BlockSourceRK8BlockPos
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9StemBlock8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK9StemBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK9StemBlock16canBeSilkTouchedEv
    StemBlock(std::string const&, int, BlockLegacy const&); // _ZN9StemBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK11BlockLegacy
    void getGrowthSpeed(BlockSource &, BlockPos const&)const; // _ZNK9StemBlock14getGrowthSpeedER11BlockSourceRK8BlockPos
    void getConnectDir(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9StemBlock13getConnectDirER11BlockSourceRK8BlockPosRK5Block
};

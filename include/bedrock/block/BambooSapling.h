#pragma once

#include <string>
#include "Sapling.h"


class BambooSapling : Sapling {

public:
    ~BambooSapling(); // _ZN13BambooSaplingD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13BambooSapling4tickER11BlockSourceRK8BlockPosR6Random
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK13BambooSapling22randomlyModifyPositionERK8BlockPos
    virtual bool isValidAuxValue(int)const; // _ZNK13BambooSapling15isValidAuxValueEi
    virtual bool canContainLiquid()const; // _ZNK13BambooSapling16canContainLiquidEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK13BambooSapling12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK13BambooSapling8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK13BambooSapling15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13BambooSapling15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13BambooSapling14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK13BambooSapling13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK13BambooSapling10canSurviveER11BlockSourceRK8BlockPos
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK13BambooSapling28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK13BambooSapling10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK13BambooSapling24getSilkTouchItemInstanceERK5Block
    BambooSapling(std::string const&, int); // _ZN13BambooSaplingC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _grow(BlockSource &, BlockPos const&)const; // _ZNK13BambooSapling5_growER11BlockSourceRK8BlockPos
};

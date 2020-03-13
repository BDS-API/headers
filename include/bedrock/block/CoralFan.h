#pragma once

#include <string>
#include "BushBlock.h"


class CoralFan : BushBlock {

public:
    static long CORAL_FAN_NAMES_COUNT;
    static std::string CORAL_FAN_NAMES;

    ~CoralFan(); // _ZN8CoralFanD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK8CoralFan4tickER11BlockSourceRK8BlockPosR6Random
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK8CoralFan22randomlyModifyPositionERK8BlockPos
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK8CoralFan7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isWaterBlocking()const; // _ZNK8CoralFan15isWaterBlockingEv
    virtual bool isValidAuxValue(int)const; // _ZNK8CoralFan15isValidAuxValueEi
    virtual bool canContainLiquid()const; // _ZNK8CoralFan16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK8CoralFan7onPlaceER11BlockSourceRK8BlockPos
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK8CoralFan12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK8CoralFan20mayConsumeFertilizerER11BlockSource
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK8CoralFan10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK8CoralFan15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK8CoralFan16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK8CoralFan15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK8CoralFan14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK8CoralFan14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK8CoralFan13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK8CoralFan11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK8CoralFan18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK8CoralFan28isAuxValueRelevantForPickingEv
    virtual void getColor(Block const&)const; // _ZNK8CoralFan8getColorERK5Block
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK8CoralFan8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void getVariant(Block const&)const; // _ZNK8CoralFan10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK8CoralFan16canBeSilkTouchedEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK8CoralFan24getSilkTouchItemInstanceERK5Block
    virtual void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK8CoralFan10checkAliveER11BlockSourceRK8BlockPos
    CoralFan(std::string const&, int); // _ZN8CoralFanC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};

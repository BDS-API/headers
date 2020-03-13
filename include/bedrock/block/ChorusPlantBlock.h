#pragma once

#include <string>
#include "BlockLegacy.h"


class ChorusPlantBlock : BlockLegacy {

public:
    static long PLANT_WIDTH;
    static long PLANT_HEIGHT;
    static long PLANT_ITEM_DIMENSION;

    ~ChorusPlantBlock(); // _ZN16ChorusPlantBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK16ChorusPlantBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK16ChorusPlantBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK16ChorusPlantBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool isWaterBlocking()const; // _ZNK16ChorusPlantBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK16ChorusPlantBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK16ChorusPlantBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK16ChorusPlantBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK16ChorusPlantBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK16ChorusPlantBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK16ChorusPlantBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK16ChorusPlantBlock15getResourceItemER6RandomRK5Blocki
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK16ChorusPlantBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual bool canBeSilkTouched()const; // _ZNK16ChorusPlantBlock16canBeSilkTouchedEv
    ChorusPlantBlock(std::string const&, int); // _ZN16ChorusPlantBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    bool canGrowChorus(Block const&); // _ZN16ChorusPlantBlock13canGrowChorusERK5Block
    bool connectsTo(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK16ChorusPlantBlock10connectsToER11BlockSourceRK8BlockPosS4_
};

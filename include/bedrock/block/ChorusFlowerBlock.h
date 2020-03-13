#pragma once

#include <string>
#include "BlockLegacy.h"


class ChorusFlowerBlock : BlockLegacy {

public:
    static long DEAD_AGE;
    static long GROW_RATE;
    static long BRANCH_DIRECTIONS;

    ~ChorusFlowerBlock(); // _ZN17ChorusFlowerBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK17ChorusFlowerBlock4tickER11BlockSourceRK8BlockPosR6Random
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK17ChorusFlowerBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool isWaterBlocking()const; // _ZNK17ChorusFlowerBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK17ChorusFlowerBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK17ChorusFlowerBlock16canContainLiquidEv
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK17ChorusFlowerBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK17ChorusFlowerBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK17ChorusFlowerBlock16getResourceCountER6RandomRK5Blocki
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK17ChorusFlowerBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK17ChorusFlowerBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVariant(Block const&)const; // _ZNK17ChorusFlowerBlock10getVariantERK5Block
    ChorusFlowerBlock(std::string const&, int); // _ZN17ChorusFlowerBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _allNeighborsEmpty(BlockSource &, BlockPos const&, unsigned char); // _ZN17ChorusFlowerBlock18_allNeighborsEmptyER11BlockSourceRK8BlockPosh
    void _placeGrownFlower(BlockSource &, BlockPos const&, int)const; // _ZNK17ChorusFlowerBlock17_placeGrownFlowerER11BlockSourceRK8BlockPosi
    void _placeDeadFlower(BlockSource &, BlockPos const&)const; // _ZNK17ChorusFlowerBlock16_placeDeadFlowerER11BlockSourceRK8BlockPos
    void generatePlant(BlockSource &, BlockPos const&, Random &, int); // _ZN17ChorusFlowerBlock13generatePlantER11BlockSourceRK8BlockPosR6Randomi
    void _growTreeRecursive(BlockSource &, BlockPos const&, BlockPos const&, Random &, int, int); // _ZN17ChorusFlowerBlock18_growTreeRecursiveER11BlockSourceRK8BlockPosS4_R6Randomii
};

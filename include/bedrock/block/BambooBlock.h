#pragma once

#include <string>
#include "BlockLegacy.h"


class BambooBlock : BlockLegacy {

public:
    ~BambooBlock(); // _ZN11BambooBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK11BambooBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK11BambooBlock22randomlyModifyPositionERK8BlockPos
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK11BambooBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isWaterBlocking()const; // _ZNK11BambooBlock15isWaterBlockingEv
    virtual bool isValidAuxValue(int)const; // _ZNK11BambooBlock15isValidAuxValueEi
    virtual bool canContainLiquid()const; // _ZNK11BambooBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK11BambooBlock7onPlaceER11BlockSourceRK8BlockPos
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK11BambooBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayConsumeFertilizer(BlockSource &)const; // _ZNK11BambooBlock20mayConsumeFertilizerER11BlockSource
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK11BambooBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK11BambooBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK11BambooBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK11BambooBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK11BambooBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK11BambooBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK11BambooBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK11BambooBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK11BambooBlock16canBeSilkTouchedEv
    BambooBlock(std::string const&, int); // _ZN11BambooBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getPositionalValue(BlockPos const&); // _ZN11BambooBlock19_getPositionalValueERK8BlockPos
    void _checkAlive(BlockSource &, BlockPos const&)const; // _ZNK11BambooBlock11_checkAliveER11BlockSourceRK8BlockPos
    void getMaxHeight(BlockPos const&); // _ZN11BambooBlock12getMaxHeightERK8BlockPos
    void _placeBamboo(BlockSource &, BlockPos const&)const; // _ZNK11BambooBlock12_placeBambooER11BlockSourceRK8BlockPos
    void _determineNewBlockState(BlockSource &, BlockPos const&)const; // _ZNK11BambooBlock23_determineNewBlockStateER11BlockSourceRK8BlockPos
    void _getStalkThickness(Block const&)const; // _ZNK11BambooBlock18_getStalkThicknessERK5Block
    void _getLeafSize(Block const&)const; // _ZNK11BambooBlock12_getLeafSizeERK5Block
};

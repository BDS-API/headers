#pragma once

#include <string>
#include "BushBlock.h"


class DoublePlantBlock : BushBlock {

public:
    ~DoublePlantBlock(); // _ZN16DoublePlantBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK16DoublePlantBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getNextBlockPermutation(Block const&)const; // _ZNK16DoublePlantBlock23getNextBlockPermutationERK5Block
    virtual void randomlyModifyPosition(BlockPos const&, int &)const; // _ZNK16DoublePlantBlock22randomlyModifyPositionERK8BlockPosRi
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK16DoublePlantBlock22randomlyModifyPositionERK8BlockPos
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK16DoublePlantBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool canContainLiquid()const; // _ZNK16DoublePlantBlock16canContainLiquidEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK16DoublePlantBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK16DoublePlantBlock8mayPlaceER11BlockSourceRK8BlockPosh
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK16DoublePlantBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK16DoublePlantBlock13getSecondPartER11BlockSourceRK8BlockPosRS2_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK16DoublePlantBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK16DoublePlantBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK16DoublePlantBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK16DoublePlantBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock14canBeBuiltOverER11BlockSourceRK8BlockPos
    virtual void getRenderLayer()const; // _ZNK16DoublePlantBlock14getRenderLayerEv
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK16DoublePlantBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK16DoublePlantBlock28isAuxValueRelevantForPickingEv
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK16DoublePlantBlock8getColorER11BlockSourceRK8BlockPosRK5Block
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const; // _ZNK16DoublePlantBlock19getColorForParticleER11BlockSourceRK8BlockPosRK5Block
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK16DoublePlantBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getVariant(Block const&)const; // _ZNK16DoublePlantBlock10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK16DoublePlantBlock16canBeSilkTouchedEv
    virtual void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock10checkAliveER11BlockSourceRK8BlockPos
    DoublePlantBlock(std::string const&, int); // _ZN16DoublePlantBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getType(BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock7getTypeER11BlockSourceRK8BlockPos
    void getType(BlockSource &, BlockPos const&, Block const&)const; // _ZNK16DoublePlantBlock7getTypeER11BlockSourceRK8BlockPosRK5Block
    void _isCoveredByTopSnow(BlockSource &, BlockPos const&)const; // _ZNK16DoublePlantBlock19_isCoveredByTopSnowER11BlockSourceRK8BlockPos
//  void placeAt(BlockSource &, BlockPos const&, DoublePlantType, int, Actor *)const; //TODO: incomplete function definition // _ZNK16DoublePlantBlock7placeAtER11BlockSourceRK8BlockPos15DoublePlantTypeiP5Actor
    void popGrassResources(BlockSource &, BlockPos const&, Block const&, Player &)const; // _ZNK16DoublePlantBlock17popGrassResourcesER11BlockSourceRK8BlockPosRK5BlockR6Player
    void popFlowerResources(BlockSource &, BlockPos const&, Block const&, Actor *)const; // _ZNK16DoublePlantBlock18popFlowerResourcesER11BlockSourceRK8BlockPosRK5BlockP5Actor
    void _getRenderLayerImpl()const; // _ZNK16DoublePlantBlock19_getRenderLayerImplEv
};

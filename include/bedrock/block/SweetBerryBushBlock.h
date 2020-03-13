#pragma once

#include <string>
#include "BushBlock.h"


class SweetBerryBushBlock : BushBlock {

public:
    ~SweetBerryBushBlock(); // _ZN19SweetBerryBushBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK19SweetBerryBushBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK19SweetBerryBushBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isCropBlock()const; // _ZNK19SweetBerryBushBlock11isCropBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK19SweetBerryBushBlock18isInteractiveBlockEv
    virtual bool canContainLiquid()const; // _ZNK19SweetBerryBushBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK19SweetBerryBushBlock15checkIsPathableER5ActorRK8BlockPosS4_
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK19SweetBerryBushBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK19SweetBerryBushBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK19SweetBerryBushBlock10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK19SweetBerryBushBlock16getResourceCountER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK19SweetBerryBushBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK19SweetBerryBushBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual void use(Player &, BlockPos const&)const; // _ZNK19SweetBerryBushBlock3useER6PlayerRK8BlockPos
    virtual void attack(Player *, BlockPos const&)const; // _ZNK19SweetBerryBushBlock6attackEP6PlayerRK8BlockPos
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK19SweetBerryBushBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK19SweetBerryBushBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::string const&, Actor &)const; // _ZNK19SweetBerryBushBlock12executeEventER11BlockSourceRK8BlockPosRK5BlockRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER5Actor
    virtual bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const; // _ZNK19SweetBerryBushBlock6hasTagER11BlockSourceRK8BlockPosRK5BlockRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getRenderLayer()const; // _ZNK19SweetBerryBushBlock14getRenderLayerEv
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK19SweetBerryBushBlock14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK19SweetBerryBushBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getVariant(Block const&)const; // _ZNK19SweetBerryBushBlock10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK19SweetBerryBushBlock16canBeSilkTouchedEv
    virtual bool dealsContactDamage(Actor const&, Block const&, bool)const; // _ZNK19SweetBerryBushBlock18dealsContactDamageERK5ActorRK5Blockb
    SweetBerryBushBlock(std::string const&, int); // _ZN19SweetBerryBushBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _growBush(BlockSource &, BlockPos const&)const; // _ZNK19SweetBerryBushBlock9_growBushER11BlockSourceRK8BlockPos
    void _pickBerries(BlockSource &, BlockPos const&, Block const&)const; // _ZNK19SweetBerryBushBlock12_pickBerriesER11BlockSourceRK8BlockPosRK5Block
    void _getRenderLayerImpl()const; // _ZNK19SweetBerryBushBlock19_getRenderLayerImplEv
    void _popBerries(BlockSource &, BlockPos const&, int const&)const; // _ZNK19SweetBerryBushBlock11_popBerriesER11BlockSourceRK8BlockPosRKi
};

#pragma once

#include <string>
#include "ActorBlock.h"


class CampfireBlock : ActorBlock {

public:
    ~CampfireBlock(); // _ZN13CampfireBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13CampfireBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK13CampfireBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getLightEmission(Block const&)const; // _ZNK13CampfireBlock16getLightEmissionERK5Block
    virtual bool hasVariableLighting()const; // _ZNK13CampfireBlock19hasVariableLightingEv
    virtual bool isWaterBlocking()const; // _ZNK13CampfireBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK13CampfireBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK13CampfireBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK13CampfireBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13CampfireBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK13CampfireBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK13CampfireBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK13CampfireBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13CampfireBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13CampfireBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK13CampfireBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK13CampfireBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const; // _ZNK13CampfireBlock12entityInsideER11BlockSourceRK8BlockPosR5Actor
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK13CampfireBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK13CampfireBlock14getVisualShapeERK5BlockR4AABBb
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13CampfireBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK13CampfireBlock16canBeSilkTouchedEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK13CampfireBlock24getSilkTouchItemInstanceERK5Block
    CampfireBlock(std::string const&, int); // _ZN13CampfireBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void tryLightFire(BlockSource &, BlockPos const&); // _ZN13CampfireBlock12tryLightFireER11BlockSourceRK8BlockPos
    void _canBeLit(BlockSource &, BlockPos const&); // _ZN13CampfireBlock9_canBeLitER11BlockSourceRK8BlockPos
    void tryDouseFire(BlockSource &, BlockPos const&, bool); // _ZN13CampfireBlock12tryDouseFireER11BlockSourceRK8BlockPosb
    bool isLit(Block const&); // _ZN13CampfireBlock5isLitERK5Block
    void _getBlockActor(BlockSource &, BlockPos const&)const; // _ZNK13CampfireBlock14_getBlockActorER11BlockSourceRK8BlockPos
    void _dropCookingFood(BlockSource &, BlockPos const&)const; // _ZNK13CampfireBlock16_dropCookingFoodER11BlockSourceRK8BlockPos
    void _getShape(Block const&, AABB &)const; // _ZNK13CampfireBlock9_getShapeERK5BlockR4AABB
    void _checkAlive(BlockSource &, BlockPos const&)const; // _ZNK13CampfireBlock11_checkAliveER11BlockSourceRK8BlockPos
};

#pragma once

#include "Monster.h"
#include "../util/AABB.h"
#include <vector>
#include "../util/BlockPos.h"
#include "../util/Vec3.h"


class EnderDragon : Monster {

public:
    static long GROWL_INTERVAL_MIN;
    static long GROWL_INTERVAL_MAX;
    static long SITTING_ALLOWED_DAMAGE_PERCENTAGE;
    static long MAX_PATH_RADIUS;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN11EnderDragon15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~EnderDragon(); // _ZN11EnderDragonD2Ev
    virtual void remove(); // _ZN11EnderDragon6removeEv
    virtual bool canExistInPeaceful()const; // _ZNK11EnderDragon18canExistInPeacefulEv
    virtual void getShadowRadius()const; // _ZNK11EnderDragon15getShadowRadiusEv
    virtual void getHeadLookVector(float); // _ZN11EnderDragon17getHeadLookVectorEf
    virtual bool isImmobile()const; // _ZNK11EnderDragon10isImmobileEv
    virtual bool isFishable()const; // _ZNK11EnderDragon10isFishableEv
    virtual void setSitting(bool); // _ZN11EnderDragon10setSittingEb
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK11EnderDragon16isInvulnerableToERK17ActorDamageSource
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN11EnderDragon17handleEntityEventE10ActorEventi
    virtual bool canChangeDimensions()const; // _ZNK11EnderDragon19canChangeDimensionsEv
    virtual bool canBePulledIntoVehicle()const; // _ZNK11EnderDragon22canBePulledIntoVehicleEv
    virtual bool canBeAffected(MobEffectInstance const&)const; // _ZNK11EnderDragon13canBeAffectedERK17MobEffectInstance
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN11EnderDragon5_hurtERK17ActorDamageSourceibb
    virtual void _onSizeUpdated(); // _ZN11EnderDragon14_onSizeUpdatedEv
    virtual void aiStep(); // _ZN11EnderDragon6aiStepEv
    virtual void shouldDespawn()const; // _ZNK11EnderDragon13shouldDespawnEv
    virtual void tickDeath(); // _ZN11EnderDragon9tickDeathEv
    EnderDragon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN11EnderDragonC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void checkCrystals(); // _ZN11EnderDragon13checkCrystalsEv
    void getLatencyPos(int, float)const; // _ZNK11EnderDragon13getLatencyPosEif
    void knockBack(std::vector<Actor *> const&)const; // _ZNK11EnderDragon9knockBackERKSt6vectorIP5ActorSaIS2_EE
    void hurtEntities(std::vector<Actor *> const&)const; // _ZNK11EnderDragon12hurtEntitiesERKSt6vectorIP5ActorSaIS2_EE
    void getHeadYOffset(float)const; // _ZNK11EnderDragon14getHeadYOffsetEf
    void checkWalls(AABB); // _ZN11EnderDragon10checkWallsE4AABB
    void getNearestCrystal()const; // _ZNK11EnderDragon17getNearestCrystalEv
    void _hurt(AABB *, ActorDamageSource const&, float); // _ZN11EnderDragon5_hurtEP4AABBRK17ActorDamageSourcef
    void reallyHurt(ActorDamageSource const&, float); // _ZN11EnderDragon10reallyHurtERK17ActorDamageSourcef
    void dieNaturally(); // _ZN11EnderDragon12dieNaturallyEv
    void resetFlameCount(); // _ZN11EnderDragon15resetFlameCountEv
    void findClosestNode(); // _ZN11EnderDragon15findClosestNodeEv
    bool isPathRegionLoaded()const; // _ZNK11EnderDragon18isPathRegionLoadedEv
    void findClosestNode(Vec3 const&); // _ZN11EnderDragon15findClosestNodeERK4Vec3
    void getHeadPos()const; // _ZNK11EnderDragon10getHeadPosEv
    void getFlameCount()const; // _ZNK11EnderDragon13getFlameCountEv
    void incrementFlameCount(); // _ZN11EnderDragon19incrementFlameCountEv
    void getDragonFight()const; // _ZNK11EnderDragon14getDragonFightEv
    void getHeadPartYOffset(int, std::vector<float> const&, std::vector<float> const&)const; // _ZNK11EnderDragon18getHeadPartYOffsetEiRKSt6vectorIfSaIfEES4_
    void onCrystalDestroyed(EnderCrystal const&, BlockPos, ActorDamageSource const&); // _ZN11EnderDragon18onCrystalDestroyedERK12EnderCrystal8BlockPosRK17ActorDamageSource
    void findPath(int, int, PathfinderNode *); // _ZN11EnderDragon8findPathEiiP14PathfinderNode
//  void reconstructPath(PathfinderNode &, PathfinderNode &, PathCompletionType); //TODO: incomplete function definition // _ZN11EnderDragon15reconstructPathER14PathfinderNodeS1_18PathCompletionType
    void getTargetPos()const; // _ZNK11EnderDragon12getTargetPosEv
    void setTargetPos(Vec3); // _ZN11EnderDragon12setTargetPosE4Vec3
    void setTurnSpeed(float); // _ZN11EnderDragon12setTurnSpeedEf
    void setDragonFight(EndDragonFight *); // _ZN11EnderDragon14setDragonFightEP14EndDragonFight
};

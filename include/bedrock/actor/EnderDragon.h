#pragma once

#include "EnderCrystal.h"
#include "../util/AABB.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "../../unmapped/MobEffectInstance.h"
#include "../util/Vec3.h"
#include "../../unmapped/PathfinderNode.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include <vector>
#include "../../unmapped/EndDragonFight.h"
#include "damagesource/ActorDamageSource.h"
#include "Monster.h"


class EnderDragon : Monster {

public:
    static long GROWL_INTERVAL_MIN;
    static long GROWL_INTERVAL_MAX;
    static long SITTING_ALLOWED_DAMAGE_PERCENTAGE;
    static long MAX_PATH_RADIUS;

//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void aiStep();
    virtual void getShadowRadius()const;
    virtual bool isFishable()const;
    virtual void setSitting(bool);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void tickDeath();
    virtual bool isImmobile()const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void shouldDespawn()const;
    virtual void getHeadLookVector(float);
    ~EnderDragon();
    virtual void remove();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool canBePulledIntoVehicle()const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual bool canExistInPeaceful()const;
    virtual bool canChangeDimensions()const;
    virtual void _onSizeUpdated();
    bool isPathRegionLoaded()const;
    void findClosestNode();
    void getTargetPos()const;
    EnderDragon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getNearestCrystal()const;
    void resetFlameCount();
    void getLatencyPos(int, float)const;
    void checkCrystals();
    void onCrystalDestroyed(EnderCrystal const&, BlockPos, ActorDamageSource const&);
    void findClosestNode(Vec3 const&);
    void setTargetPos(Vec3);
    void getHeadYOffset(float)const;
    void dieNaturally();
    void getFlameCount()const;
    void incrementFlameCount();
    void hurtEntities(std::vector<Actor *> const&)const;
    void _hurt(AABB *, ActorDamageSource const&, float);
//  void reconstructPath(PathfinderNode &, PathfinderNode &, PathCompletionType); //TODO: incomplete function definition
    void checkWalls(AABB);
    void getHeadPartYOffset(int, std::vector<float> const&, std::vector<float> const&)const;
    void getDragonFight()const;
    void findPath(int, int, PathfinderNode *);
    void setDragonFight(EndDragonFight *);
    void setTurnSpeed(float);
    void getHeadPos()const;
    void reallyHurt(ActorDamageSource const&, float);
    void knockBack(std::vector<Actor *> const&)const;
};

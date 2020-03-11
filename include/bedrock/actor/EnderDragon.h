#pragma once

#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include <memory>
#include "../util/AABB.h"
#include "../../unmapped/PathfinderNode.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/EndDragonFight.h"
#include <vector>
#include "./EnderCrystal.h"
#include "./Monster.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionGroup.h"


class EnderDragon : Monster {

public:
    static long GROWL_INTERVAL_MIN;
    static long GROWL_INTERVAL_MAX;
    static long SITTING_ALLOWED_DAMAGE_PERCENTAGE;
    static long MAX_PATH_RADIUS;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~EnderDragon();
    virtual void remove();
    virtual bool canExistInPeaceful()const;
    virtual void getShadowRadius()const;
    virtual void getHeadLookVector(float);
    virtual bool isImmobile()const;
    virtual bool isFishable()const;
    virtual void setSitting(bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual bool canChangeDimensions()const;
    virtual bool canBePulledIntoVehicle()const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();
    virtual void aiStep();
    virtual void shouldDespawn()const;
    virtual void tickDeath();

    EnderDragon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void checkCrystals();
    void getLatencyPos(int, float)const;
    void knockBack(std::vector<Actor *, std::allocator<Actor *>> const&)const;
    void hurtEntities(std::vector<Actor *, std::allocator<Actor *>> const&)const;
    void getHeadYOffset(float)const;
    void checkWalls(AABB);
    void getNearestCrystal()const;
    void _hurt(AABB *, ActorDamageSource const&, float);
    void reallyHurt(ActorDamageSource const&, float);
    void dieNaturally();
    void resetFlameCount();
    void findClosestNode();
    bool isPathRegionLoaded()const;
    void findClosestNode(Vec3 const&);
    void getHeadPos()const;
    void getFlameCount()const;
    void incrementFlameCount();
    void getDragonFight()const;
    void getHeadPartYOffset(int, std::vector<float, std::allocator<float>> const&, std::vector<float, std::allocator<float>> const&)const;
    void onCrystalDestroyed(EnderCrystal const&, BlockPos, ActorDamageSource const&);
    void findPath(int, int, PathfinderNode *);
//  void reconstructPath(PathfinderNode &, PathfinderNode &, PathCompletionType); //TODO: incomplete function definition
    void getTargetPos()const;
    void setTargetPos(Vec3);
    void setTurnSpeed(float);
    void setDragonFight(EndDragonFight *);
};

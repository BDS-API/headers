#pragma once

#include "../util/AABB.h"
#include <vector>
#include "../util/BlockPos.h"
#include "Monster.h"
#include "../util/Vec3.h"


class EnderDragon : Monster {

public:
    static long GROWL_INTERVAL_MIN;
    static long GROWL_INTERVAL_MAX;
    static long SITTING_ALLOWED_DAMAGE_PERCENTAGE;
    static long MAX_PATH_RADIUS;

    virtual bool canChangeDimensions()const;
    virtual bool canBePulledIntoVehicle()const;
    virtual void getShadowRadius()const;
    virtual bool canExistInPeaceful()const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    ~EnderDragon();
    virtual bool isImmobile()const;
    virtual void aiStep();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void _onSizeUpdated();
    virtual void remove();
    virtual void setSitting(bool);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getHeadLookVector(float);
    virtual bool isFishable()const;
    virtual void shouldDespawn()const;
    virtual void tickDeath();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    void reallyHurt(ActorDamageSource const&, float);
    void getHeadYOffset(float)const;
    void knockBack(std::vector<Actor *> const&)const;
    void getTargetPos()const;
    void onCrystalDestroyed(EnderCrystal const&, BlockPos, ActorDamageSource const&);
    bool isPathRegionLoaded()const;
//  void reconstructPath(PathfinderNode &, PathfinderNode &, PathCompletionType); //TODO: incomplete function definition
    void getFlameCount()const;
    void hurtEntities(std::vector<Actor *> const&)const;
    void incrementFlameCount();
    void setDragonFight(EndDragonFight *);
    void getNearestCrystal()const;
    void findClosestNode(Vec3 const&);
    void checkCrystals();
    void dieNaturally();
    void findPath(int, int, PathfinderNode *);
    void _hurt(AABB *, ActorDamageSource const&, float);
    void getDragonFight()const;
    void setTargetPos(Vec3);
    void checkWalls(AABB);
    void getLatencyPos(int, float)const;
    void findClosestNode();
    void getHeadPos()const;
    EnderDragon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setTurnSpeed(float);
    void getHeadPartYOffset(int, std::vector<float> const&, std::vector<float> const&)const;
    void resetFlameCount();
};

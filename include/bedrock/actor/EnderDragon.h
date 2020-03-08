#pragma once

#include "../util/Vec3"
#include "../../unmapped/EndDragonFight"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/PathfinderNode"
#include "../../unmapped/MobEffectInstance"
#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../util/AABB"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/VariantParameterList"


class EnderDragon : Monster {

public:
    static long GROWL_INTERVAL_MIN;
    static long GROWL_INTERVAL_MAX;
    static long SITTING_ALLOWED_DAMAGE_PERCENTAGE;
    static long MAX_PATH_RADIUS;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual EnderDragon::~EnderDragon()
    virtual void remove();
    virtual bool canExistInPeaceful()const;
    virtual void getShadowRadius()const;
    virtual void getHeadLookVector(float);
    virtual bool isImmobile()const;
    virtual bool isFishable()const;
    virtual void setSitting(bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void handleEntityEvent(ActorEvent, int);
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
    void reconstructPath(PathfinderNode &, PathfinderNode &, PathCompletionType);
    void getTargetPos()const;
    void setTargetPos(Vec3);
    void setTurnSpeed(float);
    void setDragonFight(EndDragonFight *);
};

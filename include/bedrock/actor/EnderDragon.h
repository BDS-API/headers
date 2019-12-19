#pragma once

class EnderDragon : Monster {

public:
    static long GROWL_INTERVAL_MIN;
    static long GROWL_INTERVAL_MAX;
    static long SITTING_ALLOWED_DAMAGE_PERCENTAGE;
    static long MAX_PATH_RADIUS;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual EnderDragon::~EnderDragon();
    virtual void remove(void);
    virtual bool canExistInPeaceful(void)const;
    virtual void getShadowRadius(void)const;
    virtual void getHeadLookVector(float);
    virtual bool isImmobile(void)const;
    virtual bool isFishable(void)const;
    virtual void setSitting(bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual bool canChangeDimensions(void)const;
    virtual bool canBePulledIntoVehicle(void)const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated(void);
    virtual void aiStep(void);
    virtual void shouldDespawn(void)const;
    virtual void tickDeath(void);

    EnderDragon(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void checkCrystals(void);
    void getLatencyPos(int, float)const;
    void knockBack(std::vector<Actor *, std::allocator<Actor *>> const&)const;
    void hurtEntities(std::vector<Actor *, std::allocator<Actor *>> const&)const;
    void getHeadYOffset(float)const;
    void checkWalls(AABB);
    void getNearestCrystal(void)const;
    void _hurt(AABB *, ActorDamageSource const&, float);
    void reallyHurt(ActorDamageSource const&, float);
    void dieNaturally(void);
    void resetFlameCount(void);
    void findClosestNode(void);
    bool isPathRegionLoaded(void)const;
    void findClosestNode(Vec3 const&);
    void getHeadPos(void)const;
    void getFlameCount(void)const;
    void incrementFlameCount(void);
    void getDragonFight(void)const;
    void getHeadPartYOffset(int, std::vector<float, std::allocator<float>> const&, std::vector<float, std::allocator<float>> const&)const;
    void onCrystalDestroyed(EnderCrystal const&, BlockPos, ActorDamageSource const&);
    void findPath(int, int, PathfinderNode *);
    void reconstructPath(PathfinderNode &, PathfinderNode &, PathCompletionType);
    void getTargetPos(void)const;
    void setTargetPos(Vec3);
    void setTurnSpeed(float);
    void setDragonFight(EndDragonFight *);
};

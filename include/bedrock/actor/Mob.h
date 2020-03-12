#pragma once

#include "unmapped/ActorUniqueID.h"
#include "Actor.h"
#include <vector>
#include <string>
#include "../util/BlockPos.h"


class Mob : Actor {

public:
    static long PLAYER_HURT_EXPERIENCE_TIME;
    static long MAX_INACTIVITY_TIMER;
    static long ABSORPTION_FACTOR_MAX;
    static long ABSORPTION_FACTOR_MIN;
    static long TOTAL_ROLL_STEPS;
    static long REMOVE_RIDERS_DELAY;
    static long PLAYER_SWIMMING_SURFACE_OFFSET;
    static long GLIDING_FALL_RESET_DELTA;
    static long SLOW_FALL_GRAVITY;
    static long DEFAULT_GRAVITY;
    static long LADDER_CLIMB_SPEED;
    static long SCAFFOLDING_CLIMB_SPEED;

    virtual void _removeRider(ActorUniqueID const&, bool, bool);
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
    virtual void getInterpolatedHeadRot(float)const;
    virtual void getYawSpeedInDegreesPerSecond()const;
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void getTimeAlongSwing();
    virtual void setLastHurtMob(Actor *);
    virtual void getAttackAnim(float);
    virtual void getLastHurtByMob();
//  virtual void setEquippedSlot(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void dropEquipment(ActorDamageSource const&, int);
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void travel(float, float, float);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool hasComponent(Util::HashString const&)const;
    virtual void updateWalkAnim();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void ate();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
//  virtual void getArmorColorInSlot(ArmorSlot, int)const; //TODO: incomplete function definition
    virtual void swing();
    virtual void sendInventory(bool);
    virtual void _endJump();
    virtual void getAttackTime();
    virtual void inCaravan()const;
    virtual bool isAlive()const;
    virtual void buildDebugInfo(std::string &)const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _serverAiMobStep();
    virtual void causeFallDamage(float);
    virtual void getArmorTypeHash();
    virtual void updateGliding();
//  virtual void getArmorMaterialTextureTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition
    virtual void getLastHurtMob();
    virtual void getLastHurtByPlayer();
    virtual bool isJumping()const;
    virtual void stopRiding(bool, bool, bool);
    virtual void dropBags();
    virtual void setSleeping(bool);
    virtual void setSprinting(bool);
    virtual bool canExistWhenDisallowMob()const;
    virtual void spawnAnim();
    virtual void getAmbientSoundPostponeTicks();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getYHeadRot()const;
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void updateAi();
    virtual bool canBeControlledByRider();
    virtual void jumpFromGround();
    virtual bool isSleeping()const;
    virtual void leaveCaravan();
    virtual void getAllArmorID()const;
    virtual void getItemuseIntervalAxis();
    virtual void baseTick();
//  virtual void getArmorMaterialTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition
    virtual void getItemUseStartupProgress();
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void getAllArmor()const;
    virtual void setTransitioningSitting(bool);
    virtual void getDamageAfterArmorAbsorb(ActorDamageSource const&, int);
    virtual void getArmorCoverPercentage()const;
    virtual void getMaxHeadXRot();
    virtual void applyFinalFriction(float, bool);
    virtual void doFireHurt(int);
    virtual bool isBlocking()const;
    virtual void containerChanged(int);
    virtual void clearEquipment();
    virtual void goDownInWater();
    virtual bool isSurfaceMob()const;
    ~Mob();
    virtual bool canBePulledIntoVehicle()const;
    virtual void getMeleeKnockbackBonus();
    virtual bool isShootable();
    virtual void shouldDespawn()const;
    virtual void animateHurt();
    virtual void createAIGoals();
    virtual void setLastHurtByPlayer(Player *);
    virtual void getAllHand()const;
    virtual void attackAnimation(Actor *, float);
    virtual void onBorn(Actor &, Actor &);
    virtual void getAllEquipment()const;
    virtual void getDamageAfterEnchantReduction(ActorDamageSource const&, int);
    virtual void getItemUseIntervalProgress();
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void getJumpPower()const;
    virtual void sendArmor();
    virtual bool isPickable();
    virtual void setTarget(Actor *);
    virtual void getDeathTime()const;
    virtual bool isAlliedTo(Mob *);
    virtual void joinCaravan(Mob *);
//  virtual void renderDebugServerState(Options const&); //TODO: incomplete function definition
    virtual void kill();
    virtual void _onSizeUpdated();
    virtual void attack(Actor &);
    virtual bool isLookingAtAnEntity();
    virtual void hurtArmor(int);
    virtual void lookAt(Actor *, float, float);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void doHurtTarget(Actor *);
    virtual void initBodyControl();
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void pushActors();
    virtual void getInterpolatedBodyRot(float)const;
    virtual void dropContainer();
    virtual void playerTouch(Player &);
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual bool isImmobile()const;
    virtual void die(ActorDamageSource const&);
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void normalTick();
    virtual void _allowAscendingScaffolding()const;
    virtual bool isSprinting()const;
    virtual bool canPowerJump()const;
    virtual void ascendScaffolding();
    virtual void getMeleeWeaponDamageBonus(Mob *);
    virtual void getItemInHandIcon(ItemStack const&, int);
    virtual void ascendLadder();
//  virtual void setItemSlot(EquipmentSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void setLastHurtByMob(Mob *);
    virtual void descendScaffolding();
    virtual void getInterpolatedBodyYaw(float)const;
    virtual void rideTick();
    virtual void startRiding(Actor &);
    virtual void checkSpawnRules(bool);
    virtual void dropEquipment();
    virtual void useNewAi()const;
    virtual void getCaravanHead()const;
    virtual void tickDeath();
    virtual void getArmorValue();
    virtual void addRider(Actor &);
    virtual void setOnFire(int);
    virtual void outOfWorld();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getSpeed()const;
    virtual void getItemUseDuration();
//  virtual void setEquippedSlot(ArmorSlot, int, int); //TODO: incomplete function definition
    virtual void aiStep();
    virtual void playAmbientSound();
    virtual void checkSpawnObstruction()const;
    virtual void setSpeed(float);
    virtual void updateEquipment();
    virtual void getAmbientSound();
    virtual bool hasCaravanTail()const;
    virtual void newServerAiStep();
    void setYHeadRot(float);
    void getFrictionModifier()const;
    void getYya()const;
    Mob(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setFlightSpeed(float);
    bool wantsToBeJockey()const;
    void setFrictionModifier(float);
    void getRiderLockedBodyRot()const;
    void setRolling(bool);
    void setBoundOrigin(BlockPos);
    void createAI(std::vector<GoalDefinition>);
    void getVillageLegacy()const;
    void getJumpMultiplier();
    void _isFloorDamaging(BlockPos const&);
    void saveMainhand()const;
    bool isEating()const;
    void setRiderLockedBodyRot(float);
    void setYRotA(float);
    void _tryApplyingLevitation(Vec3 &)const;
    void _updateMobTravel();
    void setJumping(bool);
    void getLastHurtMobTimestamp();
    void setTargetCaptain(ActorUniqueID);
    void lerpToRotation(Vec2 const&, int);
    void setSpeedModifier(float);
    void getLastHurtByMobTimestamp();
    void _isHeadInWater();
    bool isTransitioningSitting()const;
    void setIsLayingEgg(bool);
    void getFlightSpeed();
    void tickEffects();
    void getGlidingTicks()const;
    void snapToYHeadRot(float);
    void setYya(float);
    void lerpTo(Vec3 const&, Vec2 const&, float, int);
    void _addSpeedBonus(mce::UUID const&, std::string const&, float);
    void getTravelType();
    void loadOffhand(ListTag const*);
//  void calcMoveRelativeSpeed(Mob::TravelType); //TODO: incomplete function definition
    void _getDamageAfterAbsorb(int, int);
    bool canPickUpLoot(ItemStack const&)const;
    void checkTotemDeathProtection(ActorDamageSource const&);
    void getNoActionTime()const;
    void emitJumpPreventedEvent(BlockPos const&);
    void getCaravanSize()const;
    void getYRotA()const;
    bool isFrostWalking()const;
    void getBoundOrigin()const;
    void snapToYBodyRot(float);
    bool hasBoundOrigin()const;
    void getAmbientSoundPostponeTicksRange();
    Mob(Level &);
    void setSurfaceMob(bool);
    void resetAttributes();
    void getJumpPrevention();
    void getTargetCaptain()const;
    void setXxa(float);
    void _initHardCodedComponents();
    bool isRolling()const;
    void getRollCounter()const;
    void registerAttributes();
    void getSpawnMethod();
    void _doSprintParticleEffect();
    void frostWalk();
    void getEatCounter()const;
    void loadMainhand(ListTag const*);
    bool isPregnant()const;
    void onPlayerJump(int);
    void getCurrentSwingDuration();
    void _saveArmor();
    bool isJumpOnBlockPrevented(BlockPos const&);
    void setJumpVelRedux(bool);
    void calculateAmbientSoundTime(int);
    void _updateMobId(ActorUniqueID &);
//  void setSpawnMethod(MobSpawnMethod); //TODO: incomplete function definition
    void setEatCounter(int);
    bool isGliding()const;
    void _removeSpeedBonus(mce::UUID const&);
    void playSpawnSound();
    void updateAttackAnim();
    void stopAI();
//  void _isNewEntityAttack(ActorDamageCause)const; //TODO: incomplete function definition
    void incrementArrowCount(int);
//  void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  void getItemSlot(EquipmentSlot)const; //TODO: incomplete function definition
    void saveOffhand()const;
    void _applyRidingRotationLimits();
    void getFirstCaravanHead();
    void setIsPregnant(bool);
    void getZza()const;
    void _loadArmor(ListTag const*);
    void tickBlockDamage();
    void setZza(float);
    void playBornSound();
    bool isLayingEgg()const;
    void setNaturallySpawned(bool);
    void _verifyAttributes();
    void getXxa()const;
    void setWantsToBeJockey(bool);
    void setEating(bool);
    bool isNaturallySpawned()const;
    void tickAttributes();
    void setInterpolation(bool);
    void setRiderRotLimit(float);
    void getRiderRotLimit()const;
    void _updateSprintingState();
    void shouldApplyWaterGravity();
};

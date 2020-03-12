#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "../../unmapped/HashString.h"
#include "../../unmapped/DataLoadHelper.h"
#include "../util/Vec2.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../level/Level.h"
#include "../item/ItemStack.h"
#include "Player.h"
#include "../nbt/ListTag.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../mce/UUID.h"
#include "../util/Vec3.h"
#include <vector>
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "../../unmapped/Dimension.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ActorUniqueID.h"
#include "damagesource/ActorDamageSource.h"
#include "../definition/GoalDefinition.h"


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

    virtual void applyFinalFriction(float, bool);
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void ascendScaffolding();
    virtual void getAllHand()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void ascendLadder();
    virtual bool isLookingAtAnEntity();
    virtual void _removeRider(ActorUniqueID const&, bool, bool);
    virtual void getCaravanHead()const;
    virtual void getTimeAlongSwing();
    virtual void lookAt(Actor *, float, float);
    virtual bool hasCaravanTail()const;
    virtual void updateEquipment();
    virtual void playerTouch(Player &);
    virtual void getMeleeKnockbackBonus();
    virtual void setOnFire(int);
    virtual void getItemuseIntervalAxis();
//  virtual void getArmorMaterialTextureTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void getSpeed()const;
    virtual void spawnAnim();
    virtual void getDamageAfterArmorAbsorb(ActorDamageSource const&, int);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void updateWalkAnim();
    virtual void getJumpPower()const;
    virtual void getAllArmorID()const;
    virtual bool isImmobile()const;
    virtual void _endJump();
    virtual void newServerAiStep();
    virtual void getItemUseIntervalProgress();
    virtual void getItemInHandIcon(ItemStack const&, int);
    virtual bool isShootable();
    virtual void doFireHurt(int);
    virtual void die(ActorDamageSource const&);
    virtual void dropEquipment();
    virtual void getInterpolatedBodyYaw(float)const;
    virtual void addAdditionalSaveData(CompoundTag &);
    ~Mob();
    virtual void aiStep();
    virtual bool canBePulledIntoVehicle()const;
    virtual bool canPowerJump()const;
    virtual void kill();
    virtual bool canExistWhenDisallowMob()const;
    virtual void dropContainer();
    virtual void getDeathTime()const;
    virtual void getAllEquipment()const;
    virtual void sendArmor();
    virtual void getAttackTime();
    virtual void getItemUseDuration();
    virtual void startRiding(Actor &);
    virtual void getLastHurtMob();
    virtual void getArmorValue();
    virtual void setTarget(Actor *);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void addRider(Actor &);
    virtual void attackAnimation(Actor *, float);
    virtual void checkSpawnRules(bool);
//  virtual void setItemSlot(EquipmentSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void animateHurt();
    virtual void swing();
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getLastHurtByPlayer();
    virtual void tickDeath();
    virtual void outOfWorld();
    virtual void leaveCaravan();
    virtual void updateGliding();
    virtual void hurtArmor(int);
    virtual void setSpeed(float);
    virtual bool hasComponent(Util::HashString const&)const;
    virtual void setLastHurtMob(Actor *);
    virtual bool isAlliedTo(Mob *);
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getItemUseStartupProgress();
    virtual void checkSpawnObstruction()const;
    virtual void getAmbientSound();
    virtual void getYawSpeedInDegreesPerSecond()const;
    virtual void dropEquipment(ActorDamageSource const&, int);
    virtual void getYHeadRot()const;
    virtual bool canBeControlledByRider();
    virtual void getDamageAfterEnchantReduction(ActorDamageSource const&, int);
    virtual void doHurtTarget(Actor *);
    virtual void initBodyControl();
    virtual void _allowAscendingScaffolding()const;
    virtual void getAmbientSoundPostponeTicks();
    virtual bool isSurfaceMob()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void onBorn(Actor &, Actor &);
    virtual bool isSleeping()const;
    virtual void setSprinting(bool);
    virtual bool isPickable();
    virtual bool isJumping()const;
    virtual void inCaravan()const;
    virtual void buildDebugInfo(std::string &)const;
    virtual void baseTick();
    virtual bool isBlocking()const;
    virtual void rideTick();
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void ate();
    virtual void updateAi();
    virtual void getMaxHeadXRot();
    virtual void containerChanged(int);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void jumpFromGround();
    virtual void attack(Actor &);
    virtual void descendScaffolding();
    virtual void createAIGoals();
    virtual bool isAlive()const;
//  virtual void getArmorMaterialTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition
    virtual void setLastHurtByPlayer(Player *);
    virtual void _serverAiMobStep();
    virtual void setSleeping(bool);
    virtual bool isSprinting()const;
    virtual void goDownInWater();
    virtual void joinCaravan(Mob *);
    virtual void stopRiding(bool, bool, bool);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getInterpolatedBodyRot(float)const;
    virtual void getInterpolatedHeadRot(float)const;
    virtual void _onSizeUpdated();
//  virtual void renderDebugServerState(Options const&); //TODO: incomplete function definition
    virtual void shouldDespawn()const;
    virtual void normalTick();
    virtual void pushActors();
    virtual void setTransitioningSitting(bool);
    virtual void travel(float, float, float);
    virtual void knockback(Actor *, int, float, float, float, float, float);
//  virtual void getArmorColorInSlot(ArmorSlot, int)const; //TODO: incomplete function definition
    virtual void useNewAi()const;
//  virtual void setEquippedSlot(ArmorSlot, int, int); //TODO: incomplete function definition
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
    virtual void dropBags();
    virtual void causeFallDamage(float);
    virtual void clearEquipment();
//  virtual void setEquippedSlot(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void playAmbientSound();
    virtual void sendInventory(bool);
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void getMeleeWeaponDamageBonus(Mob *);
    virtual void getLastHurtByMob();
    virtual void getArmorTypeHash();
    virtual void setLastHurtByMob(Mob *);
    virtual void getAllArmor()const;
    virtual void getAttackAnim(float);
    virtual void getArmorCoverPercentage()const;
    void getLastHurtByMobTimestamp();
    void _removeSpeedBonus(mce::UUID const&);
    void createAI(std::vector<GoalDefinition>);
    void _updateMobTravel();
    void _isFloorDamaging(BlockPos const&);
    bool hasBoundOrigin()const;
    void _addSpeedBonus(mce::UUID const&, std::string const&, float);
    void incrementArrowCount(int);
    void getFirstCaravanHead();
    void getLastHurtMobTimestamp();
    void _tryApplyingLevitation(Vec3 &)const;
    void getEatCounter()const;
    void getCaravanSize()const;
    void setJumpVelRedux(bool);
    void tickBlockDamage();
    void getFlightSpeed();
    void setFrictionModifier(float);
    void setBoundOrigin(BlockPos);
    void _saveArmor();
    void setRiderLockedBodyRot(float);
    bool isRolling()const;
    void getFrictionModifier()const;
    void getRiderLockedBodyRot()const;
    void getJumpPrevention();
    void getRollCounter()const;
    void _updateMobId(ActorUniqueID &);
    void _loadArmor(ListTag const*);
//  void calcMoveRelativeSpeed(Mob::TravelType); //TODO: incomplete function definition
    void getXxa()const;
    void setEating(bool);
    void checkTotemDeathProtection(ActorDamageSource const&);
    void setRiderRotLimit(float);
    bool isNaturallySpawned()const;
    void getJumpMultiplier();
    void playBornSound();
    void getTargetCaptain()const;
//  void getItemSlot(EquipmentSlot)const; //TODO: incomplete function definition
    void setWantsToBeJockey(bool);
    void lerpToRotation(Vec2 const&, int);
    void setZza(float);
    void setYya(float);
    void setIsPregnant(bool);
    void stopAI();
    void snapToYHeadRot(float);
    void saveOffhand()const;
    void _applyRidingRotationLimits();
    void setYRotA(float);
    void onPlayerJump(int);
    void loadOffhand(ListTag const*);
    void snapToYBodyRot(float);
    void setTargetCaptain(ActorUniqueID);
    void calculateAmbientSoundTime(int);
    void getYya()const;
    void _updateSprintingState();
    bool isGliding()const;
    void getZza()const;
    void setSpeedModifier(float);
    void saveMainhand()const;
    void getBoundOrigin()const;
    void registerAttributes();
    void setXxa(float);
    void getYRotA()const;
    bool isTransitioningSitting()const;
    Mob(Level &);
    void loadMainhand(ListTag const*);
    void setSurfaceMob(bool);
    bool isLayingEgg()const;
    void getTravelType();
    void setInterpolation(bool);
    void setRolling(bool);
    void shouldApplyWaterGravity();
    void tickAttributes();
    void updateAttackAnim();
    void setNaturallySpawned(bool);
    bool isPregnant()const;
    void lerpTo(Vec3 const&, Vec2 const&, float, int);
    void _initHardCodedComponents();
    bool isJumpOnBlockPrevented(BlockPos const&);
    void setEatCounter(int);
    void _isHeadInWater();
    void frostWalk();
    void getAmbientSoundPostponeTicksRange();
    void setFlightSpeed(float);
    bool wantsToBeJockey()const;
//  void _isNewEntityAttack(ActorDamageCause)const; //TODO: incomplete function definition
//  void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    bool isEating()const;
    void emitJumpPreventedEvent(BlockPos const&);
    void getCurrentSwingDuration();
    void getNoActionTime()const;
    void tickEffects();
    void _doSprintParticleEffect();
    void playSpawnSound();
    void getRiderRotLimit()const;
    Mob(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _verifyAttributes();
    void setYHeadRot(float);
//  void setSpawnMethod(MobSpawnMethod); //TODO: incomplete function definition
    bool isFrostWalking()const;
    void getGlidingTicks()const;
    void getSpawnMethod();
    void resetAttributes();
    void setJumping(bool);
    void getVillageLegacy()const;
    bool canPickUpLoot(ItemStack const&)const;
    void _getDamageAfterAbsorb(int, int);
    void setIsLayingEgg(bool);
};

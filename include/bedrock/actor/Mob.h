#pragma once

#include "../definition/GoalDefinition"
#include "../nbt/ListTag"
#include "../util/Vec3"
#include "unmapped/ActorUniqueID"
#include "unmapped/ActorDefinitionIdentifier"
#include "../item/ItemStack"
#include "../../unmapped/Dimension"
#include "../nbt/CompoundTag"
#include "../../unmapped/HashString"
#include "../../mce/UUID"
#include "../util/Vec2"
#include "unmapped/ActorDefinitionGroup"
#include "../level/Level"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../../unmapped/RenderParams"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/VariantParameterList"
#include "../../unmapped/DataLoadHelper"


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

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual bool hasComponent(Util::HashString const&)const;
    virtual Mob::~Mob()
    virtual void getInterpolatedBodyRot(float)const;
    virtual void getInterpolatedHeadRot(float)const;
    virtual void getInterpolatedBodyYaw(float)const;
    virtual void getYawSpeedInDegreesPerSecond()const;
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick();
    virtual void baseTick();
    virtual void rideTick();
    virtual void startRiding(Actor &);
    virtual void addRider(Actor &);
    virtual void playerTouch(Player &);
    virtual bool isImmobile()const;
    virtual bool isPickable();
    virtual bool isSleeping()const;
    virtual bool isShootable();
    virtual bool isBlocking()const;
    virtual bool isAlive()const;
    virtual bool isSurfaceMob()const;
    virtual void setTarget(Actor *);
    virtual void attack(Actor &);
    virtual bool canPowerJump()const;
    virtual bool isJumping()const;
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual void animateHurt();
    virtual void doFireHurt(int);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void getArmorMaterialTypeInSlot(ArmorSlot)const;
    virtual void getArmorMaterialTextureTypeInSlot(ArmorSlot)const;
    virtual void getArmorColorInSlot(ArmorSlot, int)const;
    virtual void setEquippedSlot(ArmorSlot, int, int);
    virtual void setEquippedSlot(ArmorSlot, ItemStack const&);
    virtual void setOnFire(int);
    virtual void causeFallDamage(float);
    virtual bool canBePulledIntoVehicle()const;
    virtual void inCaravan()const;
    virtual void stopRiding(bool, bool, bool);
    virtual void buildDebugInfo(std::string &)const;
    virtual void getDeathTime()const;
    virtual void swing();
    virtual void getYHeadRot()const;
    virtual void renderDebugServerState(Options const&);
    virtual void kill();
    virtual void die(ActorDamageSource const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void outOfWorld();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void _removeRider(ActorUniqueID const&, bool, bool);
    virtual void _onSizeUpdated();
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void spawnAnim();
    virtual void setSleeping(bool);
    virtual bool isSprinting()const;
    virtual void setSprinting(bool);
    virtual void playAmbientSound();
    virtual void getAmbientSound();
    virtual void getAmbientSoundPostponeTicks();
    virtual void getItemInHandIcon(ItemStack const&, int);
    virtual void getSpeed()const;
    virtual void setSpeed(float);
    virtual void getJumpPower()const;
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void getMeleeWeaponDamageBonus(Mob*);
    virtual void getMeleeKnockbackBonus();
    virtual void travel(float, float, float);
    virtual void applyFinalFriction(float, bool);
    virtual void updateWalkAnim();
    virtual void aiStep();
    virtual void pushActors();
    virtual void lookAt(Actor *, float, float);
    virtual bool isLookingAtAnEntity();
    virtual void checkSpawnRules(bool);
    virtual void checkSpawnObstruction()const;
    virtual void shouldDespawn()const;
    virtual void getAttackAnim(float);
    virtual void getItemUseDuration();
    virtual void getItemUseStartupProgress();
    virtual void getItemUseIntervalProgress();
    virtual void getItemuseIntervalAxis();
    virtual void getTimeAlongSwing();
    virtual void ate();
    virtual void getMaxHeadXRot();
    virtual void getLastHurtByMob();
    virtual void setLastHurtByMob(Mob*);
    virtual void getLastHurtByPlayer();
    virtual void setLastHurtByPlayer(Player *);
    virtual void getLastHurtMob();
    virtual void setLastHurtMob(Actor *);
    virtual bool isAlliedTo(Mob*);
    virtual void doHurtTarget(Actor *);
    virtual bool canBeControlledByRider();
    virtual void leaveCaravan();
    virtual void joinCaravan(Mob*);
    virtual bool hasCaravanTail()const;
    virtual void getCaravanHead()const;
    virtual void getArmorValue();
    virtual void getArmorCoverPercentage()const;
    virtual void hurtArmor(int);
    virtual void containerChanged(int);
    virtual void updateEquipment();
    virtual void clearEquipment();
    virtual void getAllArmor()const;
    virtual void getAllArmorID()const;
    virtual void getAllHand()const;
    virtual void getAllEquipment()const;
    virtual void getArmorTypeHash();
    virtual void sendInventory(bool);
    virtual void sendArmor();
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
    virtual void createAIGoals();
    virtual void onBorn(Actor &, Actor &);
    virtual void setItemSlot(EquipmentSlot, ItemStack const&);
    virtual void goDownInWater();
    virtual void setTransitioningSitting(bool);
    virtual void attackAnimation(Actor *, float);
    virtual void getAttackTime();
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual bool canExistWhenDisallowMob()const;
    virtual void useNewAi()const;
    virtual void ascendLadder();
    virtual void ascendScaffolding();
    virtual void descendScaffolding();
    virtual void initBodyControl();
    virtual void jumpFromGround();
    virtual void updateAi();
    virtual void newServerAiStep();
    virtual void _serverAiMobStep();
    virtual void getDamageAfterEnchantReduction(ActorDamageSource const&, int);
    virtual void getDamageAfterArmorAbsorb(ActorDamageSource const&, int);
    virtual void dropEquipment(ActorDamageSource const&, int);
    virtual void dropEquipment();
    virtual void dropBags();
    virtual void dropContainer();
    virtual void tickDeath();
    virtual void _endJump();
    virtual void updateGliding();
    virtual void _allowAscendingScaffolding()const;

    Mob(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void registerAttributes();
    void _initHardCodedComponents();
    void calculateAmbientSoundTime(int);
    Mob(Level &);
    void resetAttributes();
    void playBornSound();
    void playSpawnSound();
    void createAI(std::vector<GoalDefinition, std::allocator<GoalDefinition>>);
    void stopAI();
    void getAmbientSoundPostponeTicksRange();
    void _isHeadInWater();
    void _isFloorDamaging(BlockPos const&);
    void _isNewEntityAttack(ActorDamageCause)const;
    void _tryApplyingLevitation(Vec3 &)const;
    void checkTotemDeathProtection(ActorDamageSource const&);
    bool hasBoundOrigin()const;
    void getBoundOrigin()const;
    void setBoundOrigin(BlockPos);
    void tickBlockDamage();
    void tickAttributes();
    void tickEffects();
    void _updateSprintingState();
    void frostWalk();
    bool isFrostWalking()const;
    void setInterpolation(bool);
    void lerpTo(Vec3 const&, Vec2 const&, float, int);
    void lerpToRotation(Vec2 const&, int);
    bool isGliding()const;
    void getTravelType();
    void calcMoveRelativeSpeed(Mob::TravelType);
    void getXxa()const;
    void getYya()const;
    void getZza()const;
    void getJumpMultiplier();
    void getJumpPrevention();
    void emitJumpPreventedEvent(BlockPos const&);
    void shouldApplyWaterGravity();
    void saveMainhand()const;
    void _saveArmor();
    void saveOffhand()const;
    bool isPregnant()const;
    void loadMainhand(ListTag const*);
    void loadOffhand(ListTag const*);
    void _loadArmor(ListTag const*);
    void _verifyAttributes();
    void setIsPregnant(bool);
    void _applyRidingRotationLimits();
    void _updateMobTravel();
    void updateAttackAnim();
    void setJumping(bool);
    bool isJumpOnBlockPrevented(BlockPos const&);
    bool canPickUpLoot(ItemStack const&)const;
    void snapToYHeadRot(float);
    void snapToYBodyRot(float);
    void setYHeadRot(float);
    void setRiderLockedBodyRot(float);
    void getRiderLockedBodyRot()const;
    void getRiderRotLimit()const;
    void setRiderRotLimit(float);
    void getGlidingTicks()const;
    bool isTransitioningSitting()const;
    bool isEating()const;
    void setEating(bool);
    void getEatCounter()const;
    void setEatCounter(int);
    void setWantsToBeJockey(bool);
    bool wantsToBeJockey()const;
    void setJumpVelRedux(bool);
    void setSpeedModifier(float);
    void _doSprintParticleEffect();
    void getCurrentSwingDuration();
    void _getDamageAfterAbsorb(int, int);
    void getItemSlot(EquipmentSlot)const;
    void getFirstCaravanHead();
    void getCaravanSize()const;
    void _updateMobId(ActorUniqueID &);
    void getLastHurtMobTimestamp();
    void getLastHurtByMobTimestamp();
    void getNoActionTime()const;
    void setSpawnMethod(MobSpawnMethod);
    void getSpawnMethod();
    void onPlayerJump(int);
    void setXxa(float);
    void setYya(float);
    void setZza(float);
    void getYRotA()const;
    void setYRotA(float);
    void incrementArrowCount(int);
    void setNaturallySpawned(bool);
    bool isNaturallySpawned()const;
    void setSurfaceMob(bool);
    void _addSpeedBonus(mce::UUID const&, std::string const&, float);
    void _removeSpeedBonus(mce::UUID const&);
    void getFlightSpeed();
    void setFlightSpeed(float);
    void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    void getVillageLegacy()const;
    bool isLayingEgg()const;
    void setIsLayingEgg(bool);
    void getFrictionModifier()const;
    void setFrictionModifier(float);
    void getRollCounter()const;
    bool isRolling()const;
    void setRolling(bool);
    void setTargetCaptain(ActorUniqueID);
    void getTargetCaptain()const;
};

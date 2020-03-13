#pragma once

#include "unmapped/ActorUniqueID.h"
#include <vector>
#include "../util/BlockPos.h"
#include "Actor.h"
#include <string>


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

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN3Mob15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN3Mob21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN3Mob20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    virtual bool hasComponent(Util::HashString const&)const; // _ZNK3Mob12hasComponentERKN4Util10HashStringE
    ~Mob(); // _ZN3MobD2Ev
    virtual void getInterpolatedBodyRot(float)const; // _ZNK3Mob22getInterpolatedBodyRotEf
    virtual void getInterpolatedHeadRot(float)const; // _ZNK3Mob22getInterpolatedHeadRotEf
    virtual void getInterpolatedBodyYaw(float)const; // _ZNK3Mob22getInterpolatedBodyYawEf
    virtual void getYawSpeedInDegreesPerSecond()const; // _ZNK3Mob29getYawSpeedInDegreesPerSecondEv
    virtual void blockedByShield(ActorDamageSource const&, Actor &); // _ZN3Mob15blockedByShieldERK17ActorDamageSourceR5Actor
    virtual void teleportTo(Vec3 const&, bool, int, int); // _ZN3Mob10teleportToERK4Vec3bii
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN3Mob6lerpToERK4Vec3RK4Vec2i
    virtual void normalTick(); // _ZN3Mob10normalTickEv
    virtual void baseTick(); // _ZN3Mob8baseTickEv
    virtual void rideTick(); // _ZN3Mob8rideTickEv
    virtual void startRiding(Actor &); // _ZN3Mob11startRidingER5Actor
    virtual void addRider(Actor &); // _ZN3Mob8addRiderER5Actor
    virtual void playerTouch(Player &); // _ZN3Mob11playerTouchER6Player
    virtual bool isImmobile()const; // _ZNK3Mob10isImmobileEv
    virtual bool isPickable(); // _ZN3Mob10isPickableEv
    virtual bool isSleeping()const; // _ZNK3Mob10isSleepingEv
    virtual bool isShootable(); // _ZN3Mob11isShootableEv
    virtual bool isBlocking()const; // _ZNK3Mob10isBlockingEv
    virtual bool isAlive()const; // _ZNK3Mob7isAliveEv
    virtual bool isSurfaceMob()const; // _ZNK3Mob12isSurfaceMobEv
    virtual void setTarget(Actor *); // _ZN3Mob9setTargetEP5Actor
    virtual void attack(Actor &); // _ZN3Mob6attackER5Actor
    virtual bool canPowerJump()const; // _ZNK3Mob12canPowerJumpEv
    virtual bool isJumping()const; // _ZNK3Mob9isJumpingEv
    virtual void actuallyHurt(int, ActorDamageSource const*, bool); // _ZN3Mob12actuallyHurtEiPK17ActorDamageSourceb
    virtual void animateHurt(); // _ZN3Mob11animateHurtEv
    virtual void doFireHurt(int); // _ZN3Mob10doFireHurtEi
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN3Mob17handleEntityEventE10ActorEventi
//  virtual void getArmorMaterialTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition // _ZNK3Mob26getArmorMaterialTypeInSlotE9ArmorSlot
//  virtual void getArmorMaterialTextureTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition // _ZNK3Mob33getArmorMaterialTextureTypeInSlotE9ArmorSlot
//  virtual void getArmorColorInSlot(ArmorSlot, int)const; //TODO: incomplete function definition // _ZNK3Mob19getArmorColorInSlotE9ArmorSloti
//  virtual void setEquippedSlot(ArmorSlot, int, int); //TODO: incomplete function definition // _ZN3Mob15setEquippedSlotE9ArmorSlotii
//  virtual void setEquippedSlot(ArmorSlot, ItemStack const&); //TODO: incomplete function definition // _ZN3Mob15setEquippedSlotE9ArmorSlotRK9ItemStack
    virtual void setOnFire(int); // _ZN3Mob9setOnFireEi
    virtual void causeFallDamage(float); // _ZN3Mob15causeFallDamageEf
    virtual bool canBePulledIntoVehicle()const; // _ZNK3Mob22canBePulledIntoVehicleEv
    virtual void inCaravan()const; // _ZNK3Mob9inCaravanEv
    virtual void stopRiding(bool, bool, bool); // _ZN3Mob10stopRidingEbbb
    virtual void buildDebugInfo(std::string &)const; // _ZNK3Mob14buildDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getDeathTime()const; // _ZNK3Mob12getDeathTimeEv
    virtual void swing(); // _ZN3Mob5swingEv
    virtual void getYHeadRot()const; // _ZNK3Mob11getYHeadRotEv
//  virtual void renderDebugServerState(Options const&); //TODO: incomplete function definition // _ZN3Mob22renderDebugServerStateERK7Options
    virtual void kill(); // _ZN3Mob4killEv
    virtual void die(ActorDamageSource const&); // _ZN3Mob3dieERK17ActorDamageSource
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN3Mob35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void outOfWorld(); // _ZN3Mob10outOfWorldEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN3Mob5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN3Mob22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN3Mob21addAdditionalSaveDataER11CompoundTag
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN3Mob14_playStepSoundERK8BlockPosRK5Block
    virtual void _removeRider(ActorUniqueID const&, bool, bool); // _ZN3Mob12_removeRiderERK13ActorUniqueIDbb
    virtual void _onSizeUpdated(); // _ZN3Mob14_onSizeUpdatedEv
    virtual void knockback(Actor *, int, float, float, float, float, float); // _ZN3Mob9knockbackEP5Actorifffff
    virtual void resolveDeathLoot(int, ActorDamageSource const&); // _ZN3Mob16resolveDeathLootEiRK17ActorDamageSource
    virtual void spawnAnim(); // _ZN3Mob9spawnAnimEv
    virtual void setSleeping(bool); // _ZN3Mob11setSleepingEb
    virtual bool isSprinting()const; // _ZNK3Mob11isSprintingEv
    virtual void setSprinting(bool); // _ZN3Mob12setSprintingEb
    virtual void playAmbientSound(); // _ZN3Mob16playAmbientSoundEv
    virtual void getAmbientSound(); // _ZN3Mob15getAmbientSoundEv
    virtual void getAmbientSoundPostponeTicks(); // _ZN3Mob28getAmbientSoundPostponeTicksEv
    virtual void getItemInHandIcon(ItemStack const&, int); // _ZN3Mob17getItemInHandIconERK9ItemStacki
    virtual void getSpeed()const; // _ZNK3Mob8getSpeedEv
    virtual void setSpeed(float); // _ZN3Mob8setSpeedEf
    virtual void getJumpPower()const; // _ZNK3Mob12getJumpPowerEv
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool); // _ZN3Mob11hurtEffectsERK17ActorDamageSourceibb
    virtual void getMeleeWeaponDamageBonus(Mob *); // _ZN3Mob25getMeleeWeaponDamageBonusEPS_
    virtual void getMeleeKnockbackBonus(); // _ZN3Mob22getMeleeKnockbackBonusEv
    virtual void travel(float, float, float); // _ZN3Mob6travelEfff
    virtual void applyFinalFriction(float, bool); // _ZN3Mob18applyFinalFrictionEfb
    virtual void updateWalkAnim(); // _ZN3Mob14updateWalkAnimEv
    virtual void aiStep(); // _ZN3Mob6aiStepEv
    virtual void pushActors(); // _ZN3Mob10pushActorsEv
    virtual void lookAt(Actor *, float, float); // _ZN3Mob6lookAtEP5Actorff
    virtual bool isLookingAtAnEntity(); // _ZN3Mob19isLookingAtAnEntityEv
    virtual void checkSpawnRules(bool); // _ZN3Mob15checkSpawnRulesEb
    virtual void checkSpawnObstruction()const; // _ZNK3Mob21checkSpawnObstructionEv
    virtual void shouldDespawn()const; // _ZNK3Mob13shouldDespawnEv
    virtual void getAttackAnim(float); // _ZN3Mob13getAttackAnimEf
    virtual void getItemUseDuration(); // _ZN3Mob18getItemUseDurationEv
    virtual void getItemUseStartupProgress(); // _ZN3Mob25getItemUseStartupProgressEv
    virtual void getItemUseIntervalProgress(); // _ZN3Mob26getItemUseIntervalProgressEv
    virtual void getItemuseIntervalAxis(); // _ZN3Mob22getItemuseIntervalAxisEv
    virtual void getTimeAlongSwing(); // _ZN3Mob17getTimeAlongSwingEv
    virtual void ate(); // _ZN3Mob3ateEv
    virtual void getMaxHeadXRot(); // _ZN3Mob14getMaxHeadXRotEv
    virtual void getLastHurtByMob(); // _ZN3Mob16getLastHurtByMobEv
    virtual void setLastHurtByMob(Mob *); // _ZN3Mob16setLastHurtByMobEPS_
    virtual void getLastHurtByPlayer(); // _ZN3Mob19getLastHurtByPlayerEv
    virtual void setLastHurtByPlayer(Player *); // _ZN3Mob19setLastHurtByPlayerEP6Player
    virtual void getLastHurtMob(); // _ZN3Mob14getLastHurtMobEv
    virtual void setLastHurtMob(Actor *); // _ZN3Mob14setLastHurtMobEP5Actor
    virtual bool isAlliedTo(Mob *); // _ZN3Mob10isAlliedToEPS_
    virtual void doHurtTarget(Actor *); // _ZN3Mob12doHurtTargetEP5Actor
    virtual bool canBeControlledByRider(); // _ZN3Mob22canBeControlledByRiderEv
    virtual void leaveCaravan(); // _ZN3Mob12leaveCaravanEv
    virtual void joinCaravan(Mob *); // _ZN3Mob11joinCaravanEPS_
    virtual bool hasCaravanTail()const; // _ZNK3Mob14hasCaravanTailEv
    virtual void getCaravanHead()const; // _ZNK3Mob14getCaravanHeadEv
    virtual void getArmorValue(); // _ZN3Mob13getArmorValueEv
    virtual void getArmorCoverPercentage()const; // _ZNK3Mob23getArmorCoverPercentageEv
    virtual void hurtArmor(int); // _ZN3Mob9hurtArmorEi
    virtual void containerChanged(int); // _ZN3Mob16containerChangedEi
    virtual void updateEquipment(); // _ZN3Mob15updateEquipmentEv
    virtual void clearEquipment(); // _ZN3Mob14clearEquipmentEv
    virtual void getAllArmor()const; // _ZNK3Mob11getAllArmorEv
    virtual void getAllArmorID()const; // _ZNK3Mob13getAllArmorIDEv
    virtual void getAllHand()const; // _ZNK3Mob10getAllHandEv
    virtual void getAllEquipment()const; // _ZNK3Mob15getAllEquipmentEv
    virtual void getArmorTypeHash(); // _ZN3Mob16getArmorTypeHashEv
    virtual void sendInventory(bool); // _ZN3Mob13sendInventoryEb
    virtual void sendArmor(); // _ZN3Mob9sendArmorEv
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int); // _ZN3Mob25getDamageAfterMagicAbsorbERK17ActorDamageSourcei
    virtual void createAIGoals(); // _ZN3Mob13createAIGoalsEv
    virtual void onBorn(Actor &, Actor &); // _ZN3Mob6onBornER5ActorS1_
//  virtual void setItemSlot(EquipmentSlot, ItemStack const&); //TODO: incomplete function definition // _ZN3Mob11setItemSlotE13EquipmentSlotRK9ItemStack
    virtual void goDownInWater(); // _ZN3Mob13goDownInWaterEv
    virtual void setTransitioningSitting(bool); // _ZN3Mob23setTransitioningSittingEb
    virtual void attackAnimation(Actor *, float); // _ZN3Mob15attackAnimationEP5Actorf
    virtual void getAttackTime(); // _ZN3Mob13getAttackTimeEv
    virtual void _getWalkTargetValue(BlockPos const&); // _ZN3Mob19_getWalkTargetValueERK8BlockPos
    virtual bool canExistWhenDisallowMob()const; // _ZNK3Mob23canExistWhenDisallowMobEv
    virtual void useNewAi()const; // _ZNK3Mob8useNewAiEv
    virtual void ascendLadder(); // _ZN3Mob12ascendLadderEv
    virtual void ascendScaffolding(); // _ZN3Mob17ascendScaffoldingEv
    virtual void descendScaffolding(); // _ZN3Mob18descendScaffoldingEv
    virtual void initBodyControl(); // _ZN3Mob15initBodyControlEv
    virtual void jumpFromGround(); // _ZN3Mob14jumpFromGroundEv
    virtual void updateAi(); // _ZN3Mob8updateAiEv
    virtual void newServerAiStep(); // _ZN3Mob15newServerAiStepEv
    virtual void _serverAiMobStep(); // _ZN3Mob16_serverAiMobStepEv
    virtual void getDamageAfterEnchantReduction(ActorDamageSource const&, int); // _ZN3Mob30getDamageAfterEnchantReductionERK17ActorDamageSourcei
    virtual void getDamageAfterArmorAbsorb(ActorDamageSource const&, int); // _ZN3Mob25getDamageAfterArmorAbsorbERK17ActorDamageSourcei
    virtual void dropEquipment(ActorDamageSource const&, int); // _ZN3Mob13dropEquipmentERK17ActorDamageSourcei
    virtual void dropEquipment(); // _ZN3Mob13dropEquipmentEv
    virtual void dropBags(); // _ZN3Mob8dropBagsEv
    virtual void dropContainer(); // _ZN3Mob13dropContainerEv
    virtual void tickDeath(); // _ZN3Mob9tickDeathEv
    virtual void _endJump(); // _ZN3Mob8_endJumpEv
    virtual void updateGliding(); // _ZN3Mob13updateGlidingEv
    virtual void _allowAscendingScaffolding()const; // _ZNK3Mob26_allowAscendingScaffoldingEv
    Mob(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN3MobC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void registerAttributes(); // _ZN3Mob18registerAttributesEv
    void _initHardCodedComponents(); // _ZN3Mob24_initHardCodedComponentsEv
    void calculateAmbientSoundTime(int); // _ZN3Mob25calculateAmbientSoundTimeEi
    Mob(Level &); // _ZN3MobC2ER5Level
    void resetAttributes(); // _ZN3Mob15resetAttributesEv
    void playBornSound(); // _ZN3Mob13playBornSoundEv
    void playSpawnSound(); // _ZN3Mob14playSpawnSoundEv
    void createAI(std::vector<GoalDefinition>); // _ZN3Mob8createAIESt6vectorI14GoalDefinitionSaIS1_EE
    void stopAI(); // _ZN3Mob6stopAIEv
    void getAmbientSoundPostponeTicksRange(); // _ZN3Mob33getAmbientSoundPostponeTicksRangeEv
    void _isHeadInWater(); // _ZN3Mob14_isHeadInWaterEv
    void _isFloorDamaging(BlockPos const&); // _ZN3Mob16_isFloorDamagingERK8BlockPos
//  void _isNewEntityAttack(ActorDamageCause)const; //TODO: incomplete function definition // _ZNK3Mob18_isNewEntityAttackE16ActorDamageCause
    void _tryApplyingLevitation(Vec3 &)const; // _ZNK3Mob22_tryApplyingLevitationER4Vec3
    void checkTotemDeathProtection(ActorDamageSource const&); // _ZN3Mob25checkTotemDeathProtectionERK17ActorDamageSource
    bool hasBoundOrigin()const; // _ZNK3Mob14hasBoundOriginEv
    void getBoundOrigin()const; // _ZNK3Mob14getBoundOriginEv
    void setBoundOrigin(BlockPos); // _ZN3Mob14setBoundOriginE8BlockPos
    void tickBlockDamage(); // _ZN3Mob15tickBlockDamageEv
    void tickAttributes(); // _ZN3Mob14tickAttributesEv
    void tickEffects(); // _ZN3Mob11tickEffectsEv
    void _updateSprintingState(); // _ZN3Mob21_updateSprintingStateEv
    void frostWalk(); // _ZN3Mob9frostWalkEv
    bool isFrostWalking()const; // _ZNK3Mob14isFrostWalkingEv
    void setInterpolation(bool); // _ZN3Mob16setInterpolationEb
    void lerpTo(Vec3 const&, Vec2 const&, float, int); // _ZN3Mob6lerpToERK4Vec3RK4Vec2fi
    void lerpToRotation(Vec2 const&, int); // _ZN3Mob14lerpToRotationERK4Vec2i
    bool isGliding()const; // _ZNK3Mob9isGlidingEv
    void getTravelType(); // _ZN3Mob13getTravelTypeEv
//  void calcMoveRelativeSpeed(Mob::TravelType); //TODO: incomplete function definition // _ZN3Mob21calcMoveRelativeSpeedENS_10TravelTypeE
    void getXxa()const; // _ZNK3Mob6getXxaEv
    void getYya()const; // _ZNK3Mob6getYyaEv
    void getZza()const; // _ZNK3Mob6getZzaEv
    void getJumpMultiplier(); // _ZN3Mob17getJumpMultiplierEv
    void getJumpPrevention(); // _ZN3Mob17getJumpPreventionEv
    void emitJumpPreventedEvent(BlockPos const&); // _ZN3Mob22emitJumpPreventedEventERK8BlockPos
    void shouldApplyWaterGravity(); // _ZN3Mob23shouldApplyWaterGravityEv
    void saveMainhand()const; // _ZNK3Mob12saveMainhandEv
    void _saveArmor(); // _ZN3Mob10_saveArmorEv
    void saveOffhand()const; // _ZNK3Mob11saveOffhandEv
    bool isPregnant()const; // _ZNK3Mob10isPregnantEv
    void loadMainhand(ListTag const*); // _ZN3Mob12loadMainhandEPK7ListTag
    void loadOffhand(ListTag const*); // _ZN3Mob11loadOffhandEPK7ListTag
    void _loadArmor(ListTag const*); // _ZN3Mob10_loadArmorEPK7ListTag
    void _verifyAttributes(); // _ZN3Mob17_verifyAttributesEv
    void setIsPregnant(bool); // _ZN3Mob13setIsPregnantEb
    void _applyRidingRotationLimits(); // _ZN3Mob26_applyRidingRotationLimitsEv
    void _updateMobTravel(); // _ZN3Mob16_updateMobTravelEv
    void updateAttackAnim(); // _ZN3Mob16updateAttackAnimEv
    void setJumping(bool); // _ZN3Mob10setJumpingEb
    bool isJumpOnBlockPrevented(BlockPos const&); // _ZN3Mob22isJumpOnBlockPreventedERK8BlockPos
    bool canPickUpLoot(ItemStack const&)const; // _ZNK3Mob13canPickUpLootERK9ItemStack
    void snapToYHeadRot(float); // _ZN3Mob14snapToYHeadRotEf
    void snapToYBodyRot(float); // _ZN3Mob14snapToYBodyRotEf
    void setYHeadRot(float); // _ZN3Mob11setYHeadRotEf
    void setRiderLockedBodyRot(float); // _ZN3Mob21setRiderLockedBodyRotEf
    void getRiderLockedBodyRot()const; // _ZNK3Mob21getRiderLockedBodyRotEv
    void getRiderRotLimit()const; // _ZNK3Mob16getRiderRotLimitEv
    void setRiderRotLimit(float); // _ZN3Mob16setRiderRotLimitEf
    void getGlidingTicks()const; // _ZNK3Mob15getGlidingTicksEv
    bool isTransitioningSitting()const; // _ZNK3Mob22isTransitioningSittingEv
    bool isEating()const; // _ZNK3Mob8isEatingEv
    void setEating(bool); // _ZN3Mob9setEatingEb
    void getEatCounter()const; // _ZNK3Mob13getEatCounterEv
    void setEatCounter(int); // _ZN3Mob13setEatCounterEi
    void setWantsToBeJockey(bool); // _ZN3Mob18setWantsToBeJockeyEb
    bool wantsToBeJockey()const; // _ZNK3Mob15wantsToBeJockeyEv
    void setJumpVelRedux(bool); // _ZN3Mob15setJumpVelReduxEb
    void setSpeedModifier(float); // _ZN3Mob16setSpeedModifierEf
    void _doSprintParticleEffect(); // _ZN3Mob23_doSprintParticleEffectEv
    void getCurrentSwingDuration(); // _ZN3Mob23getCurrentSwingDurationEv
    void _getDamageAfterAbsorb(int, int); // _ZN3Mob21_getDamageAfterAbsorbEii
//  void getItemSlot(EquipmentSlot)const; //TODO: incomplete function definition // _ZNK3Mob11getItemSlotE13EquipmentSlot
    void getFirstCaravanHead(); // _ZN3Mob19getFirstCaravanHeadEv
    void getCaravanSize()const; // _ZNK3Mob14getCaravanSizeEv
    void _updateMobId(ActorUniqueID &); // _ZN3Mob12_updateMobIdER13ActorUniqueID
    void getLastHurtMobTimestamp(); // _ZN3Mob23getLastHurtMobTimestampEv
    void getLastHurtByMobTimestamp(); // _ZN3Mob25getLastHurtByMobTimestampEv
    void getNoActionTime()const; // _ZNK3Mob15getNoActionTimeEv
//  void setSpawnMethod(MobSpawnMethod); //TODO: incomplete function definition // _ZN3Mob14setSpawnMethodE14MobSpawnMethod
    void getSpawnMethod(); // _ZN3Mob14getSpawnMethodEv
    void onPlayerJump(int); // _ZN3Mob12onPlayerJumpEi
    void setXxa(float); // _ZN3Mob6setXxaEf
    void setYya(float); // _ZN3Mob6setYyaEf
    void setZza(float); // _ZN3Mob6setZzaEf
    void getYRotA()const; // _ZNK3Mob8getYRotAEv
    void setYRotA(float); // _ZN3Mob8setYRotAEf
    void incrementArrowCount(int); // _ZN3Mob19incrementArrowCountEi
    void setNaturallySpawned(bool); // _ZN3Mob19setNaturallySpawnedEb
    bool isNaturallySpawned()const; // _ZNK3Mob18isNaturallySpawnedEv
    void setSurfaceMob(bool); // _ZN3Mob13setSurfaceMobEb
    void _addSpeedBonus(mce::UUID const&, std::string const&, float); // _ZN3Mob14_addSpeedBonusERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEf
    void _removeSpeedBonus(mce::UUID const&); // _ZN3Mob17_removeSpeedBonusERKN3mce4UUIDE
    void getFlightSpeed(); // _ZN3Mob14getFlightSpeedEv
    void setFlightSpeed(float); // _ZN3Mob14setFlightSpeedEf
//  void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN3Mob24onPlayerDimensionChangedEP6Player11AutomaticIDI9DimensioniE
    void getVillageLegacy()const; // _ZNK3Mob16getVillageLegacyEv
    bool isLayingEgg()const; // _ZNK3Mob11isLayingEggEv
    void setIsLayingEgg(bool); // _ZN3Mob14setIsLayingEggEb
    void getFrictionModifier()const; // _ZNK3Mob19getFrictionModifierEv
    void setFrictionModifier(float); // _ZN3Mob19setFrictionModifierEf
    void getRollCounter()const; // _ZNK3Mob14getRollCounterEv
    bool isRolling()const; // _ZNK3Mob9isRollingEv
    void setRolling(bool); // _ZN3Mob10setRollingEb
    void setTargetCaptain(ActorUniqueID); // _ZN3Mob16setTargetCaptainE13ActorUniqueID
    void getTargetCaptain()const; // _ZNK3Mob16getTargetCaptainEv
};

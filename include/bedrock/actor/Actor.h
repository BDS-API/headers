#pragma once

#include "../description/property/CollisionBoxDescription.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "../../unmapped/HashString.h"
#include "../network/packet/ChangeDimensionPacket.h"
#include "../../unmapped/Attribute.h"
#include "unmapped/ActorInteraction.h"
#include "unmapped/ActorLink.h"
#include <memory>
#include "../util/Random.h"
#include "Mob.h"
#include "../../unmapped/DataLoadHelper.h"
#include "../util/Vec2.h"
#include "../util/AABB.h"
#include <string>
#include "../../unmapped/SeatDescription.h"
#include <functional>
#include "../../unmapped/Block.h"
#include "../level/Level.h"
#include "../item/ItemStack.h"
#include "../block/unmapped/BlockSource.h"
#include "Player.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/MobEffectInstance.h"
#include "../util/Vec3.h"
#include "../../unmapped/ActionEvent.h"
#include "unmapped/ActorRuntimeID.h"
#include <vector>
#include "../network/packet/UpdateTradePacket.h"
#include "../network/packet/UpdateEquipPacket.h"
#include "../../unmapped/EntityRegistryOwned.h"
#include "effect/MobEffect.h"
#include "../../unmapped/HashedString.h"
#include "../../unmapped/RenderParams.h"
#include "../../unmapped/Dimension.h"
#include "../../unmapped/UIProfanityContext.h"
#include "../description/property/EquipmentTableDescription.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "unmapped/ActorUniqueID.h"
#include "damagesource/ActorDamageSource.h"
#include "ItemActor.h"


class Actor {

public:
    static long TOTAL_AIR_SUPPLY;
    static long DAMAGE_NEARBY_MOBS_DURATION;
    static long DEFAULT_AMBIENT_SOUND_INTERVAL;
    static long DEFAULT_AMBIENT_SOUND_INTERVAL_RANGE;
    static std::string RIDING_TAG;

//  virtual void setEquippedSlot(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual std::string getScoreTag()const;
//  virtual void getExitTip(std::string const&, InputMode)const; //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getYawSpeedInDegreesPerSecond()const;
    virtual void onEffectAdded(MobEffectInstance &);
    virtual void getYHeadRot()const;
    virtual bool canSynchronizeNewEntity()const;
    virtual bool isImmobile()const;
    virtual void setDamageNearbyMobs(bool);
    virtual void checkInsideBlocks(float);
    virtual void setNameTagVisible(bool);
    virtual void checkBlockCollisions(AABB const&);
    virtual void _removeRider(ActorUniqueID const&, bool, bool);
    virtual void getDebugText(std::vector<std::string> &);
    virtual bool canShowNameTag()const;
    virtual void getCameraOffset()const;
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual void getAnimationComponent();
    virtual void findAttackTarget();
    virtual bool isInWaterOrRain()const;
    virtual void heal(int);
    virtual void changeDimension(ChangeDimensionPacket const&);
    virtual void move(Vec3 const&);
    virtual bool isImmersedInWater()const;
    virtual bool isLeashableType();
    virtual void reloadLootTable();
    virtual bool isWorldBuilder();
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void setTarget(Actor *);
    virtual bool isSurfaceMob()const;
    virtual void awardKillScore(Actor &, int);
    virtual void onSynchedDataUpdate(int);
    virtual void onTame();
    virtual void spawnAtLocation(Block const&, int, float);
    virtual void tryTeleportTo(Vec3 const&, bool, bool, int, int);
    virtual bool isTargetable()const;
//  virtual void getArmorColorInSlot(ArmorSlot, int)const; //TODO: incomplete function definition
    virtual void addRider(Actor &);
    virtual void setOffhandSlot(ItemStack const&);
    virtual void startSwimming();
    virtual void pushOutOfBlocks(Vec3 const&);
    virtual void spawnTrailBubbles();
    virtual void moveRelative(float, float, float, float);
    virtual void getRiderYRotation(Actor const&)const;
    virtual void shouldRender()const;
    virtual bool canPowerJump()const;
    virtual bool canMakeStepSound()const;
    virtual void getHeadLookVector(float);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void flagRiderToRemove(Actor &);
    virtual bool isFree(Vec3 const&, float);
    virtual bool isEnchanted()const;
    virtual void rideTick();
    virtual void onOrphan();
    virtual void getRidingHeight();
    virtual void getBrightness(float)const;
    virtual void saveWithoutId(CompoundTag &);
    virtual bool isCreative()const;
    virtual void checkFallDamage(float, bool);
//  virtual void playSynchronizedSound(LevelSoundEvent, Vec3 const&, Block const&, bool); //TODO: incomplete function definition
//  virtual void setEquippedSlot(ArmorSlot, int, int); //TODO: incomplete function definition
    virtual void doWaterSplashEffect();
    virtual void setSitting(bool);
    virtual void getAlwaysShowNameTag()const;
    virtual bool canBeAffected(int)const;
    virtual void updateInsideBlock();
    virtual bool isSneaking()const;
    virtual void reset();
    virtual void getPos()const;
    virtual void getEntityTypeId()const;
    virtual void performRangedAttack(Actor &, float);
    virtual void getDimensionId()const;
    virtual void inCaravan()const;
    virtual void getMapDecorationRotation()const;
    virtual void startSpinAttack();
    virtual bool isPickable();
    virtual bool isInvisible()const;
    virtual void setPos(Vec3 const&);
    virtual void spawnAtLocation(int, int);
    virtual void doFireHurt(int);
    virtual void getInterpolatedWalkAnimSpeed(float)const;
    virtual void getInterpolatedRidingOffset(float)const;
    virtual void setRot(Vec2 const&);
    virtual void getLifeSpan()const;
    virtual bool isInWall()const;
    virtual void getPortalCooldown()const;
    virtual void rideJumped();
    virtual bool canSeeInvisible()const;
    virtual bool isCreativeModeAllowed();
    virtual void animateHurt();
    virtual bool isOnHotBlock()const;
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool hasComponent(Util::HashString const&)const;
    virtual void consumeTotem();
    virtual void kill();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void save(CompoundTag &);
    virtual void onEffectRemoved(MobEffectInstance &);
    virtual void stopSwimming();
    virtual void feed(int);
    virtual void getChestSlots()const;
    virtual void setCarriedItem(ItemStack const&);
    virtual bool wasHurt();
    virtual void setAuxValue(int);
    virtual void getFiringPos()const;
    virtual void spawnAtLocation(Block const&, int);
    virtual bool isSkyLit(float);
    virtual void setScoreTag(std::string const&);
    virtual bool isValidTarget(Actor *)const;
//  virtual void renderDebugServerState(Options const&); //TODO: incomplete function definition
    virtual void drop(ItemStack const&, bool);
    virtual void _makeFlySound()const;
    virtual void setNameTag(std::string const&);
    virtual void getMutableAttribute(Attribute const&);
    virtual void setCanPowerJump(bool);
    virtual void getInventorySize()const;
    virtual void onInsideBubbleColumn(bool);
    virtual void handleInsidePortal(BlockPos const&);
    virtual void sendMotionPacketIfNeeded();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getShadowRadius()const;
    virtual bool chorusFruitTeleport(Vec3 &);
    virtual void getInterpolatedRidingPosition(float)const;
//  virtual void changeDimension(AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition
    virtual bool isJumping()const;
    virtual void onEffectUpdated(MobEffectInstance const&);
    virtual void positionRider(Actor &, float);
    virtual void getAddPacket();
    virtual void getPickRadius();
    virtual void stopRiding(bool, bool, bool);
    virtual void setStanding(bool);
//  virtual void getAttachPos(ActorLocation, float)const; //TODO: incomplete function definition
    virtual bool isInvertedHealAndHarm()const;
    virtual void lerpMotion(Vec3 const&);
    virtual void baseTick();
    virtual bool isFree(Vec3 const&);
    virtual bool isOverWater()const;
    virtual void getLootTable();
    virtual void getCommandPermissionLevel()const;
    virtual void getAttribute(Attribute const&)const;
    virtual void getNameTagAsHash()const;
    virtual bool isInLava()const;
    virtual void wobble();
    virtual bool hasEnteredWater()const;
    virtual void getSourceUniqueID()const;
    virtual void getDeathTime()const;
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void rideLanded(Vec3 const&, Vec3 const&);
    virtual bool canAttack(Actor *, bool)const;
    virtual bool isInWater()const;
    virtual void onFailedTame();
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void setOwner(ActorUniqueID);
    virtual bool canBePulledIntoVehicle()const;
    virtual void remove();
    virtual void stopSpinAttack();
    virtual void getInterpolatedHeadRot(float)const;
    virtual bool isShootable();
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual bool canAddRider(Actor &)const;
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void killed(Actor &);
//  virtual void getArmorMaterialTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition
    virtual void handleFallDistanceOnServer(float, bool);
    virtual void setOnFire(int);
    virtual void updateWaterState();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual bool canExistInPeaceful()const;
    virtual void getEquipmentCount()const;
    virtual void getOwnerEntityType();
    virtual void checkBlockCollisions();
    virtual void getEquipSlots()const;
    virtual void spawnAtLocation(ItemStack const&, float);
    virtual void _onSizeUpdated();
//  virtual bool isUnderLiquid(MaterialType)const; //TODO: incomplete function definition
    virtual bool isSleeping()const;
    virtual void onLightningHit();
    virtual void makeStuckInBlock(float);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getShadowHeightOffs();
    virtual void getInterpolatedBodyRot(float)const;
    virtual bool isSilent();
    virtual void causeFallDamage(float);
    virtual void openContainerComponent(Player &);
    virtual void outOfWorld();
    virtual void reloadLootTable(EquipmentTableDescription const*);
    virtual void despawn();
    virtual bool hasOutputSignal(unsigned char)const;
    virtual void startRiding(Actor &);
    virtual void getOnDeathExperience();
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void spawnAtLocation(int, int, float);
    virtual bool canChangeDimensions()const;
    virtual void die(ActorDamageSource const&);
//  virtual void playSynchronizedSound(LevelSoundEvent, Vec3 const&, int, bool); //TODO: incomplete function definition
    virtual void setSize(float, float);
    virtual void getHandleWaterAABB()const;
    virtual void add(ItemStack &);
    virtual bool isFishable()const;
    virtual bool isAlive()const;
    virtual void getPosExtrapolated(float)const;
    virtual void queryEntityRenderer()const;
    virtual bool canDestroyBlock(Block const&)const;
    virtual void interactPreventDefault();
//  virtual void getArmor(ArmorSlot)const; //TODO: incomplete function definition
    virtual void getOutputSignal()const;
    virtual void normalTick();
    virtual bool canSee(Actor const&)const;
    virtual void _doAutoAttackOnTouch(Actor &);
    virtual void getInterpolatedBodyYaw(float)const;
    virtual void getEquippedTotem()const;
    virtual void filterFormattedNameTag(UIProfanityContext const&);
    virtual void attack(Actor &);
    virtual void getCarriedItem()const;
//  virtual void useItem(ItemStack &, ItemUseMethod, bool); //TODO: incomplete function definition
    virtual void setSneaking(bool);
    virtual std::string getFormattedNameTag()const;
    virtual bool canSee(Vec3 const&)const;
//  virtual void getArmorMaterialTextureTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getPosOld()const;
    virtual bool isBlocking()const;
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void getDefaultLootTable();
    virtual void _playFlySound(BlockPos const&, Block const&);
    virtual bool isOnFire()const;
    virtual bool isAdventure()const;
    virtual std::string getNameTag()const;
    virtual void intersects(Vec3 const&, Vec3 const&)const;
    virtual bool isDamageBlocked(ActorDamageSource const&)const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void buildDebugInfo(std::string &)const;
    virtual void getControllingPlayer()const;
    virtual void shouldTick()const;
    virtual void markHurt();
    virtual void adjustDamageAmount(int &)const;
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual bool breaksFallingBlocks()const;
    virtual void loadLinks(CompoundTag const&, std::vector<ActorLink> &, DataLoadHelper &);
    virtual void swing();
    virtual void tickLeash();
    virtual void getPortalWaitTime()const;
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void onAboveBubbleColumn(bool);
//  virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void playerTouch(Player &);
    ~Actor();
    void _updateOwnerChunk();
    void _playMovementSound(bool);
    void getInitializationMethod();
    void spawnEatParticles(ItemStack const&, int);
    void getActorIdentifier()const;
    void getEntity()const;
    void setAABBDim(Vec2 const&);
    bool isInThunderstorm()const;
    void removeEffectParticles();
    void getPersistingTradeOffers();
    void getLocator(HashedString const&);
    bool isAutonomous()const;
    bool hasAnyVisibleEffects()const;
    void getSlotAllowedItems(int);
    void setPowered(bool);
    void spawnDeathParticles();
    void getTargetId();
    void initParams(VariantParameterList &);
    void setLayingDown(bool);
    void resetClientAnimations();
    void getPortalEntranceAxis()const;
    void getRandomPointInAABB(Random &);
    bool isPowered()const;
    bool hasRestriction()const;
    bool hasRuntimeID()const;
    bool hasTotemEquipped()const;
    bool isTickingEntity()const;
    void pushBackActionEventToActionQueue(ActionEvent);
    void setControllingSeat(int);
    void positionAllRiders();
    void getSwimAmount(float)const;
    void pullInEntity(Actor &);
    void setEnforceRiderRotationLimit(bool);
    void _sendLinkPacket(ActorLink const&)const;
    void getLevel()const;
    void doEnchantDamageEffects(Mob &, Mob &);
    bool isRegionValid()const;
    void setLeashHolder(ActorUniqueID);
    void buildDebugGroupInfo(std::string &)const;
    bool hasEnoughFoodToBreed();
    void distanceToSqr(Vec3 const&)const;
//  void setColor(PaletteColor); //TODO: incomplete function definition
    void getAABBShapeComponent()const;
//  void _setNetherPortalData(AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
    void _getAABBShapeComponentNonConst();
    bool hasPlayerRider()const;
    void setExperimental(bool);
    void setDelayedAttacking(bool);
    void setLimitedLife(int);
    void getBlockTarget()const;
    void updateBBFromDescription();
    void _defaultInitEquipmentDropChances();
    bool hasSaddle()const;
    void getAttributes();
    void updateBBFromDescription(CollisionBoxDescription const&);
    void getControllingSeat();
    bool hasAnyEffects()const;
    void testForCollidableMobs(BlockSource &, AABB const&, std::vector<AABB> &);
    void setScared(bool);
    bool hasTag(std::string const&)const;
    void getStateVectorComponent()const;
    void getMolangVariables();
    bool isSwimming()const;
    bool isInWorld()const;
    bool isRider(Actor const&)const;
    void getInterpolatedPosition(float)const;
    void getVerticalSpeedInMetersPerSecond()const;
    void getOwnerId()const;
    void getViewVector(float)const;
    Actor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool canBeginOrContinueClimbingLadder(bool)const;
    void getArmorContainer()const;
    void setVariant(int);
    bool isWithinRestriction()const;
    bool isStanding()const;
    bool isOrphan()const;
    void resetRegion();
//  void setStatusFlag(ActorFlags, bool); //TODO: incomplete function definition
    void _setHeightOffset(float);
    bool isStackable()const;
    void getAmbientSoundIntervalMin(float &)const;
    void getCurrentSwimAmount()const;
    bool isRiding()const;
    void getTradeInterest()const;
    void dropLeash(bool, bool);
    void loadEntityFlags(CompoundTag const&, DataLoadHelper &);
    void getTarget()const;
    void removeEffect(int);
    bool isTame()const;
    void getSpatialNetworkData()const;
//  void playSound(LevelSoundEvent, Vec3 const&, int); //TODO: incomplete function definition
    void getTradeOffers();
    void calculateAttackDamage(Actor &);
    void getCollidableMob();
    void getActiveEffectCount()const;
    void testForEntityStacking(BlockSource &, AABB const&, std::vector<AABB> &);
    void clearActionQueue();
    bool hasTickingArea()const;
    std::string getTags()const;
//  void _setActorTypeId(ActorType); //TODO: incomplete function definition
    void requireReload();
    void _getLevelPtr()const;
    void setDancing(bool);
    void executeEvent(std::string const&, VariantParameterList const&);
    void getStructuralIntegrity()const;
    void addDefinitionGroup(std::string const&);
    void getVariant()const;
    bool isGlobal()const;
    void getTradingPlayer()const;
    void shouldOrphan(BlockSource &);
    void setPreviousPosRot(Vec3 const&, Vec2 const&);
    void checkEntityOnewayCollision(BlockSource &, BlockPos const&);
    void getTempted()const;
    void getEconomyTradeableComponent()const;
    void _setDimension(Dimension &);
    bool isDelayedAttacking()const;
    void getCenter(float)const;
    void getFirstRider()const;
    bool wantsMoreFood();
    bool isInScaffolding()const;
    void setInvisible(bool);
    bool isLeashed()const;
    void addTag(std::string const&);
    void setPosDirectLegacy(Vec3 const&);
    void getRideRoot()const;
    void getHurtColor()const;
    void removeEffectNoUpdate(int);
    void _setLevelPtr(Level *);
    void setPersistent();
    void setResting(bool);
    bool isInPrecipitation()const;
    void _convertOldSave(CompoundTag const&);
    bool isInitialized();
    bool canClimb()const;
    void _getBlockOnPos();
    void getRenderLeashHolder();
    bool isPersistent()const;
    void onOnewayCollision(AABB const&);
    bool isInsidePortal();
    void setFishingHookID(ActorUniqueID);
    bool hasEffect(MobEffect const&)const;
    void transferTickingArea(Dimension &);
    bool isRemoved()const;
    void clearFishingHookID();
    bool canCurrentlySwim()const;
    void getDimensionConst()const;
    void setJumpDuration(int);
    bool hasRider()const;
    void distanceSqrToBlockPosCenter(BlockPos const&)const;
    void getMarkVariant()const;
//  bool hasType(ActorType)const; //TODO: incomplete function definition
    void createUpdateTradePacket(int);
    void initEntity(EntityRegistryOwned &);
    void setBreakingObstruction(bool);
    void getStrength()const;
    void _setupServerAnimationComponent();
    void _damageNearbyMobs();
    bool isDoorOpener()const;
    bool isOverScaffolding()const;
    bool isScared()const;
    void setHurtDir(int);
    void reloadIfRequired();
    void setStructuralIntegrity(int);
    void lovePartnerId()const;
    bool isBribed()const;
    void serializationSetHealth(int);
    bool isDancing()const;
    bool isInSnow()const;
    void removeEntity();
    bool isWASDControlled();
    void setCanClimb(bool);
    bool canMate(Actor const&)const;
    void enforceRiderRotationLimit()const;
    void getOffhandSlot()const;
    void getCollidableMobNear();
    void moveTo(Vec3 const&, Vec2 const&);
    bool isWalker()const;
    void setEquipFromPacket(UpdateEquipPacket const&);
    bool isSwimmer()const;
    bool isWithinRestriction(BlockPos const&)const;
    void dropTowards(ItemStack const&, Vec3);
    void sendMotionToServer();
    void getAmbientSoundEvent()const;
    void getEntityTerrainInterlockData();
    void getEntityData()const;
    void setChanged();
    void setShakeTime(int);
    void setWASDControlled(bool);
    void setBlockTarget(BlockPos const&);
    void getSpeedInMetersPerSecond()const;
    void setEnchanted(bool);
    void getRestrictCenter()const;
    void getViewVector2(float)const;
    void teleportRidersTo(Vec3 const&, int, int);
    void setPosPrev(Vec3 const&);
    void forEachLeashedActor(std::function<void (Actor *)>);
    bool isClimbing()const;
    void setCollidableMobNear(bool);
    void burn(int, bool);
    bool isRider(ActorUniqueID const&)const;
    void operator==(Actor &);
    void setStrength(int);
    bool hasFamily(Util::HashString const&)const;
    bool isFireImmune()const;
    bool wasLastHitByPlayer();
    void reload();
    void getLevel();
//  void setColor2(PaletteColor); //TODO: incomplete function definition
    void getRadius()const;
    bool isSheared()const;
    void getEffect(MobEffect const&)const;
    bool isExperimental()const;
    void pickUpItem(ItemActor &, int);
    bool hasTeleported()const;
    void _exitRide(Actor const&, float);
    void setSkinID(int);
    bool hasPersistingTrade()const;
    bool isInRain()const;
    void hurt(ActorDamageSource const&, int, bool, bool);
    void getTickingArea();
    void getRandom()const;
    bool isInsideBorderBlock(float)const;
    void setLastHitBB(Vec3 const&, Vec3 const&);
    void calcCenterPos()const;
    void getRideRuntimeID()const;
    void moveChunks();
    void _refreshAABB();
    bool hasEntity()const;
    void getStateVectorComponentNonConst();
    bool hasPriorityAmmunition()const;
    void migrateUniqueID(ActorUniqueID);
    void _initializeLeashRopeSystem();
    void getStrengthMax()const;
    bool isAngry()const;
    bool isRiding(Actor *)const;
    void setSwimmer(bool);
    bool hasDefinitionGroup(std::string const&)const;
    bool canOpenContainer(Player &)const;
    bool canFly()const;
    bool isSafeToSleepNear()const;
    bool isControlledByLocalInstance()const;
    void restrictTo(BlockPos const&, float);
    bool isCharged()const;
    void getOwner()const;
    void setChainedDamageEffects(bool);
    void updateMolangVariables(RenderParams &);
    void getRiderIndex(Actor &)const;
    void setBaseDefinition(ActorDefinitionIdentifier const&, bool, bool);
    void getEntity();
    void updateTickingData();
    void getColor2()const;
//  void fetchNearbyActorsSorted(Vec3 const&, ActorType); //TODO: incomplete function definition
    void getDamageNearbyMobs()const;
    void setSeatDescription(Vec3 const&, SeatDescription const&);
    void deregisterTagsFromLevelCache();
//  bool hasAttributeBuff(AttributeBuffType)const; //TODO: incomplete function definition
    bool isBaby()const;
    void removeAllRiders(bool, bool);
    bool isChested()const;
    void getActorToWorldTransform(float, bool, Vec3 const&)const;
    void getLinks()const;
    void setCharged(bool);
    void _randomHeartPos();
    void _getTallestCollisionShape(AABB const&, AABB const&, Vec3 const&);
    void refreshComponents();
    void setDoorBreaker(bool);
    void getColor()const;
    void getAllEffects()const;
    bool hasUniqueID()const;
    void getAmbientSoundIntervalRange(float &)const;
    bool isSitting()const;
    void saveEntityFlags(CompoundTag &);
    bool isInClouds()const;
    void setCollidableMob(bool);
    void _countFood(int);
    void updateDescription();
    void setGlobal(bool);
    void cacheComponentData();
    void setCanFly(bool);
    void _isValidBlockToTeleportOnto(Block const&, bool)const;
    void savePersistingTrade(std::unique_ptr<CompoundTag>, int);
    void _setPos(Vec3 const&);
    void _setAABB(AABB const&);
//  void getStatusFlag(ActorFlags)const; //TODO: incomplete function definition
    void getHurtDir()const;
    void setRegion(BlockSource &);
    void _serializeComponents(CompoundTag &);
    void fetchFishingHook();
    void setRuntimeID(ActorRuntimeID);
    void addEffect(MobEffectInstance const&);
    void distanceTo(Actor const&)const;
    void getPersistingTradeRiches();
    void clearRestriction();
    bool isAutoSendEnabled()const;
    void updateInBubbleColumnState();
    void updateInvisibilityStatus();
    bool isActionQueueEmpty()const;
    void getHealth()const;
    void _setPosPrev(Vec3 const&);
    void moveBBs(Vec3 const&);
    void createUpdateEquipPacket(int);
    void onLadder(bool)const;
    void getSpatialNetworkData();
    bool isTrusting()const;
    void _tryPlaceAt(Vec3 const&);
    void onOnewayCollision(BlockPos);
    void getNextActionEvent(ActionEvent &);
    void distanceTo(Vec3 const&)const;
    bool isResting()const;
    void _spawnPukeParticles();
    void sendActorDefinitionEventTriggered(std::string const&);
    void setMoving(bool);
    void _manageRiders(BlockSource &);
    void getUniqueID()const;
    void getLeashHolder()const;
    bool hasLevel()const;
    void getDimension()const;
    void setAutonomous(bool);
    void setOffersFromPacket(UpdateTradePacket const&);
    void getInterpolatedRotation(float)const;
    void removePersistingTrade();
    bool isDebugging()const;
    void setSaddle(bool);
    void getSkinID()const;
//  void playSound(LevelSoundEvent, Vec3 const&, Block const&); //TODO: incomplete function definition
    void getPlayerOwner()const;
    void setDoorOpener(bool);
    void setTradingPlayer(Player *);
    void getRuntimeID()const;
    void getHandContainer()const;
    void setStrengthMax(int);
    void setInLove(Actor *);
    void tick(BlockSource &);
    bool isTrading()const;
    void setHurtTime(int);
    void buildForward()const;
    void getEntityData();
    void removeTag(std::string const&);
    bool hasFishingHook()const;
    bool isClient()const;
    void getRegionConst()const;
    bool isUnderWaterfall()const;
    bool isIgnited()const;
    void setUniqueID(ActorUniqueID);
    void setTempted(bool);
    void _updateOnewayCollisions(BlockSource &);
    void getJumpDuration()const;
    void removeAllEffects();
    void getArmorContainer();
    void getShakeTime()const;
    void getRegion()const;
    bool hasSubBBInLava()const;
    bool hasTags()const;
    Actor(Level &);
    void setMarkVariant(int);
    void getTotalAirSupply()const;
    void onChunkDiscarded();
    void getHandContainer();
    bool isBreakingObstruction()const;
    void setClimbing(bool);
    void removeDefinitionGroup(std::string const&);
    void saveLinks()const;
    void getRotation()const;
    void _setAABBDim(Vec2 const&);
    void _sendDirtyActorData();
    void getChainedDamageEffects()const;
    void distanceToSqr(Actor const&)const;
    bool hasExcessFood();
    void getMaxHealth()const;
    void _spawnTreasureHuntingParticles();
    void healEffects(int);
    bool isMoving()const;
    void _containsSneakCollisionShapes(AABB const&);
    bool isLayingDown()const;
    void setWalker(bool);
    void getHurtTime()const;
    void pickUpItem(ItemActor &);
    void getAirSupply()const;
    void _tryPlantWitherRose();
    void _getStateVectorComponentNonConst();
    void spawnBalloonPopParticles();
    bool isInLove()const;
    void spawnTamingParticles(bool);
    void setTradeInterest(bool);
    void enableAutoSendPosRot(bool);
    void getRestrictRadius()const;
    bool isDoorBreaker()const;
//  bool hasCategory(ActorCategory)const; //TODO: incomplete function definition
    void getFirstAvailableSeatPos(Actor &, Vec3 &)const;
    void getRide()const;
    void spawnDustParticles(int);
};

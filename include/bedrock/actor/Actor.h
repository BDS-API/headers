#pragma once

#include "unmapped/ActorUniqueID.h"
#include <vector>
#include <memory>
#include "../util/BlockPos.h"
#include <string>
#include <functional>
#include "../util/Vec3.h"
#include "../../unmapped/ActionEvent.h"
#include "unmapped/ActorRuntimeID.h"


class Actor {

public:
    static long TOTAL_AIR_SUPPLY;
    static long DAMAGE_NEARBY_MOBS_DURATION;
    static long DEFAULT_AMBIENT_SOUND_INTERVAL;
    static long DEFAULT_AMBIENT_SOUND_INTERVAL_RANGE;
    static std::string RIDING_TAG;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN5Actor15reloadHardcodedENS_20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN5Actor21reloadHardcodedClientENS_20InitializationMethodERK20VariantParameterList
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN5Actor20initializeComponentsENS_20InitializationMethodERK20VariantParameterList
//  virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN5Actor16reloadComponentsENS_20InitializationMethodERK20VariantParameterList
    virtual bool hasComponent(Util::HashString const&)const; // _ZNK5Actor12hasComponentERKN4Util10HashStringE
    ~Actor(); // _ZN5ActorD2Ev
    virtual void reset(); // _ZN5Actor5resetEv
    virtual void getOnDeathExperience(); // _ZN5Actor20getOnDeathExperienceEv
    virtual void getOwnerEntityType(); // _ZN5Actor18getOwnerEntityTypeEv
    virtual void remove(); // _ZN5Actor6removeEv
    virtual void setPos(Vec3 const&); // _ZN5Actor6setPosERK4Vec3
    virtual void getPos()const; // _ZNK5Actor6getPosEv
    virtual void getPosOld()const; // _ZNK5Actor9getPosOldEv
    virtual void getPosExtrapolated(float)const; // _ZNK5Actor18getPosExtrapolatedEf
//  virtual void getAttachPos(ActorLocation, float)const; //TODO: incomplete function definition // _ZNK5Actor12getAttachPosE13ActorLocationf
    virtual void getFiringPos()const; // _ZNK5Actor12getFiringPosEv
    virtual void setRot(Vec2 const&); // _ZN5Actor6setRotERK4Vec2
    virtual void move(Vec3 const&); // _ZN5Actor4moveERK4Vec3
    virtual void getInterpolatedRidingPosition(float)const; // _ZNK5Actor29getInterpolatedRidingPositionEf
    virtual void getInterpolatedBodyRot(float)const; // _ZNK5Actor22getInterpolatedBodyRotEf
    virtual void getInterpolatedHeadRot(float)const; // _ZNK5Actor22getInterpolatedHeadRotEf
    virtual void getInterpolatedBodyYaw(float)const; // _ZNK5Actor22getInterpolatedBodyYawEf
    virtual void getYawSpeedInDegreesPerSecond()const; // _ZNK5Actor29getYawSpeedInDegreesPerSecondEv
    virtual void getInterpolatedWalkAnimSpeed(float)const; // _ZNK5Actor28getInterpolatedWalkAnimSpeedEf
    virtual void getInterpolatedRidingOffset(float)const; // _ZNK5Actor27getInterpolatedRidingOffsetEf
    virtual void checkBlockCollisions(AABB const&); // _ZN5Actor20checkBlockCollisionsERK4AABB
    virtual void checkBlockCollisions(); // _ZN5Actor20checkBlockCollisionsEv
    virtual bool breaksFallingBlocks()const; // _ZNK5Actor19breaksFallingBlocksEv
    virtual void blockedByShield(ActorDamageSource const&, Actor &); // _ZN5Actor15blockedByShieldERK17ActorDamageSourceRS_
    virtual void moveRelative(float, float, float, float); // _ZN5Actor12moveRelativeEffff
    virtual void teleportTo(Vec3 const&, bool, int, int); // _ZN5Actor10teleportToERK4Vec3bii
    virtual void tryTeleportTo(Vec3 const&, bool, bool, int, int); // _ZN5Actor13tryTeleportToERK4Vec3bbii
    virtual bool chorusFruitTeleport(Vec3 &); // _ZN5Actor19chorusFruitTeleportER4Vec3
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN5Actor6lerpToERK4Vec3RK4Vec2i
    virtual void lerpMotion(Vec3 const&); // _ZN5Actor10lerpMotionERK4Vec3
    virtual void getAddPacket(); // _ZN5Actor12getAddPacketEv
    virtual void normalTick(); // _ZN5Actor10normalTickEv
    virtual void baseTick(); // _ZN5Actor8baseTickEv
    virtual void rideTick(); // _ZN5Actor8rideTickEv
    virtual void positionRider(Actor &, float); // _ZN5Actor13positionRiderERS_f
    virtual void getRidingHeight(); // _ZN5Actor15getRidingHeightEv
    virtual void startRiding(Actor &); // _ZN5Actor11startRidingERS_
    virtual void addRider(Actor &); // _ZN5Actor8addRiderERS_
    virtual void flagRiderToRemove(Actor &); // _ZN5Actor17flagRiderToRemoveERS_
//  virtual void getExitTip(std::string const&, InputMode)const; //TODO: incomplete function definition // _ZNK5Actor10getExitTipERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE9InputMode
    virtual void intersects(Vec3 const&, Vec3 const&)const; // _ZNK5Actor10intersectsERK4Vec3S2_
    virtual bool isFree(Vec3 const&, float); // _ZN5Actor6isFreeERK4Vec3f
    virtual bool isFree(Vec3 const&); // _ZN5Actor6isFreeERK4Vec3
    virtual bool isInWall()const; // _ZNK5Actor8isInWallEv
    virtual bool isInvisible()const; // _ZNK5Actor11isInvisibleEv
    virtual bool canShowNameTag()const; // _ZNK5Actor14canShowNameTagEv
    virtual bool canExistInPeaceful()const; // _ZNK5Actor18canExistInPeacefulEv
    virtual void setNameTagVisible(bool); // _ZN5Actor17setNameTagVisibleEb
    virtual std::string getNameTag()const; // _ZNK5Actor10getNameTagB5cxx11Ev
    virtual void getNameTagAsHash()const; // _ZNK5Actor16getNameTagAsHashEv
    virtual std::string getFormattedNameTag()const; // _ZNK5Actor19getFormattedNameTagB5cxx11Ev
    virtual void filterFormattedNameTag(UIProfanityContext const&); // _ZN5Actor22filterFormattedNameTagERK18UIProfanityContext
    virtual void setNameTag(std::string const&); // _ZN5Actor10setNameTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getAlwaysShowNameTag()const; // _ZNK5Actor20getAlwaysShowNameTagEv
    virtual void setScoreTag(std::string const&); // _ZN5Actor11setScoreTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual std::string getScoreTag()const; // _ZNK5Actor11getScoreTagB5cxx11Ev
    virtual bool isInWater()const; // _ZNK5Actor9isInWaterEv
    virtual bool hasEnteredWater()const; // _ZNK5Actor15hasEnteredWaterEv
    virtual bool isImmersedInWater()const; // _ZNK5Actor17isImmersedInWaterEv
    virtual bool isInWaterOrRain()const; // _ZNK5Actor15isInWaterOrRainEv
    virtual bool isInLava()const; // _ZNK5Actor8isInLavaEv
//  virtual bool isUnderLiquid(MaterialType)const; //TODO: incomplete function definition // _ZNK5Actor13isUnderLiquidE12MaterialType
    virtual bool isOverWater()const; // _ZNK5Actor11isOverWaterEv
    virtual void makeStuckInBlock(float); // _ZN5Actor16makeStuckInBlockEf
    virtual void getCameraOffset()const; // _ZNK5Actor15getCameraOffsetEv
    virtual void getShadowHeightOffs(); // _ZN5Actor19getShadowHeightOffsEv
    virtual void getShadowRadius()const; // _ZNK5Actor15getShadowRadiusEv
    virtual void getHeadLookVector(float); // _ZN5Actor17getHeadLookVectorEf
    virtual bool canSeeInvisible()const; // _ZNK5Actor15canSeeInvisibleEv
    virtual bool canSee(Actor const&)const; // _ZNK5Actor6canSeeERKS_
    virtual bool canSee(Vec3 const&)const; // _ZNK5Actor6canSeeERK4Vec3
    virtual bool isSkyLit(float); // _ZN5Actor8isSkyLitEf
    virtual void getBrightness(float)const; // _ZNK5Actor13getBrightnessEf
    virtual void interactPreventDefault(); // _ZN5Actor22interactPreventDefaultEv
    virtual void playerTouch(Player &); // _ZN5Actor11playerTouchER6Player
    virtual void onAboveBubbleColumn(bool); // _ZN5Actor19onAboveBubbleColumnEb
    virtual void onInsideBubbleColumn(bool); // _ZN5Actor20onInsideBubbleColumnEb
    virtual bool isImmobile()const; // _ZNK5Actor10isImmobileEv
    virtual bool isSilent(); // _ZN5Actor8isSilentEv
    virtual bool isPickable(); // _ZN5Actor10isPickableEv
    virtual bool isFishable()const; // _ZNK5Actor10isFishableEv
    virtual bool isSleeping()const; // _ZNK5Actor10isSleepingEv
    virtual bool isShootable(); // _ZN5Actor11isShootableEv
    virtual bool isSneaking()const; // _ZNK5Actor10isSneakingEv
    virtual void setSneaking(bool); // _ZN5Actor11setSneakingEb
    virtual bool isBlocking()const; // _ZNK5Actor10isBlockingEv
    virtual bool isDamageBlocked(ActorDamageSource const&)const; // _ZNK5Actor15isDamageBlockedERK17ActorDamageSource
    virtual bool isAlive()const; // _ZNK5Actor7isAliveEv
    virtual bool isOnFire()const; // _ZNK5Actor8isOnFireEv
    virtual bool isOnHotBlock()const; // _ZNK5Actor12isOnHotBlockEv
    virtual bool isCreativeModeAllowed(); // _ZN5Actor21isCreativeModeAllowedEv
    virtual bool isSurfaceMob()const; // _ZNK5Actor12isSurfaceMobEv
    virtual bool isTargetable()const; // _ZNK5Actor12isTargetableEv
    virtual bool canAttack(Actor *, bool)const; // _ZNK5Actor9canAttackEPS_b
    virtual void setTarget(Actor *); // _ZN5Actor9setTargetEPS_
    virtual void findAttackTarget(); // _ZN5Actor16findAttackTargetEv
    virtual bool isValidTarget(Actor *)const; // _ZNK5Actor13isValidTargetEPS_
    virtual void attack(Actor &); // _ZN5Actor6attackERS_
    virtual void performRangedAttack(Actor &, float); // _ZN5Actor19performRangedAttackERS_f
    virtual void adjustDamageAmount(int &)const; // _ZNK5Actor18adjustDamageAmountERi
    virtual void getEquipmentCount()const; // _ZNK5Actor17getEquipmentCountEv
    virtual void setOwner(ActorUniqueID); // _ZN5Actor8setOwnerE13ActorUniqueID
    virtual void setSitting(bool); // _ZN5Actor10setSittingEb
    virtual void onTame(); // _ZN5Actor6onTameEv
    virtual void onFailedTame(); // _ZN5Actor12onFailedTameEv
    virtual void getInventorySize()const; // _ZNK5Actor16getInventorySizeEv
    virtual void getEquipSlots()const; // _ZNK5Actor13getEquipSlotsEv
    virtual void getChestSlots()const; // _ZNK5Actor13getChestSlotsEv
    virtual void setStanding(bool); // _ZN5Actor11setStandingEb
    virtual bool canPowerJump()const; // _ZNK5Actor12canPowerJumpEv
    virtual void setCanPowerJump(bool); // _ZN5Actor15setCanPowerJumpEb
    virtual bool isJumping()const; // _ZNK5Actor9isJumpingEv
    virtual bool isEnchanted()const; // _ZNK5Actor11isEnchantedEv
    virtual void rideJumped(); // _ZN5Actor10rideJumpedEv
    virtual void rideLanded(Vec3 const&, Vec3 const&); // _ZN5Actor10rideLandedERK4Vec3S2_
    virtual void shouldRender()const; // _ZNK5Actor12shouldRenderEv
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK5Actor16isInvulnerableToERK17ActorDamageSource
    virtual void actuallyHurt(int, ActorDamageSource const*, bool); // _ZN5Actor12actuallyHurtEiPK17ActorDamageSourceb
    virtual void animateHurt(); // _ZN5Actor11animateHurtEv
    virtual void doFireHurt(int); // _ZN5Actor10doFireHurtEi
    virtual void onLightningHit(); // _ZN5Actor14onLightningHitEv
    virtual void onBounceStarted(BlockPos const&, Block const&); // _ZN5Actor15onBounceStartedERK8BlockPosRK5Block
    virtual void feed(int); // _ZN5Actor4feedEi
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN5Actor17handleEntityEventE10ActorEventi
    virtual void getPickRadius(); // _ZN5Actor13getPickRadiusEv
    virtual void spawnAtLocation(int, int); // _ZN5Actor15spawnAtLocationEii
    virtual void spawnAtLocation(int, int, float); // _ZN5Actor15spawnAtLocationEiif
    virtual void spawnAtLocation(Block const&, int); // _ZN5Actor15spawnAtLocationERK5Blocki
    virtual void spawnAtLocation(Block const&, int, float); // _ZN5Actor15spawnAtLocationERK5Blockif
    virtual void spawnAtLocation(ItemStack const&, float); // _ZN5Actor15spawnAtLocationERK9ItemStackf
    virtual void despawn(); // _ZN5Actor7despawnEv
    virtual void killed(Actor &); // _ZN5Actor6killedERS_
    virtual void awardKillScore(Actor &, int); // _ZN5Actor14awardKillScoreERS_i
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition // _ZN5Actor8setArmorE9ArmorSlotRK9ItemStack
//  virtual void getArmor(ArmorSlot)const; //TODO: incomplete function definition // _ZNK5Actor8getArmorE9ArmorSlot
//  virtual void getArmorMaterialTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition // _ZNK5Actor26getArmorMaterialTypeInSlotE9ArmorSlot
//  virtual void getArmorMaterialTextureTypeInSlot(ArmorSlot)const; //TODO: incomplete function definition // _ZNK5Actor33getArmorMaterialTextureTypeInSlotE9ArmorSlot
//  virtual void getArmorColorInSlot(ArmorSlot, int)const; //TODO: incomplete function definition // _ZNK5Actor19getArmorColorInSlotE9ArmorSloti
//  virtual void setEquippedSlot(ArmorSlot, int, int); //TODO: incomplete function definition // _ZN5Actor15setEquippedSlotE9ArmorSlotii
//  virtual void setEquippedSlot(ArmorSlot, ItemStack const&); //TODO: incomplete function definition // _ZN5Actor15setEquippedSlotE9ArmorSlotRK9ItemStack
    virtual void getCarriedItem()const; // _ZNK5Actor14getCarriedItemEv
    virtual void setCarriedItem(ItemStack const&); // _ZN5Actor14setCarriedItemERK9ItemStack
    virtual void setOffhandSlot(ItemStack const&); // _ZN5Actor14setOffhandSlotERK9ItemStack
    virtual void getEquippedTotem()const; // _ZNK5Actor16getEquippedTotemEv
    virtual void consumeTotem(); // _ZN5Actor12consumeTotemEv
    virtual void save(CompoundTag &); // _ZN5Actor4saveER11CompoundTag
    virtual void saveWithoutId(CompoundTag &); // _ZN5Actor13saveWithoutIdER11CompoundTag
    virtual void load(CompoundTag const&, DataLoadHelper &); // _ZN5Actor4loadERK11CompoundTagR14DataLoadHelper
    virtual void loadLinks(CompoundTag const&, std::vector<ActorLink> &, DataLoadHelper &); // _ZN5Actor9loadLinksERK11CompoundTagRSt6vectorI9ActorLinkSaIS4_EER14DataLoadHelper
    virtual void getEntityTypeId()const; // _ZNK5Actor15getEntityTypeIdEv
    virtual void queryEntityRenderer()const; // _ZNK5Actor19queryEntityRendererEv
    virtual void getSourceUniqueID()const; // _ZNK5Actor17getSourceUniqueIDEv
    virtual void setOnFire(int); // _ZN5Actor9setOnFireEi
    virtual void getHandleWaterAABB()const; // _ZNK5Actor18getHandleWaterAABBEv
    virtual void handleInsidePortal(BlockPos const&); // _ZN5Actor18handleInsidePortalERK8BlockPos
    virtual void getPortalCooldown()const; // _ZNK5Actor17getPortalCooldownEv
    virtual void getPortalWaitTime()const; // _ZNK5Actor17getPortalWaitTimeEv
    virtual void getDimensionId()const; // _ZNK5Actor14getDimensionIdEv
    virtual bool canChangeDimensions()const; // _ZNK5Actor19canChangeDimensionsEv
//  virtual void changeDimension(AutomaticID<Dimension, int>, bool); //TODO: incomplete function definition // _ZN5Actor15changeDimensionE11AutomaticIDI9DimensioniEb
    virtual void changeDimension(ChangeDimensionPacket const&); // _ZN5Actor15changeDimensionERK21ChangeDimensionPacket
    virtual void getControllingPlayer()const; // _ZNK5Actor20getControllingPlayerEv
    virtual void checkFallDamage(float, bool); // _ZN5Actor15checkFallDamageEfb
    virtual void causeFallDamage(float); // _ZN5Actor15causeFallDamageEf
    virtual void handleFallDistanceOnServer(float, bool); // _ZN5Actor26handleFallDistanceOnServerEfb
//  virtual void playSynchronizedSound(LevelSoundEvent, Vec3 const&, Block const&, bool); //TODO: incomplete function definition // _ZN5Actor21playSynchronizedSoundE15LevelSoundEventRK4Vec3RK5Blockb
//  virtual void playSynchronizedSound(LevelSoundEvent, Vec3 const&, int, bool); //TODO: incomplete function definition // _ZN5Actor21playSynchronizedSoundE15LevelSoundEventRK4Vec3ib
    virtual void onSynchedDataUpdate(int); // _ZN5Actor19onSynchedDataUpdateEi
    virtual bool canAddRider(Actor &)const; // _ZNK5Actor11canAddRiderERS_
    virtual bool canBePulledIntoVehicle()const; // _ZNK5Actor22canBePulledIntoVehicleEv
    virtual void inCaravan()const; // _ZNK5Actor9inCaravanEv
    virtual bool isLeashableType(); // _ZN5Actor15isLeashableTypeEv
    virtual void tickLeash(); // _ZN5Actor9tickLeashEv
    virtual void sendMotionPacketIfNeeded(); // _ZN5Actor24sendMotionPacketIfNeededEv
    virtual bool canSynchronizeNewEntity()const; // _ZNK5Actor23canSynchronizeNewEntityEv
    virtual void stopRiding(bool, bool, bool); // _ZN5Actor10stopRidingEbbb
    virtual void startSwimming(); // _ZN5Actor13startSwimmingEv
    virtual void stopSwimming(); // _ZN5Actor12stopSwimmingEv
    virtual void buildDebugInfo(std::string &)const; // _ZNK5Actor14buildDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getCommandPermissionLevel()const; // _ZNK5Actor25getCommandPermissionLevelEv
    virtual void getMutableAttribute(Attribute const&); // _ZN5Actor19getMutableAttributeERK9Attribute
    virtual void getAttribute(Attribute const&)const; // _ZNK5Actor12getAttributeERK9Attribute
    virtual void getDeathTime()const; // _ZNK5Actor12getDeathTimeEv
    virtual void heal(int); // _ZN5Actor4healEi
    virtual bool isInvertedHealAndHarm()const; // _ZNK5Actor21isInvertedHealAndHarmEv
    virtual bool canBeAffected(int)const; // _ZNK5Actor13canBeAffectedEi
    virtual bool canBeAffected(MobEffectInstance const&)const; // _ZNK5Actor13canBeAffectedERK17MobEffectInstance
    virtual bool canBeAffectedByArrow(MobEffectInstance const&)const; // _ZNK5Actor20canBeAffectedByArrowERK17MobEffectInstance
    virtual void onEffectAdded(MobEffectInstance &); // _ZN5Actor13onEffectAddedER17MobEffectInstance
    virtual void onEffectUpdated(MobEffectInstance const&); // _ZN5Actor15onEffectUpdatedERK17MobEffectInstance
    virtual void onEffectRemoved(MobEffectInstance &); // _ZN5Actor15onEffectRemovedER17MobEffectInstance
    virtual void getAnimationComponent(); // _ZN5Actor21getAnimationComponentEv
    virtual void openContainerComponent(Player &); // _ZN5Actor22openContainerComponentER6Player
    virtual void swing(); // _ZN5Actor5swingEv
//  virtual void useItem(ItemStack &, ItemUseMethod, bool); //TODO: incomplete function definition // _ZN5Actor7useItemER9ItemStack13ItemUseMethodb
    virtual bool hasOutputSignal(unsigned char)const; // _ZNK5Actor15hasOutputSignalEh
    virtual void getOutputSignal()const; // _ZNK5Actor15getOutputSignalEv
    virtual void getDebugText(std::vector<std::string> &); // _ZN5Actor12getDebugTextERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    virtual void getMapDecorationRotation()const; // _ZNK5Actor24getMapDecorationRotationEv
    virtual void getRiderYRotation(Actor const&)const; // _ZNK5Actor17getRiderYRotationERKS_
    virtual void getYHeadRot()const; // _ZNK5Actor11getYHeadRotEv
    virtual bool isWorldBuilder(); // _ZN5Actor14isWorldBuilderEv
    virtual bool isCreative()const; // _ZNK5Actor10isCreativeEv
    virtual bool isAdventure()const; // _ZNK5Actor11isAdventureEv
    virtual void add(ItemStack &); // _ZN5Actor3addER9ItemStack
    virtual void drop(ItemStack const&, bool); // _ZN5Actor4dropERK9ItemStackb
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&); // _ZN5Actor14getInteractionER6PlayerR16ActorInteractionRK4Vec3
    virtual bool canDestroyBlock(Block const&)const; // _ZNK5Actor15canDestroyBlockERK5Block
    virtual void setAuxValue(int); // _ZN5Actor11setAuxValueEi
    virtual void setSize(float, float); // _ZN5Actor7setSizeEff
    virtual void getLifeSpan()const; // _ZNK5Actor11getLifeSpanEv
    virtual void onOrphan(); // _ZN5Actor8onOrphanEv
    virtual void wobble(); // _ZN5Actor6wobbleEv
    virtual bool wasHurt(); // _ZN5Actor7wasHurtEv
    virtual void startSpinAttack(); // _ZN5Actor15startSpinAttackEv
    virtual void stopSpinAttack(); // _ZN5Actor14stopSpinAttackEv
    virtual void setDamageNearbyMobs(bool); // _ZN5Actor19setDamageNearbyMobsEb
//  virtual void renderDebugServerState(Options const&); //TODO: incomplete function definition // _ZN5Actor22renderDebugServerStateERK7Options
    virtual void reloadLootTable(); // _ZN5Actor15reloadLootTableEv
    virtual void reloadLootTable(EquipmentTableDescription const*); // _ZN5Actor15reloadLootTableEPK25EquipmentTableDescription
    virtual void getDeletionDelayTimeSeconds()const; // _ZNK5Actor27getDeletionDelayTimeSecondsEv
    virtual void kill(); // _ZN5Actor4killEv
    virtual void die(ActorDamageSource const&); // _ZN5Actor3dieERK17ActorDamageSource
    virtual void shouldTick()const; // _ZNK5Actor10shouldTickEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN5Actor35updateEntitySpecificMolangVariablesER12RenderParams
    virtual bool canMakeStepSound()const; // _ZNK5Actor16canMakeStepSoundEv
    virtual void outOfWorld(); // _ZN5Actor10outOfWorldEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN5Actor5_hurtERK17ActorDamageSourceibb
    virtual void markHurt(); // _ZN5Actor8markHurtEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN5Actor22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN5Actor21addAdditionalSaveDataER11CompoundTag
    virtual void _playStepSound(BlockPos const&, Block const&); // _ZN5Actor14_playStepSoundERK8BlockPosRK5Block
    virtual void _playFlySound(BlockPos const&, Block const&); // _ZN5Actor13_playFlySoundERK8BlockPosRK5Block
    virtual void _makeFlySound()const; // _ZNK5Actor13_makeFlySoundEv
    virtual void checkInsideBlocks(float); // _ZN5Actor17checkInsideBlocksEf
    virtual void pushOutOfBlocks(Vec3 const&); // _ZN5Actor15pushOutOfBlocksERK4Vec3
    virtual void updateWaterState(); // _ZN5Actor16updateWaterStateEv
    virtual void doWaterSplashEffect(); // _ZN5Actor19doWaterSplashEffectEv
    virtual void spawnTrailBubbles(); // _ZN5Actor17spawnTrailBubblesEv
    virtual void updateInsideBlock(); // _ZN5Actor17updateInsideBlockEv
    virtual void getLootTable(); // _ZN5Actor12getLootTableEv
    virtual void getDefaultLootTable(); // _ZN5Actor19getDefaultLootTableEv
    virtual void _removeRider(ActorUniqueID const&, bool, bool); // _ZN5Actor12_removeRiderERK13ActorUniqueIDbb
    virtual void _onSizeUpdated(); // _ZN5Actor14_onSizeUpdatedEv
    virtual void _doAutoAttackOnTouch(Actor &); // _ZN5Actor20_doAutoAttackOnTouchERS_
    void getEntity(); // _ZN5Actor9getEntityEv
    bool hasEntity()const; // _ZNK5Actor9hasEntityEv
    Actor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5ActorC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setBaseDefinition(ActorDefinitionIdentifier const&, bool, bool); // _ZN5Actor17setBaseDefinitionERK25ActorDefinitionIdentifierbb
    Actor(Level &); // _ZN5ActorC2ER5Level
    void getStateVectorComponentNonConst(); // _ZN5Actor31getStateVectorComponentNonConstEv
    void initEntity(EntityRegistryOwned &); // _ZN5Actor10initEntityER19EntityRegistryOwned
    void removeEntity(); // _ZN5Actor12removeEntityEv
    void reload(); // _ZN5Actor6reloadEv
    bool isRegionValid()const; // _ZNK5Actor13isRegionValidEv
    void updateDescription(); // _ZN5Actor17updateDescriptionEv
    void getLevel(); // _ZN5Actor8getLevelEv
    void _setupServerAnimationComponent(); // _ZN5Actor30_setupServerAnimationComponentEv
//  bool hasCategory(ActorCategory)const; //TODO: incomplete function definition // _ZNK5Actor11hasCategoryE13ActorCategory
    void requireReload(); // _ZN5Actor13requireReloadEv
    void reloadIfRequired(); // _ZN5Actor16reloadIfRequiredEv
    void sendActorDefinitionEventTriggered(std::string const&); // _ZN5Actor33sendActorDefinitionEventTriggeredERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  bool hasType(ActorType)const; //TODO: incomplete function definition // _ZNK5Actor7hasTypeE9ActorType
    void executeEvent(std::string const&, VariantParameterList const&); // _ZN5Actor12executeEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK20VariantParameterList
    void getInitializationMethod(); // _ZN5Actor23getInitializationMethodEv
    void setLeashHolder(ActorUniqueID); // _ZN5Actor14setLeashHolderE13ActorUniqueID
    void getLeashHolder()const; // _ZNK5Actor14getLeashHolderEv
    void getStateVectorComponent()const; // _ZNK5Actor23getStateVectorComponentEv
    void _getStateVectorComponentNonConst(); // _ZN5Actor32_getStateVectorComponentNonConstEv
    void _defaultInitEquipmentDropChances(); // _ZN5Actor32_defaultInitEquipmentDropChancesEv
    void setVariant(int); // _ZN5Actor10setVariantEi
    void setMarkVariant(int); // _ZN5Actor14setMarkVariantEi
    void setSkinID(int); // _ZN5Actor9setSkinIDEi
//  void setColor(PaletteColor); //TODO: incomplete function definition // _ZN5Actor8setColorE12PaletteColor
//  void setColor2(PaletteColor); //TODO: incomplete function definition // _ZN5Actor9setColor2E12PaletteColor
//  void setStatusFlag(ActorFlags, bool); //TODO: incomplete function definition // _ZN5Actor13setStatusFlagE10ActorFlagsb
//  void getStatusFlag(ActorFlags)const; //TODO: incomplete function definition // _ZNK5Actor13getStatusFlagE10ActorFlags
    bool isBaby()const; // _ZNK5Actor6isBabyEv
    void updateBBFromDescription(); // _ZN5Actor23updateBBFromDescriptionEv
    void setCanClimb(bool); // _ZN5Actor11setCanClimbEb
    void setCanFly(bool); // _ZN5Actor9setCanFlyEb
    void setWASDControlled(bool); // _ZN5Actor17setWASDControlledEb
    void setStrengthMax(int); // _ZN5Actor14setStrengthMaxEi
    void setStrength(int); // _ZN5Actor11setStrengthEi
    void getAttributes(); // _ZN5Actor13getAttributesEv
    bool hasTags()const; // _ZNK5Actor7hasTagsEv
    void addDefinitionGroup(std::string const&); // _ZN5Actor18addDefinitionGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void removeDefinitionGroup(std::string const&); // _ZN5Actor21removeDefinitionGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasDefinitionGroup(std::string const&)const; // _ZNK5Actor18hasDefinitionGroupERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasFamily(Util::HashString const&)const; // _ZNK5Actor9hasFamilyERKN4Util10HashStringE
    bool hasTag(std::string const&)const; // _ZNK5Actor6hasTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addTag(std::string const&); // _ZN5Actor6addTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void removeTag(std::string const&); // _ZN5Actor9removeTagERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getTags()const; // _ZNK5Actor7getTagsB5cxx11Ev
    void deregisterTagsFromLevelCache(); // _ZN5Actor28deregisterTagsFromLevelCacheEv
    bool hasUniqueID()const; // _ZNK5Actor11hasUniqueIDEv
    bool hasRuntimeID()const; // _ZNK5Actor12hasRuntimeIDEv
    void getRuntimeID()const; // _ZNK5Actor12getRuntimeIDEv
    void getRideRuntimeID()const; // _ZNK5Actor16getRideRuntimeIDEv
    void getRide()const; // _ZNK5Actor7getRideEv
    void getUniqueID()const; // _ZNK5Actor11getUniqueIDEv
    void setRuntimeID(ActorRuntimeID); // _ZN5Actor12setRuntimeIDE14ActorRuntimeID
    void setUniqueID(ActorUniqueID); // _ZN5Actor11setUniqueIDE13ActorUniqueID
    void migrateUniqueID(ActorUniqueID); // _ZN5Actor15migrateUniqueIDE13ActorUniqueID
    void getEntityData(); // _ZN5Actor13getEntityDataEv
    void setPersistent(); // _ZN5Actor13setPersistentEv
    bool isInClouds()const; // _ZNK5Actor10isInCloudsEv
    bool isUnderWaterfall()const; // _ZNK5Actor16isUnderWaterfallEv
    bool canBeginOrContinueClimbingLadder(bool)const; // _ZNK5Actor32canBeginOrContinueClimbingLadderEb
    void onLadder(bool)const; // _ZNK5Actor8onLadderEb
    bool canClimb()const; // _ZNK5Actor8canClimbEv
    bool isClimbing()const; // _ZNK5Actor10isClimbingEv
    void getVariant()const; // _ZNK5Actor10getVariantEv
    void getMarkVariant()const; // _ZNK5Actor14getMarkVariantEv
    void getSkinID()const; // _ZNK5Actor9getSkinIDEv
    void getTarget()const; // _ZNK5Actor9getTargetEv
    void getLevel()const; // _ZNK5Actor8getLevelEv
    void getTargetId(); // _ZN5Actor11getTargetIdEv
    void initParams(VariantParameterList &); // _ZN5Actor10initParamsER20VariantParameterList
    void calculateAttackDamage(Actor &); // _ZN5Actor21calculateAttackDamageERS_
    bool hasEffect(MobEffect const&)const; // _ZNK5Actor9hasEffectERK9MobEffect
    void getEffect(MobEffect const&)const; // _ZNK5Actor9getEffectERK9MobEffect
    void setBlockTarget(BlockPos const&); // _ZN5Actor14setBlockTargetERK8BlockPos
    void getBlockTarget()const; // _ZNK5Actor14getBlockTargetEv
    bool isStackable()const; // _ZNK5Actor11isStackableEv
    bool isTame()const; // _ZNK5Actor6isTameEv
    bool isTrusting()const; // _ZNK5Actor10isTrustingEv
    void getOwner()const; // _ZNK5Actor8getOwnerEv
    void getOwnerId()const; // _ZNK5Actor10getOwnerIdEv
    void getPlayerOwner()const; // _ZNK5Actor14getPlayerOwnerEv
    bool isSitting()const; // _ZNK5Actor9isSittingEv
    bool isLayingDown()const; // _ZNK5Actor12isLayingDownEv
    void setLayingDown(bool); // _ZN5Actor13setLayingDownEb
    void getAABBShapeComponent()const; // _ZNK5Actor21getAABBShapeComponentEv
    void getRegion()const; // _ZNK5Actor9getRegionEv
    void getDimension()const; // _ZNK5Actor12getDimensionEv
    bool isPersistent()const; // _ZNK5Actor12isPersistentEv
    bool hasSubBBInLava()const; // _ZNK5Actor14hasSubBBInLavaEv
    void _containsSneakCollisionShapes(AABB const&); // _ZN5Actor29_containsSneakCollisionShapesERK4AABB
    void getCollidableMobNear(); // _ZN5Actor20getCollidableMobNearEv
    void testForCollidableMobs(BlockSource &, AABB const&, std::vector<AABB> &); // _ZN5Actor21testForCollidableMobsER11BlockSourceRK4AABBRSt6vectorIS2_SaIS2_EE
    void moveBBs(Vec3 const&); // _ZN5Actor7moveBBsERK4Vec3
    void getTempted()const; // _ZNK5Actor10getTemptedEv
    void testForEntityStacking(BlockSource &, AABB const&, std::vector<AABB> &); // _ZN5Actor21testForEntityStackingER11BlockSourceRK4AABBRSt6vectorIS2_SaIS2_EE
    void _getAABBShapeComponentNonConst(); // _ZN5Actor30_getAABBShapeComponentNonConstEv
    void _getBlockOnPos(); // _ZN5Actor14_getBlockOnPosEv
    void setCollidableMobNear(bool); // _ZN5Actor20setCollidableMobNearEb
    void _playMovementSound(bool); // _ZN5Actor18_playMovementSoundEb
    bool isInScaffolding()const; // _ZNK5Actor15isInScaffoldingEv
//  void playSound(LevelSoundEvent, Vec3 const&, Block const&); //TODO: incomplete function definition // _ZN5Actor9playSoundE15LevelSoundEventRK4Vec3RK5Block
//  void playSound(LevelSoundEvent, Vec3 const&, int); //TODO: incomplete function definition // _ZN5Actor9playSoundE15LevelSoundEventRK4Vec3i
    void onOnewayCollision(BlockPos); // _ZN5Actor17onOnewayCollisionE8BlockPos
    void onOnewayCollision(AABB const&); // _ZN5Actor17onOnewayCollisionERK4AABB
    void _updateOnewayCollisions(BlockSource &); // _ZN5Actor23_updateOnewayCollisionsER11BlockSource
    void checkEntityOnewayCollision(BlockSource &, BlockPos const&); // _ZN5Actor26checkEntityOnewayCollisionER11BlockSourceRK8BlockPos
    void getCollidableMob(); // _ZN5Actor16getCollidableMobEv
    void _updateOwnerChunk(); // _ZN5Actor17_updateOwnerChunkEv
    bool isInWorld()const; // _ZNK5Actor9isInWorldEv
    void moveChunks(); // _ZN5Actor10moveChunksEv
    void _refreshAABB(); // _ZN5Actor12_refreshAABBEv
    void setPosPrev(Vec3 const&); // _ZN5Actor10setPosPrevERK4Vec3
    void setPosDirectLegacy(Vec3 const&); // _ZN5Actor18setPosDirectLegacyERK4Vec3
    void setAABBDim(Vec2 const&); // _ZN5Actor10setAABBDimERK4Vec2
    void setPreviousPosRot(Vec3 const&, Vec2 const&); // _ZN5Actor17setPreviousPosRotERK4Vec3RK4Vec2
    void getLocator(HashedString const&); // _ZN5Actor10getLocatorERK12HashedString
    void getActorToWorldTransform(float, bool, Vec3 const&)const; // _ZNK5Actor24getActorToWorldTransformEfbRK4Vec3
    void getInterpolatedRotation(float)const; // _ZNK5Actor23getInterpolatedRotationEf
    void getRadius()const; // _ZNK5Actor9getRadiusEv
    void getCenter(float)const; // _ZNK5Actor9getCenterEf
    void getInterpolatedPosition(float)const; // _ZNK5Actor23getInterpolatedPositionEf
    void getViewVector(float)const; // _ZNK5Actor13getViewVectorEf
    void getViewVector2(float)const; // _ZNK5Actor14getViewVector2Ef
    void operator==(Actor &); // _ZN5ActoreqERS_
    void setEnforceRiderRotationLimit(bool); // _ZN5Actor28setEnforceRiderRotationLimitEb
    void getSpeedInMetersPerSecond()const; // _ZNK5Actor25getSpeedInMetersPerSecondEv
    void getVerticalSpeedInMetersPerSecond()const; // _ZNK5Actor33getVerticalSpeedInMetersPerSecondEv
    void enforceRiderRotationLimit()const; // _ZNK5Actor25enforceRiderRotationLimitEv
    void _damageNearbyMobs(); // _ZN5Actor17_damageNearbyMobsEv
    void getDamageNearbyMobs()const; // _ZNK5Actor19getDamageNearbyMobsEv
    void updateInBubbleColumnState(); // _ZN5Actor25updateInBubbleColumnStateEv
    bool isFireImmune()const; // _ZNK5Actor12isFireImmuneEv
    void burn(int, bool); // _ZN5Actor4burnEib
    void tick(BlockSource &); // _ZN5Actor4tickER11BlockSource
    bool isGlobal()const; // _ZNK5Actor8isGlobalEv
    void setRegion(BlockSource &); // _ZN5Actor9setRegionER11BlockSource
    bool hasTickingArea()const; // _ZNK5Actor14hasTickingAreaEv
    void refreshComponents(); // _ZN5Actor17refreshComponentsEv
    bool isControlledByLocalInstance()const; // _ZNK5Actor27isControlledByLocalInstanceEv
    bool isSwimming()const; // _ZNK5Actor10isSwimmingEv
    void _manageRiders(BlockSource &); // _ZN5Actor13_manageRidersER11BlockSource
    void updateTickingData(); // _ZN5Actor17updateTickingDataEv
    bool isRiding()const; // _ZNK5Actor8isRidingEv
    bool isRemoved()const; // _ZNK5Actor9isRemovedEv
    void getLinks()const; // _ZNK5Actor8getLinksEv
    void _sendLinkPacket(ActorLink const&)const; // _ZNK5Actor15_sendLinkPacketERK9ActorLink
    void _getTallestCollisionShape(AABB const&, AABB const&, Vec3 const&); // _ZN5Actor25_getTallestCollisionShapeERK4AABBS2_RK4Vec3
    void updateBBFromDescription(CollisionBoxDescription const&); // _ZN5Actor23updateBBFromDescriptionERK23CollisionBoxDescription
    void removeAllRiders(bool, bool); // _ZN5Actor15removeAllRidersEbb
    void positionAllRiders(); // _ZN5Actor17positionAllRidersEv
    void getRideRoot()const; // _ZNK5Actor11getRideRootEv
    void getFirstRider()const; // _ZNK5Actor13getFirstRiderEv
    bool hasRider()const; // _ZNK5Actor8hasRiderEv
    bool hasFishingHook()const; // _ZNK5Actor14hasFishingHookEv
    void fetchFishingHook(); // _ZN5Actor16fetchFishingHookEv
    void clearFishingHookID(); // _ZN5Actor18clearFishingHookIDEv
    void setFishingHookID(ActorUniqueID); // _ZN5Actor16setFishingHookIDE13ActorUniqueID
    void _tryPlaceAt(Vec3 const&); // _ZN5Actor11_tryPlaceAtERK4Vec3
    void _exitRide(Actor const&, float); // _ZN5Actor9_exitRideERKS_f
    void getRotation()const; // _ZNK5Actor11getRotationEv
    void moveTo(Vec3 const&, Vec2 const&); // _ZN5Actor6moveToERK4Vec3RK4Vec2
    void _sendDirtyActorData(); // _ZN5Actor19_sendDirtyActorDataEv
    bool isRider(ActorUniqueID const&)const; // _ZNK5Actor7isRiderERK13ActorUniqueID
    void _setAABB(AABB const&); // _ZN5Actor8_setAABBERK4AABB
    void _setAABBDim(Vec2 const&); // _ZN5Actor11_setAABBDimERK4Vec2
    void _setHeightOffset(float); // _ZN5Actor16_setHeightOffsetEf
    void _setPos(Vec3 const&); // _ZN5Actor7_setPosERK4Vec3
    void _setPosPrev(Vec3 const&); // _ZN5Actor11_setPosPrevERK4Vec3
    void setScared(bool); // _ZN5Actor9setScaredEb
    bool isScared()const; // _ZNK5Actor8isScaredEv
    void setSeatDescription(Vec3 const&, SeatDescription const&); // _ZN5Actor18setSeatDescriptionERK4Vec3RK15SeatDescription
    void buildDebugGroupInfo(std::string &)const; // _ZNK5Actor19buildDebugGroupInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void spawnDustParticles(int); // _ZN5Actor18spawnDustParticlesEi
    bool hasTeleported()const; // _ZNK5Actor13hasTeleportedEv
    void _isValidBlockToTeleportOnto(Block const&, bool)const; // _ZNK5Actor27_isValidBlockToTeleportOntoERK5Blockb
    void teleportRidersTo(Vec3 const&, int, int); // _ZN5Actor16teleportRidersToERK4Vec3ii
    void distanceTo(Actor const&)const; // _ZNK5Actor10distanceToERKS_
    void distanceTo(Vec3 const&)const; // _ZNK5Actor10distanceToERK4Vec3
    void distanceToSqr(Vec3 const&)const; // _ZNK5Actor13distanceToSqrERK4Vec3
    void distanceToSqr(Actor const&)const; // _ZNK5Actor13distanceToSqrERKS_
    void distanceSqrToBlockPosCenter(BlockPos const&)const; // _ZNK5Actor27distanceSqrToBlockPosCenterERK8BlockPos
    void hurt(ActorDamageSource const&, int, bool, bool); // _ZN5Actor4hurtERK17ActorDamageSourceibb
    void spawnTamingParticles(bool); // _ZN5Actor20spawnTamingParticlesEb
    void _randomHeartPos(); // _ZN5Actor15_randomHeartPosEv
    void _spawnPukeParticles(); // _ZN5Actor19_spawnPukeParticlesEv
    void _spawnTreasureHuntingParticles(); // _ZN5Actor30_spawnTreasureHuntingParticlesEv
    bool isInLove()const; // _ZNK5Actor8isInLoveEv
    bool isBribed()const; // _ZNK5Actor8isBribedEv
    bool canMate(Actor const&)const; // _ZNK5Actor7canMateERKS_
    bool isAngry()const; // _ZNK5Actor7isAngryEv
    bool isSheared()const; // _ZNK5Actor9isShearedEv
    bool isChested()const; // _ZNK5Actor9isChestedEv
    bool isIgnited()const; // _ZNK5Actor9isIgnitedEv
    bool hasSaddle()const; // _ZNK5Actor9hasSaddleEv
    bool isDancing()const; // _ZNK5Actor9isDancingEv
    void setDancing(bool); // _ZN5Actor10setDancingEb
    bool isCharged()const; // _ZNK5Actor9isChargedEv
    void setCharged(bool); // _ZN5Actor10setChargedEb
    bool isPowered()const; // _ZNK5Actor9isPoweredEv
    void setPowered(bool); // _ZN5Actor10setPoweredEb
    void setTempted(bool); // _ZN5Actor10setTemptedEb
    void setTradeInterest(bool); // _ZN5Actor16setTradeInterestEb
    void getTradeInterest()const; // _ZNK5Actor16getTradeInterestEv
    void setSaddle(bool); // _ZN5Actor9setSaddleEb
    void setClimbing(bool); // _ZN5Actor11setClimbingEb
    bool isWalker()const; // _ZNK5Actor8isWalkerEv
    void setWalker(bool); // _ZN5Actor9setWalkerEb
    bool isSwimmer()const; // _ZNK5Actor9isSwimmerEv
    void setSwimmer(bool); // _ZN5Actor10setSwimmerEb
    bool isDoorBreaker()const; // _ZNK5Actor13isDoorBreakerEv
    void setDoorBreaker(bool); // _ZN5Actor14setDoorBreakerEb
    bool isDoorOpener()const; // _ZNK5Actor12isDoorOpenerEv
    void setDoorOpener(bool); // _ZN5Actor13setDoorOpenerEb
    bool isBreakingObstruction()const; // _ZNK5Actor21isBreakingObstructionEv
    void setBreakingObstruction(bool); // _ZN5Actor22setBreakingObstructionEb
    void getSwimAmount(float)const; // _ZNK5Actor13getSwimAmountEf
    void getCurrentSwimAmount()const; // _ZNK5Actor20getCurrentSwimAmountEv
    bool canCurrentlySwim()const; // _ZNK5Actor16canCurrentlySwimEv
    bool canFly()const; // _ZNK5Actor6canFlyEv
    bool isMoving()const; // _ZNK5Actor8isMovingEv
    void setMoving(bool); // _ZN5Actor9setMovingEb
    bool isResting()const; // _ZNK5Actor9isRestingEv
    void setResting(bool); // _ZN5Actor10setRestingEb
    bool isStanding()const; // _ZNK5Actor10isStandingEv
    bool isWASDControlled(); // _ZN5Actor16isWASDControlledEv
    bool isDelayedAttacking()const; // _ZNK5Actor18isDelayedAttackingEv
    void setDelayedAttacking(bool); // _ZN5Actor19setDelayedAttackingEb
    void setEnchanted(bool); // _ZN5Actor12setEnchantedEb
    void getJumpDuration()const; // _ZNK5Actor15getJumpDurationEv
    void setJumpDuration(int); // _ZN5Actor15setJumpDurationEi
    void getControllingSeat(); // _ZN5Actor18getControllingSeatEv
    void setControllingSeat(int); // _ZN5Actor18setControllingSeatEi
    void getStrength()const; // _ZNK5Actor11getStrengthEv
    bool isOverScaffolding()const; // _ZNK5Actor17isOverScaffoldingEv
    void spawnDeathParticles(); // _ZN5Actor19spawnDeathParticlesEv
    void spawnEatParticles(ItemStack const&, int); // _ZN5Actor17spawnEatParticlesERK9ItemStacki
    void spawnBalloonPopParticles(); // _ZN5Actor24spawnBalloonPopParticlesEv
    void getColor()const; // _ZNK5Actor8getColorEv
    void getRegionConst()const; // _ZNK5Actor14getRegionConstEv
    void getDimensionConst()const; // _ZNK5Actor17getDimensionConstEv
    void resetRegion(); // _ZN5Actor11resetRegionEv
    void getAmbientSoundIntervalMin(float &)const; // _ZNK5Actor26getAmbientSoundIntervalMinERf
    void getAmbientSoundIntervalRange(float &)const; // _ZNK5Actor28getAmbientSoundIntervalRangeERf
    void getAmbientSoundEvent()const; // _ZNK5Actor20getAmbientSoundEventEv
    void pickUpItem(ItemActor &); // _ZN5Actor10pickUpItemER9ItemActor
    void pickUpItem(ItemActor &, int); // _ZN5Actor10pickUpItemER9ItemActori
    bool hasLevel()const; // _ZNK5Actor8hasLevelEv
    void getArmorContainer(); // _ZN5Actor17getArmorContainerEv
    void getArmorContainer()const; // _ZNK5Actor17getArmorContainerEv
    void getHandContainer(); // _ZN5Actor16getHandContainerEv
    void getHandContainer()const; // _ZNK5Actor16getHandContainerEv
    void getOffhandSlot()const; // _ZNK5Actor14getOffhandSlotEv
    bool hasPriorityAmmunition()const; // _ZNK5Actor21hasPriorityAmmunitionEv
    bool hasTotemEquipped()const; // _ZNK5Actor16hasTotemEquippedEv
    void _serializeComponents(CompoundTag &); // _ZN5Actor20_serializeComponentsER11CompoundTag
    void saveLinks()const; // _ZNK5Actor9saveLinksEv
    void saveEntityFlags(CompoundTag &); // _ZN5Actor15saveEntityFlagsER11CompoundTag
    void getColor2()const; // _ZNK5Actor9getColor2Ev
    void getStrengthMax()const; // _ZNK5Actor14getStrengthMaxEv
    bool isOrphan()const; // _ZNK5Actor8isOrphanEv
    void loadEntityFlags(CompoundTag const&, DataLoadHelper &); // _ZN5Actor15loadEntityFlagsERK11CompoundTagR14DataLoadHelper
    void _convertOldSave(CompoundTag const&); // _ZN5Actor15_convertOldSaveERK11CompoundTag
    void getActorIdentifier()const; // _ZNK5Actor18getActorIdentifierEv
    void setChanged(); // _ZN5Actor10setChangedEv
    void getEntityData()const; // _ZNK5Actor13getEntityDataEv
//  void _setActorTypeId(ActorType); //TODO: incomplete function definition // _ZN5Actor15_setActorTypeIdE9ActorType
    void getSpatialNetworkData()const; // _ZNK5Actor21getSpatialNetworkDataEv
    void getSpatialNetworkData(); // _ZN5Actor21getSpatialNetworkDataEv
    bool isDebugging()const; // _ZNK5Actor11isDebuggingEv
    void getRandomPointInAABB(Random &); // _ZN5Actor20getRandomPointInAABBER6Random
    bool isInsideBorderBlock(float)const; // _ZNK5Actor19isInsideBorderBlockEf
    bool hasPlayerRider()const; // _ZNK5Actor14hasPlayerRiderEv
    bool isRider(Actor const&)const; // _ZNK5Actor7isRiderERKS_
    void getRiderIndex(Actor &)const; // _ZNK5Actor13getRiderIndexERS_
    void getFirstAvailableSeatPos(Actor &, Vec3 &)const; // _ZNK5Actor24getFirstAvailableSeatPosERS_R4Vec3
    void getShakeTime()const; // _ZNK5Actor12getShakeTimeEv
    void setShakeTime(int); // _ZN5Actor12setShakeTimeEi
    void pullInEntity(Actor &); // _ZN5Actor12pullInEntityERS_
    bool isRiding(Actor *)const; // _ZNK5Actor8isRidingEPS_
    bool isLeashed()const; // _ZNK5Actor9isLeashedEv
    void getRenderLeashHolder(); // _ZN5Actor20getRenderLeashHolderEv
    void _initializeLeashRopeSystem(); // _ZN5Actor26_initializeLeashRopeSystemEv
    void dropLeash(bool, bool); // _ZN5Actor9dropLeashEbb
    void forEachLeashedActor(std::function<void (Actor *)>); // _ZN5Actor19forEachLeashedActorESt8functionIFvPS_EE
    void getAirSupply()const; // _ZNK5Actor12getAirSupplyEv
    void getTotalAirSupply()const; // _ZNK5Actor17getTotalAirSupplyEv
    bool isAutoSendEnabled()const; // _ZNK5Actor17isAutoSendEnabledEv
    void sendMotionToServer(); // _ZN5Actor18sendMotionToServerEv
    void setGlobal(bool); // _ZN5Actor9setGlobalEb
    bool isAutonomous()const; // _ZNK5Actor12isAutonomousEv
    void setAutonomous(bool); // _ZN5Actor13setAutonomousEb
    void getHealth()const; // _ZNK5Actor9getHealthEv
    bool isInsidePortal(); // _ZN5Actor14isInsidePortalEv
    void enableAutoSendPosRot(bool); // _ZN5Actor20enableAutoSendPosRotEb
    void getEntityTerrainInterlockData(); // _ZN5Actor29getEntityTerrainInterlockDataEv
    void _tryPlantWitherRose(); // _ZN5Actor19_tryPlantWitherRoseEv
    void getHurtColor()const; // _ZNK5Actor12getHurtColorEv
    void _setDimension(Dimension &); // _ZN5Actor13_setDimensionER9Dimension
    void buildForward()const; // _ZNK5Actor12buildForwardEv
    void getPortalEntranceAxis()const; // _ZNK5Actor21getPortalEntranceAxisEv
//  void _setNetherPortalData(AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition // _ZN5Actor20_setNetherPortalDataE11AutomaticIDI9DimensioniES2_i
    void _setLevelPtr(Level *); // _ZN5Actor12_setLevelPtrEP5Level
    void getRandom()const; // _ZNK5Actor9getRandomEv
    bool isClient()const; // _ZNK5Actor8isClientEv
//  bool hasAttributeBuff(AttributeBuffType)const; //TODO: incomplete function definition // _ZNK5Actor16hasAttributeBuffE17AttributeBuffType
    void getMaxHealth()const; // _ZNK5Actor12getMaxHealthEv
    void serializationSetHealth(int); // _ZN5Actor22serializationSetHealthEi
    void healEffects(int); // _ZN5Actor11healEffectsEi
    void addEffect(MobEffectInstance const&); // _ZN5Actor9addEffectERK17MobEffectInstance
    void removeEffect(int); // _ZN5Actor12removeEffectEi
    void removeAllEffects(); // _ZN5Actor16removeAllEffectsEv
    void removeEffectParticles(); // _ZN5Actor21removeEffectParticlesEv
    void removeEffectNoUpdate(int); // _ZN5Actor20removeEffectNoUpdateEi
    void getActiveEffectCount()const; // _ZNK5Actor20getActiveEffectCountEv
    bool hasAnyVisibleEffects()const; // _ZNK5Actor20hasAnyVisibleEffectsEv
    bool hasAnyEffects()const; // _ZNK5Actor13hasAnyEffectsEv
    void getAllEffects()const; // _ZNK5Actor13getAllEffectsEv
    void setInvisible(bool); // _ZN5Actor12setInvisibleEb
    void updateInvisibilityStatus(); // _ZN5Actor24updateInvisibilityStatusEv
    void getEconomyTradeableComponent()const; // _ZNK5Actor28getEconomyTradeableComponentEv
    void resetClientAnimations(); // _ZN5Actor21resetClientAnimationsEv
    bool hasPersistingTrade()const; // _ZNK5Actor18hasPersistingTradeEv
    void getPersistingTradeOffers(); // _ZN5Actor24getPersistingTradeOffersEv
    void getPersistingTradeRiches(); // _ZN5Actor24getPersistingTradeRichesEv
    void savePersistingTrade(std::unique_ptr<CompoundTag>, int); // _ZN5Actor19savePersistingTradeESt10unique_ptrI11CompoundTagSt14default_deleteIS1_EEi
    void removePersistingTrade(); // _ZN5Actor21removePersistingTradeEv
    bool isTickingEntity()const; // _ZNK5Actor15isTickingEntityEv
    void getTickingArea(); // _ZN5Actor14getTickingAreaEv
    void transferTickingArea(Dimension &); // _ZN5Actor19transferTickingAreaER9Dimension
    bool canOpenContainer(Player &)const; // _ZNK5Actor16canOpenContainerER6Player
    void setLastHitBB(Vec3 const&, Vec3 const&); // _ZN5Actor12setLastHitBBERK4Vec3S2_
    bool isWithinRestriction()const; // _ZNK5Actor19isWithinRestrictionEv
    bool isWithinRestriction(BlockPos const&)const; // _ZNK5Actor19isWithinRestrictionERK8BlockPos
    bool hasRestriction()const; // _ZNK5Actor14hasRestrictionEv
    void restrictTo(BlockPos const&, float); // _ZN5Actor10restrictToERK8BlockPosf
    void getRestrictCenter()const; // _ZNK5Actor17getRestrictCenterEv
    void getRestrictRadius()const; // _ZNK5Actor17getRestrictRadiusEv
    void clearRestriction(); // _ZN5Actor16clearRestrictionEv
    void dropTowards(ItemStack const&, Vec3); // _ZN5Actor11dropTowardsERK9ItemStack4Vec3
    void lovePartnerId()const; // _ZNK5Actor13lovePartnerIdEv
    void setInLove(Actor *); // _ZN5Actor9setInLoveEPS_
    void calcCenterPos()const; // _ZNK5Actor13calcCenterPosEv
    bool hasEnoughFoodToBreed(); // _ZN5Actor20hasEnoughFoodToBreedEv
    void _countFood(int); // _ZN5Actor10_countFoodEi
    bool hasExcessFood(); // _ZN5Actor13hasExcessFoodEv
    bool wantsMoreFood(); // _ZN5Actor13wantsMoreFoodEv
    void doEnchantDamageEffects(Mob &, Mob &); // _ZN5Actor22doEnchantDamageEffectsER3MobS1_
    void setChainedDamageEffects(bool); // _ZN5Actor23setChainedDamageEffectsEb
    void getChainedDamageEffects()const; // _ZNK5Actor23getChainedDamageEffectsEv
    void getTradeOffers(); // _ZN5Actor14getTradeOffersEv
    void getSlotAllowedItems(int); // _ZN5Actor19getSlotAllowedItemsEi
    void setEquipFromPacket(UpdateEquipPacket const&); // _ZN5Actor18setEquipFromPacketERK17UpdateEquipPacket
    void createUpdateEquipPacket(int); // _ZN5Actor23createUpdateEquipPacketEi
    void setOffersFromPacket(UpdateTradePacket const&); // _ZN5Actor19setOffersFromPacketERK17UpdateTradePacket
    void createUpdateTradePacket(int); // _ZN5Actor23createUpdateTradePacketEi
    void setCollidableMob(bool); // _ZN5Actor16setCollidableMobEb
    void setExperimental(bool); // _ZN5Actor15setExperimentalEb
    bool isExperimental()const; // _ZNK5Actor14isExperimentalEv
    bool wasLastHitByPlayer(); // _ZN5Actor18wasLastHitByPlayerEv
    void setTradingPlayer(Player *); // _ZN5Actor16setTradingPlayerEP6Player
    void getTradingPlayer()const; // _ZNK5Actor16getTradingPlayerEv
    bool isTrading()const; // _ZNK5Actor9isTradingEv
    void pushBackActionEventToActionQueue(ActionEvent); // _ZN5Actor32pushBackActionEventToActionQueueE11ActionEvent
    void getNextActionEvent(ActionEvent &); // _ZN5Actor18getNextActionEventER11ActionEvent
    void clearActionQueue(); // _ZN5Actor16clearActionQueueEv
    bool isActionQueueEmpty()const; // _ZNK5Actor18isActionQueueEmptyEv
    void setLimitedLife(int); // _ZN5Actor14setLimitedLifeEi
    void onChunkDiscarded(); // _ZN5Actor16onChunkDiscardedEv
    void shouldOrphan(BlockSource &); // _ZN5Actor12shouldOrphanER11BlockSource
    void setStructuralIntegrity(int); // _ZN5Actor22setStructuralIntegrityEi
    void getStructuralIntegrity()const; // _ZNK5Actor22getStructuralIntegrityEv
    void setHurtTime(int); // _ZN5Actor11setHurtTimeEi
    void getHurtTime()const; // _ZNK5Actor11getHurtTimeEv
    void setHurtDir(int); // _ZN5Actor10setHurtDirEi
    void getHurtDir()const; // _ZNK5Actor10getHurtDirEv
    bool isSafeToSleepNear()const; // _ZNK5Actor17isSafeToSleepNearEv
//  void fetchNearbyActorsSorted(Vec3 const&, ActorType); //TODO: incomplete function definition // _ZN5Actor23fetchNearbyActorsSortedERK4Vec39ActorType
    void getMolangVariables(); // _ZN5Actor18getMolangVariablesEv
    void updateMolangVariables(RenderParams &); // _ZN5Actor21updateMolangVariablesER12RenderParams
    void cacheComponentData(); // _ZN5Actor18cacheComponentDataEv
    bool isInPrecipitation()const; // _ZNK5Actor17isInPrecipitationEv
    bool isInRain()const; // _ZNK5Actor8isInRainEv
    bool isInSnow()const; // _ZNK5Actor8isInSnowEv
    bool isInThunderstorm()const; // _ZNK5Actor16isInThunderstormEv
    void _getLevelPtr()const; // _ZNK5Actor12_getLevelPtrEv
    void getEntity()const; // _ZNK5Actor9getEntityEv
    bool isInitialized(); // _ZN5Actor13isInitializedEv
};

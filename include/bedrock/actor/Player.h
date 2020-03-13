#pragma once

#include "Mob.h"
#include "unmapped/ActorUniqueID.h"
#include "../../mce/UUID.h"
#include <vector>
#include <memory>
#include <string>


class Player : Mob {

public:
    class CachedSpawnData;

    static long DEFAULT_PLAYER_HEIGHT_OFFSET;
    static long PLAYER_GLIDING_CAMERA_OFFSET;
    static long PLAYER_SWIMMING_CAMERA_OFFSET;
    static long PLAYER_SLEEPING_CAMERA_OFFSET;
    static long PLAYER_SNEAK_OFFSET;
    static long PLAYER_UP_SWIM_SPEED;
    static long PLAYER_DOWN_SWIM_SPEED;
    static long PLAYER_SWIM_FLY_MULTI;
    static long PLAYER_SWIM_BREACH_ANGLE;
    static long PLAYER_SWIM_ENTER_THRESHOLD;
    static long DEFAULT_WALK_SPEED;
    static long DEFAULT_FLY_SPEED;
    static long DEFAULT_BB_WIDTH;
    static long DEFAULT_BB_HEIGHT;
    static long GLIDE_STOP_DELAY;
    static long UNTRACKED_INTERACTION_SLOT_COUNT;
    static long INVALID_SPAWN_POS;
    static long SPAWN_CHUNK_RADIUS;
    static long SPAWN_CHUNK_LARGE_JUMP;
    static long PLAYER_ALIVE_HEIGHT;
    static long PLAYER_ALIVE_WIDTH;
    static long PLAYER_DEAD_HEIGHT;
    static long PLAYER_DEAD_WIDTH;
    static long PLAYER_SLEEPING_HEIGHT;
    static long PLAYER_SLEEPING_WIDTH;
    static long DISTANCE_TO_TRAVELLED_EVENT;
    static long DISTANCE_TO_TRANSFORM_EVENT;
    static long HUNGER;
    static long SATURATION;
    static long EXHAUSTION;
    static long LEVEL;
    static long EXPERIENCE;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN6Player15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN6Player20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~Player(); // _ZN6PlayerD2Ev
    virtual void remove(); // _ZN6Player6removeEv
//  virtual void getAttachPos(ActorLocation, float)const; //TODO: incomplete function definition // _ZNK6Player12getAttachPosE13ActorLocationf
    virtual void move(Vec3 const&); // _ZN6Player4moveERK4Vec3
    virtual void teleportTo(Vec3 const&, bool, int, int); // _ZN6Player10teleportToERK4Vec3bii
    virtual void getAddPacket(); // _ZN6Player12getAddPacketEv
    virtual void normalTick(); // _ZN6Player10normalTickEv
    virtual void rideTick(); // _ZN6Player8rideTickEv
    virtual void getRidingHeight(); // _ZN6Player15getRidingHeightEv
    virtual std::string getFormattedNameTag()const; // _ZNK6Player19getFormattedNameTagB5cxx11Ev
    virtual void getAlwaysShowNameTag()const; // _ZNK6Player20getAlwaysShowNameTagEv
    virtual void getCameraOffset()const; // _ZNK6Player15getCameraOffsetEv
    virtual bool isImmobile()const; // _ZNK6Player10isImmobileEv
    virtual bool isSleeping()const; // _ZNK6Player10isSleepingEv
    virtual bool isShootable(); // _ZN6Player11isShootableEv
    virtual bool isBlocking()const; // _ZNK6Player10isBlockingEv
    virtual bool isDamageBlocked(ActorDamageSource const&)const; // _ZNK6Player15isDamageBlockedERK17ActorDamageSource
    virtual bool isCreativeModeAllowed(); // _ZN6Player21isCreativeModeAllowedEv
    virtual void attack(Actor &); // _ZN6Player6attackER5Actor
    virtual void adjustDamageAmount(int &)const; // _ZNK6Player18adjustDamageAmountERi
    virtual bool isJumping()const; // _ZNK6Player9isJumpingEv
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK6Player16isInvulnerableToERK17ActorDamageSource
    virtual void actuallyHurt(int, ActorDamageSource const*, bool); // _ZN6Player12actuallyHurtEiPK17ActorDamageSourceb
    virtual void onBounceStarted(BlockPos const&, Block const&); // _ZN6Player15onBounceStartedERK8BlockPosRK5Block
    virtual void feed(int); // _ZN6Player4feedEi
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN6Player17handleEntityEventE10ActorEventi
    virtual void awardKillScore(Actor &, int); // _ZN6Player14awardKillScoreER5Actori
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition // _ZN6Player8setArmorE9ArmorSlotRK9ItemStack
    virtual void getCarriedItem()const; // _ZNK6Player14getCarriedItemEv
    virtual void setCarriedItem(ItemStack const&); // _ZN6Player14setCarriedItemERK9ItemStack
    virtual void setOffhandSlot(ItemStack const&); // _ZN6Player14setOffhandSlotERK9ItemStack
    virtual void getEquippedTotem()const; // _ZNK6Player16getEquippedTotemEv
    virtual void consumeTotem(); // _ZN6Player12consumeTotemEv
    virtual void getEntityTypeId()const; // _ZNK6Player15getEntityTypeIdEv
    virtual void getPortalCooldown()const; // _ZNK6Player17getPortalCooldownEv
    virtual void getPortalWaitTime()const; // _ZNK6Player17getPortalWaitTimeEv
    virtual void onSynchedDataUpdate(int); // _ZN6Player19onSynchedDataUpdateEi
    virtual bool canAddRider(Actor &)const; // _ZNK6Player11canAddRiderER5Actor
    virtual bool canBePulledIntoVehicle()const; // _ZNK6Player22canBePulledIntoVehicleEv
    virtual void sendMotionPacketIfNeeded(); // _ZN6Player24sendMotionPacketIfNeededEv
    virtual void startSwimming(); // _ZN6Player13startSwimmingEv
    virtual void stopSwimming(); // _ZN6Player12stopSwimmingEv
    virtual void getCommandPermissionLevel()const; // _ZNK6Player25getCommandPermissionLevelEv
    virtual void getAnimationComponent(); // _ZN6Player21getAnimationComponentEv
//  virtual void useItem(ItemStack &, ItemUseMethod, bool); //TODO: incomplete function definition // _ZN6Player7useItemER9ItemStack13ItemUseMethodb
    virtual void getMapDecorationRotation()const; // _ZNK6Player24getMapDecorationRotationEv
    virtual bool isWorldBuilder(); // _ZN6Player14isWorldBuilderEv
    virtual bool isCreative()const; // _ZNK6Player10isCreativeEv
    virtual bool isAdventure()const; // _ZNK6Player11isAdventureEv
    virtual void add(ItemStack &); // _ZN6Player3addER9ItemStack
    virtual void drop(ItemStack const&, bool); // _ZN6Player4dropERK9ItemStackb
    virtual void startSpinAttack(); // _ZN6Player15startSpinAttackEv
    virtual void stopSpinAttack(); // _ZN6Player14stopSpinAttackEv
    virtual void die(ActorDamageSource const&); // _ZN6Player3dieERK17ActorDamageSource
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN6Player5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN6Player22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN6Player21addAdditionalSaveDataER11CompoundTag
    virtual void _onSizeUpdated(); // _ZN6Player14_onSizeUpdatedEv
    virtual void setSleeping(bool); // _ZN6Player11setSleepingEb
    virtual void getSpeed()const; // _ZNK6Player8getSpeedEv
    virtual void setSpeed(float); // _ZN6Player8setSpeedEf
    virtual void travel(float, float, float); // _ZN6Player6travelEfff
    virtual void aiStep(); // _ZN6Player6aiStepEv
    virtual void getItemUseDuration(); // _ZN6Player18getItemUseDurationEv
    virtual void getItemUseStartupProgress(); // _ZN6Player25getItemUseStartupProgressEv
    virtual void getItemUseIntervalProgress(); // _ZN6Player26getItemUseIntervalProgressEv
    virtual void getAllHand()const; // _ZNK6Player10getAllHandEv
    virtual void getAllEquipment()const; // _ZNK6Player15getAllEquipmentEv
    virtual void sendInventory(bool); // _ZN6Player13sendInventoryEb
    virtual bool canExistWhenDisallowMob()const; // _ZNK6Player23canExistWhenDisallowMobEv
    virtual void useNewAi()const; // _ZNK6Player8useNewAiEv
    virtual void initBodyControl(); // _ZN6Player15initBodyControlEv
    virtual void jumpFromGround(); // _ZN6Player14jumpFromGroundEv
    virtual void updateAi(); // _ZN6Player8updateAiEv
    virtual void dropEquipment(ActorDamageSource const&, int); // _ZN6Player13dropEquipmentERK17ActorDamageSourcei
    virtual void dropEquipment(); // _ZN6Player13dropEquipmentEv
    virtual void updateGliding(); // _ZN6Player13updateGlidingEv
    virtual void prepareRegion(ChunkSource &); // _ZN6Player13prepareRegionER11ChunkSource
    virtual void destroyRegion(); // _ZN6Player13destroyRegionEv
    virtual void suspendRegion(); // _ZN6Player13suspendRegionEv
    virtual void _fireWillChangeDimension(); // _ZN6Player24_fireWillChangeDimensionEv
    virtual void _fireDimensionChanged(); // _ZN6Player21_fireDimensionChangedEv
//  virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN6Player26changeDimensionWithCreditsE11AutomaticIDI9DimensioniE
    virtual void tickWorld(Tick const&); // _ZN6Player9tickWorldERK4Tick
    virtual void getTickingOffsets()const; // _ZNK6Player17getTickingOffsetsEv
    virtual void moveView(); // _ZN6Player8moveViewEv
    virtual void moveSpawnView(Vec3 const&); // _ZN6Player13moveSpawnViewERK4Vec3
    virtual void setName(std::string const&); // _ZN6Player7setNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void checkMovementStats(Vec3 const&); // _ZN6Player18checkMovementStatsERK4Vec3
    virtual void getCurrentStructureFeature()const; // _ZNK6Player26getCurrentStructureFeatureEv
    virtual bool isAutoJumpEnabled()const; // _ZNK6Player17isAutoJumpEnabledEv
    virtual void respawn(); // _ZN6Player7respawnEv
    virtual void resetRot(); // _ZN6Player8resetRotEv
    virtual void resetPos(bool); // _ZN6Player8resetPosEb
    virtual bool isInTrialMode(); // _ZN6Player13isInTrialModeEv
    virtual bool hasResource(int); // _ZN6Player11hasResourceEi
    virtual void completeUsingItem(); // _ZN6Player17completeUsingItemEv
//  virtual void setPermissions(CommandPermissionLevel); //TODO: incomplete function definition // _ZN6Player14setPermissionsE22CommandPermissionLevel
    virtual void startCrafting(BlockPos const&, bool); // _ZN6Player13startCraftingERK8BlockPosb
    virtual void startStonecutting(BlockPos const&); // _ZN6Player17startStonecuttingERK8BlockPos
    virtual void startDestroying(); // _ZN6Player15startDestroyingEv
    virtual void stopDestroying(); // _ZN6Player14stopDestroyingEv
    virtual void openContainer(BlockPos const&); // _ZN6Player13openContainerERK8BlockPos
    virtual void openContainer(ActorUniqueID const&); // _ZN6Player13openContainerERK13ActorUniqueID
    virtual void openFurnace(BlockPos const&); // _ZN6Player11openFurnaceERK8BlockPos
    virtual void openBlastFurnace(BlockPos const&); // _ZN6Player16openBlastFurnaceERK8BlockPos
    virtual void openSmoker(BlockPos const&); // _ZN6Player10openSmokerERK8BlockPos
    virtual void openEnchanter(BlockPos const&); // _ZN6Player13openEnchanterERK8BlockPos
    virtual void openAnvil(BlockPos const&); // _ZN6Player9openAnvilERK8BlockPos
    virtual void openGrindstone(BlockPos const&); // _ZN6Player14openGrindstoneERK8BlockPos
    virtual void openBrewingStand(BlockPos const&); // _ZN6Player16openBrewingStandERK8BlockPos
    virtual void openHopper(BlockPos const&); // _ZN6Player10openHopperERK8BlockPos
    virtual void openHopper(ActorUniqueID const&); // _ZN6Player10openHopperERK13ActorUniqueID
    virtual void openDispenser(BlockPos const&, bool); // _ZN6Player13openDispenserERK8BlockPosb
    virtual void openBeacon(BlockPos const&); // _ZN6Player10openBeaconERK8BlockPos
    virtual void openPortfolio(); // _ZN6Player13openPortfolioEv
    virtual void openBook(int, bool, int, BlockActor *); // _ZN6Player8openBookEibiP10BlockActor
    virtual void openCommandBlock(BlockPos const&); // _ZN6Player16openCommandBlockERK8BlockPos
    virtual void openCommandBlockMinecart(ActorUniqueID const&); // _ZN6Player24openCommandBlockMinecartERK13ActorUniqueID
    virtual void openHorseInventory(ActorUniqueID const&); // _ZN6Player18openHorseInventoryERK13ActorUniqueID
    virtual void openTrading(ActorUniqueID const&, bool); // _ZN6Player11openTradingERK13ActorUniqueIDb
    virtual bool canOpenContainerScreen(); // _ZN6Player22canOpenContainerScreenEv
    virtual void openChalkboard(ChalkboardBlockActor &, bool); // _ZN6Player14openChalkboardER20ChalkboardBlockActorb
    virtual void openNpcInteractScreen(Actor &); // _ZN6Player21openNpcInteractScreenER5Actor
    virtual void openInventory(); // _ZN6Player13openInventoryEv
    virtual void openStructureEditor(BlockPos const&); // _ZN6Player19openStructureEditorERK8BlockPos
    virtual void openLabTable(BlockPos const&); // _ZN6Player12openLabTableERK8BlockPos
    virtual void openElementConstructor(BlockPos const&); // _ZN6Player22openElementConstructorERK8BlockPos
    virtual void openCompoundCreator(BlockPos const&); // _ZN6Player19openCompoundCreatorERK8BlockPos
    virtual void openMaterialReducer(BlockPos const&); // _ZN6Player19openMaterialReducerERK8BlockPos
    virtual void openLoom(BlockPos const&); // _ZN6Player8openLoomERK8BlockPos
    virtual void openStonecutter(BlockPos const&); // _ZN6Player15openStonecutterERK8BlockPos
    virtual void openCartographyTable(BlockPos const&); // _ZN6Player20openCartographyTableERK8BlockPos
    virtual void displayChatMessage(std::string const&, std::string const&); // _ZN6Player18displayChatMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void displayClientMessage(std::string const& message); // _ZN6Player20displayClientMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void displayLocalizableMessage(std::string const& message, std::vector<std::string> const& translations); // _ZN6Player25displayLocalizableMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&); // _ZN6Player24displayTextObjectMessageERK14TextObjectRootRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&); // _ZN6Player21displayWhisperMessageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_S7_
    virtual void startSleepInBed(BlockPos const&); // _ZN6Player15startSleepInBedERK8BlockPos
    virtual void stopSleepInBed(bool, bool); // _ZN6Player14stopSleepInBedEbb
    virtual bool canStartSleepInBed(); // _ZN6Player18canStartSleepInBedEv
    virtual void getSleepTimer()const; // _ZNK6Player13getSleepTimerEv
    virtual void getPreviousTickSleepTimer()const; // _ZNK6Player25getPreviousTickSleepTimerEv
    virtual void openSign(BlockPos const&); // _ZN6Player8openSignERK8BlockPos
    virtual void playEmote(std::string const&, bool); // _ZN6Player9playEmoteERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual bool isLocalPlayer()const; // _ZNK6Player13isLocalPlayerEv
    virtual bool isHostingPlayer()const; // _ZNK6Player15isHostingPlayerEv
    virtual bool isLoading()const; // _ZNK6Player9isLoadingEv
    virtual bool isPlayerInitialized()const; // _ZNK6Player19isPlayerInitializedEv
    virtual void stopLoading(); // _ZN6Player11stopLoadingEv
    virtual void registerTrackedBoss(ActorUniqueID); // _ZN6Player19registerTrackedBossE13ActorUniqueID
    virtual void unRegisterTrackedBoss(ActorUniqueID); // _ZN6Player21unRegisterTrackedBossE13ActorUniqueID
//  virtual void setPlayerGameType(GameType); //TODO: incomplete function definition // _ZN6Player17setPlayerGameTypeE8GameType
    virtual void _crit(Actor &); // _ZN6Player5_critER5Actor
    virtual void getEventing()const; // _ZNK6Player11getEventingEv
    virtual void getUserId()const; // _ZNK6Player9getUserIdEv
    virtual void sendEventPacket(EventPacket &)const; // _ZNK6Player15sendEventPacketER11EventPacket
    virtual void addExperience(int); // _ZN6Player13addExperienceEi
    virtual void addLevels(int); // _ZN6Player9addLevelsEi
    virtual void inventoryChanged(Container &, int, ItemStack const&, ItemStack const&); // _ZN6Player16inventoryChangedER9ContaineriRK9ItemStackS4_
    virtual void deleteContainerManager(); // _ZN6Player22deleteContainerManagerEv
    virtual void setFieldOfViewModifier(float); // _ZN6Player22setFieldOfViewModifierEf
//  virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&); //TODO: incomplete function definition // _ZN6Player18isPositionRelevantE11AutomaticIDI9DimensioniERK8BlockPos
    virtual bool isEntityRelevant(Actor const&); // _ZN6Player16isEntityRelevantERK5Actor
    virtual void onSuspension(); // _ZN6Player12onSuspensionEv
    virtual void onLinkedSlotsChanged(); // _ZN6Player20onLinkedSlotsChangedEv
    virtual void startCooldown(Item const*); // _ZN6Player13startCooldownEPK4Item
//  virtual void getItemCooldownLeft(CooldownType)const; //TODO: incomplete function definition // _ZNK6Player19getItemCooldownLeftE12CooldownType
//  virtual bool isItemInCooldown(CooldownType)const; //TODO: incomplete function definition // _ZNK6Player16isItemInCooldownE12CooldownType
    virtual void sendNetworkPacket(Packet &)const; // _ZNK6Player17sendNetworkPacketER6Packet
//  virtual void reportMovementTelemetry(MovementEventType); //TODO: incomplete function definition // _ZN6Player23reportMovementTelemetryE17MovementEventType
    virtual void onMovePlayerPacketNormal(Vec3 const&, Vec2 const&, float); // _ZN6Player24onMovePlayerPacketNormalERK4Vec3RK4Vec2f
    void getTransactionManager(); // _ZN6Player21getTransactionManagerEv
    std::string getDeviceId()const; // _ZNK6Player11getDeviceIdB5cxx11Ev
    bool isRespawnReady(); // _ZN6Player14isRespawnReadyEv
    void getGameMode()const; // _ZNK6Player11getGameModeEv
    void getR5DataRecoverComplete()const; // _ZNK6Player24getR5DataRecoverCompleteEv
    void setR5DataRecoverComplete(bool); // _ZN6Player24setR5DataRecoverCompleteEb
    void getPacketSender(); // _ZN6Player15getPacketSenderEv
    void getChunkSource()const; // _ZNK6Player14getChunkSourceEv
//  Player(Level &, PacketSender &, GameType, NetworkIdentifier const&, unsigned char, mce::UUID, std::string const&, std::unique_ptr<Certificate>, std::string const&, std::string const&); //TODO: incomplete function definition // _ZN6PlayerC2ER5LevelR12PacketSender8GameTypeRK17NetworkIdentifierhN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI11CertificateSt14default_deleteISJ_EESH_SH_
    void registerAttributes(); // _ZN6Player18registerAttributesEv
    void _registerElytraLoopSound(); // _ZN6Player24_registerElytraLoopSoundEv
    void resetPlayerLevel(); // _ZN6Player16resetPlayerLevelEv
    void getNewEnchantmentSeed(); // _ZN6Player21getNewEnchantmentSeedEv
    void getClientId()const; // _ZNK6Player11getClientIdEv
    void getClientSubId()const; // _ZNK6Player14getClientSubIdEv
    void getCertificate()const; // _ZNK6Player14getCertificateEv
    void getTrackedBosses(); // _ZN6Player16getTrackedBossesEv
    bool isSurvival()const; // _ZNK6Player10isSurvivalEv
    void forceAllowEating()const; // _ZNK6Player16forceAllowEatingEv
    bool isViewer()const; // _ZNK6Player8isViewerEv
    void getCapePos(float); // _ZN6Player10getCapePosEf
    bool canBeSeenOnMap()const; // _ZNK6Player14canBeSeenOnMapEv
    void setContainerManager(std::shared_ptr<IContainerManager>); // _ZN6Player19setContainerManagerESt10shared_ptrI17IContainerManagerE
    void shouldShowCredits()const; // _ZNK6Player17shouldShowCreditsEv
    void setHasSeenCredits(); // _ZN6Player17setHasSeenCreditsEv
    void setBedRespawnPosition(BlockPos const&); // _ZN6Player21setBedRespawnPositionERK8BlockPos
    void setDefaultHeadHeight(); // _ZN6Player20setDefaultHeadHeightEv
    void setAllPlayersSleeping(); // _ZN6Player21setAllPlayersSleepingEv
    bool isSleepingLongEnough()const; // _ZNK6Player20isSleepingLongEnoughEv
    void getSleepRotation()const; // _ZNK6Player16getSleepRotationEv
    void checkBed(BlockSource *, Vec3 const*); // _ZN6Player8checkBedEP11BlockSourcePK4Vec3
    void getPlatform()const; // _ZNK6Player11getPlatformEv
    std::string getPlatformOnlineId()const; // _ZNK6Player19getPlatformOnlineIdB5cxx11Ev
//  void setPlatform(BuildPlatform); //TODO: incomplete function definition // _ZN6Player11setPlatformE13BuildPlatform
    void setPlatformOnlineId(std::string const&); // _ZN6Player19setPlatformOnlineIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void onMobStatusChanged(ActorUniqueID); // _ZN6Player18onMobStatusChangedE13ActorUniqueID
    void getChunkRadius()const; // _ZNK6Player14getChunkRadiusEv
    bool isEmoting()const; // _ZNK6Player9isEmotingEv
    void getUnderwaterLightLevel()const; // _ZNK6Player23getUnderwaterLightLevelEv
    void setUnderwaterLightLevel(float); // _ZN6Player23setUnderwaterLightLevelEf
    void setUsedPotion(bool); // _ZN6Player13setUsedPotionEb
    void getUsedPotion(); // _ZN6Player13getUsedPotionEv
    void _tickCooldowns(); // _ZN6Player14_tickCooldownsEv
    void setEmotingStatus(bool); // _ZN6Player16setEmotingStatusEb
    void _applyExhaustion(Vec3 const&); // _ZN6Player16_applyExhaustionERK4Vec3
    void moveCape(); // _ZN6Player8moveCapeEv
    void getSupplies()const; // _ZNK6Player11getSuppliesEv
    void stopUsingItem(); // _ZN6Player13stopUsingItemEv
    void _updateInteraction(); // _ZN6Player18_updateInteractionEv
    bool isBouncing()const; // _ZNK6Player10isBouncingEv
    void _setBlockedUsingShieldTimeStamp(long); // _ZN6Player31_setBlockedUsingShieldTimeStampEl
    void _setBlockedUsingDamagedShieldTimeStamp(long); // _ZN6Player38_setBlockedUsingDamagedShieldTimeStampEl
    void resetOnScreenAnimationTicks(); // _ZN6Player27resetOnScreenAnimationTicksEv
    void getPlayerIndex()const; // _ZNK6Player14getPlayerIndexEv
    void setPlayerIndex(int); // _ZN6Player14setPlayerIndexEi
    bool isUsingItem()const; // _ZNK6Player11isUsingItemEv
    void getItemInUse()const; // _ZNK6Player12getItemInUseEv
    void startUsingItem(ItemStack const&, int); // _ZN6Player14startUsingItemERK9ItemStacki
    void releaseUsingItem(); // _ZN6Player16releaseUsingItemEv
    void setSelectedItem(ItemStack const&); // _ZN6Player15setSelectedItemERK9ItemStack
    void getSelectedItem()const; // _ZNK6Player15getSelectedItemEv
    void getTicksUsingItem(); // _ZN6Player17getTicksUsingItemEv
    void getCurrentActiveShield()const; // _ZNK6Player22getCurrentActiveShieldEv
    void stopGliding(); // _ZN6Player11stopGlidingEv
    void causeFoodExhaustion(float); // _ZN6Player19causeFoodExhaustionEf
    void handleJumpEffects(); // _ZN6Player17handleJumpEffectsEv
    void _touch(Actor &); // _ZN6Player6_touchER5Actor
    void updateTrackedBosses(); // _ZN6Player19updateTrackedBossesEv
    void updateInventoryTransactions(); // _ZN6Player27updateInventoryTransactionsEv
    bool isInCreativeMode()const; // _ZNK6Player16isInCreativeModeEv
//  bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition // _ZNK6Player13canUseAbilityE14AbilitiesIndex
    void getScore(); // _ZN6Player8getScoreEv
    void dropCursorSelectedItem(); // _ZN6Player22dropCursorSelectedItemEv
    void getDestroySpeed(Block const&)const; // _ZNK6Player15getDestroySpeedERK5Block
    void _getItemDestroySpeed(Block const&)const; // _ZNK6Player20_getItemDestroySpeedERK5Block
    void getDestroyProgress(Block const&)const; // _ZNK6Player18getDestroyProgressERK5Block
    bool canDestroy(Block const&)const; // _ZNK6Player10canDestroyERK5Block
    bool isOperator()const; // _ZNK6Player10isOperatorEv
    void getPlayerPermissionLevel()const; // _ZNK6Player24getPlayerPermissionLevelEv
    bool canUseOperatorBlocks()const; // _ZNK6Player20canUseOperatorBlocksEv
    void getXpNeededForNextLevel()const; // _ZNK6Player23getXpNeededForNextLevelEv
//  void setPlayerUIItem(PlayerUISlot, ItemStack const&); //TODO: incomplete function definition // _ZN6Player15setPlayerUIItemE12PlayerUISlotRK9ItemStack
    void getPlayerLevel()const; // _ZNK6Player14getPlayerLevelEv
    void getLevelProgress()const; // _ZNK6Player16getLevelProgressEv
    void getAgentID()const; // _ZNK6Player10getAgentIDEv
    void take(Actor &, int, int); // _ZN6Player4takeER5Actorii
    bool isHurt(); // _ZN6Player6isHurtEv
    bool isHungry()const; // _ZNK6Player8isHungryEv
    bool isSpawned()const; // _ZNK6Player9isSpawnedEv
    void _blockUsingShield(ActorDamageSource const&, float); // _ZN6Player17_blockUsingShieldERK17ActorDamageSourcef
//  void setLastHurtBy(ActorType); //TODO: incomplete function definition // _ZN6Player13setLastHurtByE9ActorType
    void interact(Actor &, Vec3 const&); // _ZN6Player8interactER5ActorRK4Vec3
    std::string getItemInteractText(Item const&)const; // _ZNK6Player19getItemInteractTextB5cxx11ERK4Item
    void recheckSpawnPosition(); // _ZN6Player20recheckSpawnPositionEv
    void setBlockRespawnUntilClientMessage(bool); // _ZN6Player33setBlockRespawnUntilClientMessageEb
    void updateTeleportDestPos(); // _ZN6Player21updateTeleportDestPosEv
    bool hasRespawnPosition()const; // _ZNK6Player18hasRespawnPositionEv
    bool isForcedRespawn()const; // _ZNK6Player15isForcedRespawnEv
    void getBlockRespawnUntilClientMessage()const; // _ZNK6Player33getBlockRespawnUntilClientMessageEv
    void _chooseSpawnArea(); // _ZN6Player16_chooseSpawnAreaEv
    void _isChunkSourceLoaded(Vec3 const&, BlockSource const&)const; // _ZNK6Player20_isChunkSourceLoadedERK4Vec3RK11BlockSource
    void _chooseSpawnPositionWithinArea(); // _ZN6Player30_chooseSpawnPositionWithinAreaEv
    void setTeleportDestination(Vec3 const&); // _ZN6Player22setTeleportDestinationERK4Vec3
    void _validateSpawnPositionAvailability(Vec3 const&, BlockSource *, Vec3 const*)const; // _ZNK6Player34_validateSpawnPositionAvailabilityERK4Vec3P11BlockSourcePS1_
    void _isDangerousSpawn(BlockSource &, AABB const&)const; // _ZNK6Player17_isDangerousSpawnER11BlockSourceRK4AABB
    void _fixup4JBedSpawnPosition(Vec3 &); // _ZN6Player24_fixup4JBedSpawnPositionER4Vec3
    void clearRespawnPosition(); // _ZN6Player20clearRespawnPositionEv
    void checkAndfixSpawnPosition(Vec3 &, std::vector<BlockSource *>, bool, bool, bool, bool)const; // _ZNK6Player24checkAndfixSpawnPositionER4Vec3St6vectorIP11BlockSourceSaIS4_EEbbbb
    void _findFallbackSpawnPosition(Vec3 &, std::vector<BlockSource *>, unsigned int); // _ZN6Player26_findFallbackSpawnPositionER4Vec3St6vectorIP11BlockSourceSaIS4_EEj
    void _ensureSafeSpawnPosition(Vec3 &); // _ZN6Player24_ensureSafeSpawnPositionER4Vec3
    void _setStartedBlockingTimeStamp(long); // _ZN6Player28_setStartedBlockingTimeStampEl
//  void handleMovePlayerPacket(Player::PositionMode, Vec3 const&, Vec2 const&, float, int, int); //TODO: incomplete function definition // _ZN6Player22handleMovePlayerPacketENS_12PositionModeERK4Vec3RK4Vec2fii
    std::string getPlayerSessionId()const; // _ZNK6Player18getPlayerSessionIdB5cxx11Ev
//  void setRespawnDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN6Player19setRespawnDimensionE11AutomaticIDI9DimensioniE
    bool isHiddenFrom(Mob &)const; // _ZNK6Player12isHiddenFromER3Mob
    void getSpawnPosition(); // _ZN6Player16getSpawnPositionEv
    void setRespawnPosition(BlockPos const&, bool); // _ZN6Player18setRespawnPositionERK8BlockPosb
//  void setRespawnDimensionId(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN6Player21setRespawnDimensionIdE11AutomaticIDI9DimensioniE
    void crackBlock(BlockPos const&, unsigned char); // _ZN6Player10crackBlockERK8BlockPosh
    void _addLevels(int); // _ZN6Player10_addLevelsEi
    void getSelectedItemSlot()const; // _ZNK6Player19getSelectedItemSlotEv
    void getAttackDamage(); // _ZN6Player15getAttackDamageEv
    bool hasOwnedChunkSource()const; // _ZNK6Player19hasOwnedChunkSourceEv
    void tickArmor(); // _ZN6Player9tickArmorEv
    bool isInRaid()const; // _ZNK6Player8isInRaidEv
    void getStandingPositionOnBlock(BlockPos const&); // _ZN6Player26getStandingPositionOnBlockERK8BlockPos
    void setChunkRadius(unsigned int); // _ZN6Player14setChunkRadiusEj
    void getPlayerGameType()const; // _ZNK6Player17getPlayerGameTypeEv
    void resetToDefaultGameMode(); // _ZN6Player22resetToDefaultGameModeEv
    void getUnmappedPlayerGameType(); // _ZN6Player25getUnmappedPlayerGameTypeEv
    void eat(ItemStack const&); // _ZN6Player3eatERK9ItemStack
    void eat(int, float); // _ZN6Player3eatEif
    void getEnchantmentSeed()const; // _ZNK6Player18getEnchantmentSeedEv
    void setEnchantmentSeed(int); // _ZN6Player18setEnchantmentSeedEi
    void spawnExperienceOrb(Vec3 const&, int); // _ZN6Player18spawnExperienceOrbERK4Vec3i
//  void _sendShieldUpdatePacket(ShieldItem const*, ItemStack const&, ItemStack const&, ContainerID, int); //TODO: incomplete function definition // _ZN6Player23_sendShieldUpdatePacketEPK10ShieldItemRK9ItemStackS5_11ContainerIDi
    void getXpNeededForLevelRange(int, int)const; // _ZNK6Player24getXpNeededForLevelRangeEii
    bool hasOpenContainer()const; // _ZNK6Player16hasOpenContainerEv
    void getContainerManager(); // _ZN6Player19getContainerManagerEv
    void getHudContainerManagerModel(); // _ZN6Player27getHudContainerManagerModelEv
    void getLuck(); // _ZN6Player7getLuckEv
//  void getPlayerUIItem(PlayerUISlot); //TODO: incomplete function definition // _ZN6Player15getPlayerUIItemE12PlayerUISlot
    void setCursorSelectedItem(ItemStack const&); // _ZN6Player21setCursorSelectedItemERK9ItemStack
    void setCursorSelectedItemGroup(ItemGroup const&); // _ZN6Player26setCursorSelectedItemGroupERK9ItemGroup
    void startGliding(); // _ZN6Player12startGlidingEv
    void setAgent(Agent *); // _ZN6Player8setAgentEP5Agent
    void getAgent()const; // _ZNK6Player8getAgentEv
    void getAgentIfAllowed(bool, ActorUniqueID)const; // _ZNK6Player17getAgentIfAllowedEb13ActorUniqueID
    bool isChatAllowed(); // _ZN6Player13isChatAllowedEv
//  void fireDimensionChangedEvent(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN6Player25fireDimensionChangedEventE11AutomaticIDI9DimensioniE
    void queueOnScreenTextureAnimation(unsigned int); // _ZN6Player29queueOnScreenTextureAnimationEj
    void getCurrentOnScreenAnimationEffectID()const; // _ZNK6Player35getCurrentOnScreenAnimationEffectIDEv
    void getOnScreenAnimationTicks()const; // _ZNK6Player25getOnScreenAnimationTicksEv
    void getBlockingStartTimeStamp()const; // _ZNK6Player25getBlockingStartTimeStampEv
    void getBlockedUsingShieldTimeStamp()const; // _ZNK6Player30getBlockedUsingShieldTimeStampEv
    void getBlockedUsingDamagedShieldTimeStamp()const; // _ZNK6Player37getBlockedUsingDamagedShieldTimeStampEv
    void getDirection()const; // _ZNK6Player12getDirectionEv
//  void addListener(PlayerListener &); //TODO: incomplete function definition // _ZN6Player11addListenerER14PlayerListener
//  void removeListener(PlayerListener &); //TODO: incomplete function definition // _ZN6Player14removeListenerER14PlayerListener
    void getMapIndex(); // _ZN6Player11getMapIndexEv
    void setMapIndex(int); // _ZN6Player11setMapIndexEi
    std::string getInteractText()const; // _ZNK6Player15getInteractTextB5cxx11Ev
    void getLastHurtBy()const; // _ZNK6Player13getLastHurtByEv
    void clearCreativeItemList(); // _ZN6Player21clearCreativeItemListEv
    void updateCreativeItemList(std::vector<ItemInstance> const&); // _ZN6Player22updateCreativeItemListERKSt6vectorI12ItemInstanceSaIS1_EE
    void getCreativeItemList()const; // _ZNK6Player19getCreativeItemListEv
    void getFilteredCreativeItemList()const; // _ZNK6Player27getFilteredCreativeItemListEv
    void _handleCarriedItemInteractText(); // _ZN6Player30_handleCarriedItemInteractTextEv
    void checkNeedAutoJump(float, float); // _ZN6Player17checkNeedAutoJumpEff
    void getSkinAdjustments()const; // _ZNK6Player18getSkinAdjustmentsEv
    void updateSkin(SerializedSkin const&, int); // _ZN6Player10updateSkinERK14SerializedSkini
    void getSkin()const; // _ZNK6Player7getSkinEv
    void getSkin(); // _ZN6Player7getSkinEv
    void onResetBAI(int); // _ZN6Player10onResetBAIEi
    void useUIAnimationComponent(bool); // _ZN6Player23useUIAnimationComponentEb
    bool isDestroyingBlock(); // _ZN6Player17isDestroyingBlockEv
    void getRespawnDimensionId()const; // _ZNK6Player21getRespawnDimensionIdEv
    void getCursorSelectedItem()const; // _ZNK6Player21getCursorSelectedItemEv
    void getEnderChestContainer(); // _ZN6Player22getEnderChestContainerEv
    void getPlayerUIContainer(); // _ZN6Player20getPlayerUIContainerEv
    void getVRMoveAdjustAngle()const; // _ZNK6Player20getVRMoveAdjustAngleEv
    void getAutoJumping()const; // _ZNK6Player14getAutoJumpingEv
    void getCursorSelectedItemGroup()const; // _ZNK6Player26getCursorSelectedItemGroupEv
    class CachedSpawnData {

    public:
        CachedSpawnData(); // _ZN6Player15CachedSpawnDataC2Ev
    };
};

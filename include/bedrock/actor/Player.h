#pragma once

#include "../level/chunksource/ChunkSource"
#include "../container/manager/IContainerManager"
#include "../network/packet/EventPacket"
#include "../util/Vec3"
#include "unmapped/ActorUniqueID"
#include "../item/ItemStack"
#include "../util/Tick"
#include "../../unmapped/Dimension"
#include "../../unmapped/NetworkIdentifier"
#include "../nbt/CompoundTag"
#include "../item/ShieldItem"
#include "../block/actor/BlockActor"
#include "../../mce/UUID"
#include "../util/Vec2"
#include "../../unmapped/Certificate"
#include "../text/TextObjectRoot"
#include "../network/packet/sender/PacketSender"
#include "../container/Container"
#include "../block/unmapped/BlockSource"
#include "../level/Level"
#include "../item/Item"
#include "../item/unmapped/ItemGroup"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../item/ItemInstance"
#include "../util/AABB"
#include "damagesource/ActorDamageSource"
#include "../network/packet/Packet"
#include "../../unmapped/VariantParameterList"
#include "../../unmapped/SerializedSkin"
#include "../block/actor/ChalkboardBlockActor"
#include "../../unmapped/DataLoadHelper"


class Player : Mob {

public:
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

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual Player::~Player()
    virtual void remove();
    virtual void getAttachPos(ActorLocation, float)const;
    virtual void move(Vec3 const&);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void getAddPacket();
    virtual void normalTick();
    virtual void rideTick();
    virtual void getRidingHeight();
    virtual void getFormattedNameTag()const;
    virtual void getAlwaysShowNameTag()const;
    virtual void getCameraOffset()const;
    virtual bool isImmobile()const;
    virtual bool isSleeping()const;
    virtual bool isShootable();
    virtual bool isBlocking()const;
    virtual bool isDamageBlocked(ActorDamageSource const&)const;
    virtual bool isCreativeModeAllowed();
    virtual void attack(Actor &);
    virtual void adjustDamageAmount(int &)const;
    virtual bool isJumping()const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void feed(int);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void awardKillScore(Actor &, int);
    virtual void setArmor(ArmorSlot, ItemStack const&);
    virtual void getCarriedItem()const;
    virtual void setCarriedItem(ItemStack const&);
    virtual void setOffhandSlot(ItemStack const&);
    virtual void getEquippedTotem()const;
    virtual void consumeTotem();
    virtual void getEntityTypeId()const;
    virtual void getPortalCooldown()const;
    virtual void getPortalWaitTime()const;
    virtual void onSynchedDataUpdate(int);
    virtual bool canAddRider(Actor &)const;
    virtual bool canBePulledIntoVehicle()const;
    virtual void sendMotionPacketIfNeeded();
    virtual void startSwimming();
    virtual void stopSwimming();
    virtual void getCommandPermissionLevel()const;
    virtual void getAnimationComponent();
    virtual void useItem(ItemStack &, ItemUseMethod, bool);
    virtual void getMapDecorationRotation()const;
    virtual bool isWorldBuilder();
    virtual bool isCreative()const;
    virtual bool isAdventure()const;
    virtual void add(ItemStack &);
    virtual void drop(ItemStack const&, bool);
    virtual void startSpinAttack();
    virtual void stopSpinAttack();
    virtual void die(ActorDamageSource const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void setSleeping(bool);
    virtual void getSpeed()const;
    virtual void setSpeed(float);
    virtual void travel(float, float, float);
    virtual void aiStep();
    virtual void getItemUseDuration();
    virtual void getItemUseStartupProgress();
    virtual void getItemUseIntervalProgress();
    virtual void getAllHand()const;
    virtual void getAllEquipment()const;
    virtual void sendInventory(bool);
    virtual bool canExistWhenDisallowMob()const;
    virtual void useNewAi()const;
    virtual void initBodyControl();
    virtual void jumpFromGround();
    virtual void updateAi();
    virtual void dropEquipment(ActorDamageSource const&, int);
    virtual void dropEquipment();
    virtual void updateGliding();
    virtual void prepareRegion(ChunkSource &);
    virtual void destroyRegion();
    virtual void suspendRegion();
    virtual void _fireWillChangeDimension();
    virtual void _fireDimensionChanged();
    virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>);
    virtual void tickWorld(Tick const&);
    virtual void getTickingOffsets()const;
    virtual void moveView();
    virtual void moveSpawnView(Vec3 const&);
    virtual void setName(std::string const&);
    virtual void checkMovementStats(Vec3 const&);
    virtual void getCurrentStructureFeature()const;
    virtual bool isAutoJumpEnabled()const;
    virtual void respawn();
    virtual void resetRot();
    virtual void resetPos(bool);
    virtual bool isInTrialMode();
    virtual bool hasResource(int);
    virtual void completeUsingItem();
    virtual void setPermissions(CommandPermissionLevel);
    virtual void startCrafting(BlockPos const&, bool);
    virtual void startStonecutting(BlockPos const&);
    virtual void startDestroying();
    virtual void stopDestroying();
    virtual void openContainer(BlockPos const&);
    virtual void openContainer(ActorUniqueID const&);
    virtual void openFurnace(BlockPos const&);
    virtual void openBlastFurnace(BlockPos const&);
    virtual void openSmoker(BlockPos const&);
    virtual void openEnchanter(BlockPos const&);
    virtual void openAnvil(BlockPos const&);
    virtual void openGrindstone(BlockPos const&);
    virtual void openBrewingStand(BlockPos const&);
    virtual void openHopper(BlockPos const&);
    virtual void openHopper(ActorUniqueID const&);
    virtual void openDispenser(BlockPos const&, bool);
    virtual void openBeacon(BlockPos const&);
    virtual void openPortfolio();
    virtual void openBook(int, bool, int, BlockActor *);
    virtual void openCommandBlock(BlockPos const&);
    virtual void openCommandBlockMinecart(ActorUniqueID const&);
    virtual void openHorseInventory(ActorUniqueID const&);
    virtual void openTrading(ActorUniqueID const&, bool);
    virtual bool canOpenContainerScreen();
    virtual void openChalkboard(ChalkboardBlockActor &, bool);
    virtual void openNpcInteractScreen(Actor &);
    virtual void openInventory();
    virtual void openStructureEditor(BlockPos const&);
    virtual void openLabTable(BlockPos const&);
    virtual void openElementConstructor(BlockPos const&);
    virtual void openCompoundCreator(BlockPos const&);
    virtual void openMaterialReducer(BlockPos const&);
    virtual void openLoom(BlockPos const&);
    virtual void openStonecutter(BlockPos const&);
    virtual void openCartographyTable(BlockPos const&);
    virtual void displayChatMessage(std::string const&, std::string const&);
    virtual void displayClientMessage(std::string const& message);
    virtual void displayLocalizableMessage(std::string const& message, std::vector<std::string, std::allocator<std::string>> const& translations);
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void startSleepInBed(BlockPos const&);
    virtual void stopSleepInBed(bool, bool);
    virtual bool canStartSleepInBed();
    virtual void getSleepTimer()const;
    virtual void getPreviousTickSleepTimer()const;
    virtual void openSign(BlockPos const&);
    virtual void playEmote(std::string const&, bool);
    virtual bool isLocalPlayer()const;
    virtual bool isHostingPlayer()const;
    virtual bool isLoading()const;
    virtual bool isPlayerInitialized()const;
    virtual void stopLoading();
    virtual void registerTrackedBoss(ActorUniqueID);
    virtual void unRegisterTrackedBoss(ActorUniqueID);
    virtual void setPlayerGameType(GameType);
    virtual void _crit(Actor &);
    virtual void getEventing()const;
    virtual void getUserId()const;
    virtual void sendEventPacket(EventPacket &)const;
    virtual void addExperience(int);
    virtual void addLevels(int);
    virtual void inventoryChanged(Container &, int, ItemStack const&, ItemStack const&);
    virtual void deleteContainerManager();
    virtual void setFieldOfViewModifier(float);
    virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&);
    virtual bool isEntityRelevant(Actor const&);
    virtual void onSuspension();
    virtual void onLinkedSlotsChanged();
    virtual void startCooldown(Item const*);
    virtual void getItemCooldownLeft(CooldownType)const;
    virtual bool isItemInCooldown(CooldownType)const;
    virtual void sendNetworkPacket(Packet &)const;
    virtual void reportMovementTelemetry(MovementEventType);
    virtual void onMovePlayerPacketNormal(Vec3 const&, Vec2 const&, float);

    void getTransactionManager();
    bool isRespawnReady();
    void getGameMode()const;
    void getR5DataRecoverComplete()const;
    void setR5DataRecoverComplete(bool);
    void getPacketSender();
    void getChunkSource()const;
    Player(Level &, PacketSender &, GameType, NetworkIdentifier const&, unsigned char, mce::UUID, std::string const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>, std::string const&, std::string const&);
    void registerAttributes();
    void _registerElytraLoopSound();
    void resetPlayerLevel();
    void getNewEnchantmentSeed();
    void getClientId()const;
    void getClientSubId()const;
    void getCertificate()const;
    void getTrackedBosses();
    bool isSurvival()const;
    void forceAllowEating()const;
    bool isViewer()const;
    void getCapePos(float);
    bool canBeSeenOnMap()const;
    void setContainerManager(std::shared_ptr<IContainerManager>);
    void shouldShowCredits()const;
    void setHasSeenCredits();
    void setBedRespawnPosition(BlockPos const&);
    void setDefaultHeadHeight();
    void setAllPlayersSleeping();
    bool isSleepingLongEnough()const;
    void getSleepRotation()const;
    void checkBed(BlockSource *, Vec3 const*);
    void getPlatform()const;
    void setPlatform(BuildPlatform);
    void setPlatformOnlineId(std::string const&);
    void onMobStatusChanged(ActorUniqueID);
    void getChunkRadius()const;
    bool isEmoting()const;
    void getUnderwaterLightLevel()const;
    void setUnderwaterLightLevel(float);
    void setUsedPotion(bool);
    void getUsedPotion();
    void _tickCooldowns();
    void setEmotingStatus(bool);
    void _applyExhaustion(Vec3 const&);
    void moveCape();
    void getSupplies()const;
    void stopUsingItem();
    void _updateInteraction();
    bool isBouncing()const;
    void _setBlockedUsingShieldTimeStamp(long);
    void _setBlockedUsingDamagedShieldTimeStamp(long);
    void resetOnScreenAnimationTicks();
    void getPlayerIndex()const;
    void setPlayerIndex(int);
    bool isUsingItem()const;
    void getItemInUse()const;
    void startUsingItem(ItemStack const&, int);
    void releaseUsingItem();
    void setSelectedItem(ItemStack const&);
    void getSelectedItem()const;
    void getTicksUsingItem();
    void getCurrentActiveShield()const;
    void stopGliding();
    void causeFoodExhaustion(float);
    void handleJumpEffects();
    void _touch(Actor &);
    void updateTrackedBosses();
    void updateInventoryTransactions();
    bool isInCreativeMode()const;
    bool canUseAbility(AbilitiesIndex)const;
    void getScore();
    void dropCursorSelectedItem();
    void getDestroySpeed(Block const&)const;
    void _getItemDestroySpeed(Block const&)const;
    void getDestroyProgress(Block const&)const;
    bool canDestroy(Block const&)const;
    bool isOperator()const;
    void getPlayerPermissionLevel()const;
    bool canUseOperatorBlocks()const;
    void getXpNeededForNextLevel()const;
    void setPlayerUIItem(PlayerUISlot, ItemStack const&);
    void getPlayerLevel()const;
    void getLevelProgress()const;
    void getAgentID()const;
    void take(Actor &, int, int);
    bool isHurt();
    bool isHungry()const;
    bool isSpawned()const;
    void _blockUsingShield(ActorDamageSource const&, float);
    void setLastHurtBy(ActorType);
    void interact(Actor &, Vec3 const&);
    void recheckSpawnPosition();
    void setBlockRespawnUntilClientMessage(bool);
    void updateTeleportDestPos();
    bool hasRespawnPosition()const;
    bool isForcedRespawn()const;
    void getBlockRespawnUntilClientMessage()const;
    void _chooseSpawnArea();
    void _isChunkSourceLoaded(Vec3 const&, BlockSource const&)const;
    void _chooseSpawnPositionWithinArea();
    void setTeleportDestination(Vec3 const&);
    void _validateSpawnPositionAvailability(Vec3 const&, BlockSource *, Vec3 const*)const;
    void _isDangerousSpawn(BlockSource &, AABB const&)const;
    void _fixup4JBedSpawnPosition(Vec3 &);
    void clearRespawnPosition();
    void checkAndfixSpawnPosition(Vec3 &, std::vector<BlockSource *, std::allocator<BlockSource *>>, bool, bool, bool, bool)const;
    void _findFallbackSpawnPosition(Vec3 &, std::vector<BlockSource *, std::allocator<BlockSource *>>, unsigned int);
    void _ensureSafeSpawnPosition(Vec3 &);
    void _setStartedBlockingTimeStamp(long);
    void handleMovePlayerPacket(Player::PositionMode, Vec3 const&, Vec2 const&, float, int, int);
    void setRespawnDimension(AutomaticID<Dimension, int>);
    bool isHiddenFrom(Mob &)const;
    void getSpawnPosition();
    void setRespawnPosition(BlockPos const&, bool);
    void setRespawnDimensionId(AutomaticID<Dimension, int>);
    void crackBlock(BlockPos const&, unsigned char);
    void _addLevels(int);
    void getSelectedItemSlot()const;
    void getAttackDamage();
    bool hasOwnedChunkSource()const;
    void tickArmor();
    bool isInRaid()const;
    void getStandingPositionOnBlock(BlockPos const&);
    void setChunkRadius(unsigned int);
    void getPlayerGameType()const;
    void resetToDefaultGameMode();
    void getUnmappedPlayerGameType();
    void eat(ItemStack const&);
    void eat(int, float);
    void getEnchantmentSeed()const;
    void setEnchantmentSeed(int);
    void spawnExperienceOrb(Vec3 const&, int);
    void _sendShieldUpdatePacket(ShieldItem const*, ItemStack const&, ItemStack const&, ContainerID, int);
    void getXpNeededForLevelRange(int, int)const;
    bool hasOpenContainer()const;
    void getContainerManager();
    void getHudContainerManagerModel();
    void getLuck();
    void getPlayerUIItem(PlayerUISlot);
    void setCursorSelectedItem(ItemStack const&);
    void setCursorSelectedItemGroup(ItemGroup const&);
    void startGliding();
    void setAgent(Agent *);
    void getAgent()const;
    void getAgentIfAllowed(bool, ActorUniqueID)const;
    bool isChatAllowed();
    void fireDimensionChangedEvent(AutomaticID<Dimension, int>);
    void queueOnScreenTextureAnimation(unsigned int);
    void getCurrentOnScreenAnimationEffectID()const;
    void getOnScreenAnimationTicks()const;
    void getBlockingStartTimeStamp()const;
    void getBlockedUsingShieldTimeStamp()const;
    void getBlockedUsingDamagedShieldTimeStamp()const;
    void getDirection()const;
    void addListener(PlayerListener &);
    void removeListener(PlayerListener &);
    void getMapIndex();
    void setMapIndex(int);
    void getLastHurtBy()const;
    void clearCreativeItemList();
    void updateCreativeItemList(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
    void getCreativeItemList()const;
    void getFilteredCreativeItemList()const;
    void _handleCarriedItemInteractText();
    void checkNeedAutoJump(float, float);
    void getSkinAdjustments()const;
    void updateSkin(SerializedSkin const&, int);
    void getSkin()const;
    void getSkin();
    void onResetBAI(int);
    void useUIAnimationComponent(bool);
    bool isDestroyingBlock();
    void getRespawnDimensionId()const;
    void getCursorSelectedItem()const;
    void getEnderChestContainer();
    void getPlayerUIContainer();
    void getVRMoveAdjustAngle()const;
    void getAutoJumping()const;
    void getCursorSelectedItemGroup()const;
};

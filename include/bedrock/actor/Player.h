#pragma once

#include "../../mce/UUID.h"
#include "unmapped/ActorUniqueID.h"
#include <memory>
#include <vector>
#include <string>
#include "Mob.h"


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

    virtual void getPortalWaitTime()const;
    virtual void normalTick();
    virtual void updateGliding();
    virtual void getUserId()const;
    virtual void getCommandPermissionLevel()const;
    virtual void dropEquipment();
    virtual void dropEquipment(ActorDamageSource const&, int);
    virtual void openGrindstone(BlockPos const&);
    virtual void openLoom(BlockPos const&);
    virtual void travel(float, float, float);
    virtual void stopDestroying();
    virtual void getEventing()const;
    virtual void openFurnace(BlockPos const&);
    virtual void awardKillScore(Actor &, int);
    virtual void jumpFromGround();
    virtual void startCrafting(BlockPos const&, bool);
    virtual void getTickingOffsets()const;
    virtual void getAddPacket();
    virtual void _fireWillChangeDimension();
    virtual bool isInTrialMode();
    virtual void openCommandBlockMinecart(ActorUniqueID const&);
    virtual void getEntityTypeId()const;
    virtual void startSleepInBed(BlockPos const&);
    virtual void respawn();
    virtual void onLinkedSlotsChanged();
    virtual void getAnimationComponent();
//  virtual void setPlayerGameType(GameType); //TODO: incomplete function definition
//  virtual bool isItemInCooldown(CooldownType)const; //TODO: incomplete function definition
    virtual void getItemUseStartupProgress();
    virtual void moveView();
    virtual void openNpcInteractScreen(Actor &);
    virtual void teleportTo(Vec3 const&, bool, int, int);
//  virtual void useItem(ItemStack &, ItemUseMethod, bool); //TODO: incomplete function definition
    virtual void openLabTable(BlockPos const&);
    virtual void displayClientMessage(std::string const& message);
    virtual void openChalkboard(ChalkboardBlockActor &, bool);
    virtual void addLevels(int);
    virtual void openPortfolio();
    virtual void startSwimming();
    virtual void addExperience(int);
    virtual bool canBePulledIntoVehicle()const;
    virtual void sendInventory(bool);
    virtual void checkMovementStats(Vec3 const&);
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    virtual void getMapDecorationRotation()const;
    virtual void getSleepTimer()const;
    virtual void getCameraOffset()const;
    virtual bool isAdventure()const;
    virtual void displayChatMessage(std::string const&, std::string const&);
    virtual void startDestroying();
//  virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual bool canStartSleepInBed();
    virtual void sendNetworkPacket(Packet &)const;
    virtual void tickWorld(Tick const&);
    virtual void onSuspension();
    virtual bool isSleeping()const;
//  virtual void getAttachPos(ActorLocation, float)const; //TODO: incomplete function definition
    virtual void getAlwaysShowNameTag()const;
    virtual bool isShootable();
    virtual void openHorseInventory(ActorUniqueID const&);
    virtual void die(ActorDamageSource const&);
    virtual void getPortalCooldown()const;
//  virtual void setPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    virtual void startSpinAttack();
    virtual void resetRot();
    virtual void _fireDimensionChanged();
    virtual bool isHostingPlayer()const;
    virtual void openEnchanter(BlockPos const&);
    virtual void setSpeed(float);
    virtual void stopSleepInBed(bool, bool);
    virtual void rideTick();
    virtual bool isJumping()const;
    virtual void openSmoker(BlockPos const&);
    virtual void suspendRegion();
    virtual bool isPlayerInitialized()const;
    virtual void setOffhandSlot(ItemStack const&);
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual void openTrading(ActorUniqueID const&, bool);
    virtual bool isWorldBuilder();
    virtual void moveSpawnView(Vec3 const&);
    virtual void getEquippedTotem()const;
    virtual bool isCreativeModeAllowed();
    virtual bool canExistWhenDisallowMob()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void attack(Actor &);
    virtual void openContainer(BlockPos const&);
    virtual void openBrewingStand(BlockPos const&);
    virtual void openStructureEditor(BlockPos const&);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void completeUsingItem();
    virtual void openHopper(BlockPos const&);
    virtual bool isBlocking()const;
    virtual bool canAddRider(Actor &)const;
    virtual bool isLocalPlayer()const;
    virtual void openHopper(ActorUniqueID const&);
    virtual void openElementConstructor(BlockPos const&);
//  virtual void getItemCooldownLeft(CooldownType)const; //TODO: incomplete function definition
    virtual void remove();
    virtual void adjustDamageAmount(int &)const;
    virtual void consumeTotem();
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void displayLocalizableMessage(std::string const& message, std::vector<std::string> const& translations);
    virtual void onSynchedDataUpdate(int);
    virtual void openCommandBlock(BlockPos const&);
    virtual void feed(int);
    virtual void setCarriedItem(ItemStack const&);
    virtual void onMovePlayerPacketNormal(Vec3 const&, Vec2 const&, float);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getCurrentStructureFeature()const;
    virtual void stopSwimming();
    virtual void _onSizeUpdated();
    virtual void setName(std::string const&);
    virtual void openStonecutter(BlockPos const&);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void openBook(int, bool, int, BlockActor *);
    virtual void initBodyControl();
    virtual void resetPos(bool);
    virtual bool isAutoJumpEnabled()const;
    virtual void getItemUseDuration();
    virtual void getAllHand()const;
//  virtual void reportMovementTelemetry(MovementEventType); //TODO: incomplete function definition
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void sendMotionPacketIfNeeded();
    virtual void inventoryChanged(Container &, int, ItemStack const&, ItemStack const&);
    virtual void openAnvil(BlockPos const&);
    virtual void openDispenser(BlockPos const&, bool);
    virtual void openBeacon(BlockPos const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getPreviousTickSleepTimer()const;
    virtual void unRegisterTrackedBoss(ActorUniqueID);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void updateAi();
    virtual bool isEntityRelevant(Actor const&);
    virtual void openInventory();
    virtual void deleteContainerManager();
    virtual void stopSpinAttack();
    virtual void _crit(Actor &);
    virtual void getItemUseIntervalProgress();
    virtual bool isCreative()const;
    virtual void getRidingHeight();
    virtual void registerTrackedBoss(ActorUniqueID);
    virtual void move(Vec3 const&);
    virtual void getSpeed()const;
    virtual bool hasResource(int);
    virtual void stopLoading();
    virtual void openCartographyTable(BlockPos const&);
    virtual void openSign(BlockPos const&);
//  virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&); //TODO: incomplete function definition
    virtual bool isImmobile()const;
    virtual void useNewAi()const;
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void setFieldOfViewModifier(float);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void openBlastFurnace(BlockPos const&);
    virtual void add(ItemStack &);
    virtual bool isDamageBlocked(ActorDamageSource const&)const;
    virtual bool isLoading()const;
    ~Player();
    virtual std::string getFormattedNameTag()const;
    virtual void getCarriedItem()const;
    virtual void openCompoundCreator(BlockPos const&);
    virtual void playEmote(std::string const&, bool);
    virtual void setSleeping(bool);
    virtual void getAllEquipment()const;
    virtual void startCooldown(Item const*);
    virtual bool canOpenContainerScreen();
    virtual void startStonecutting(BlockPos const&);
    virtual void prepareRegion(ChunkSource &);
    virtual void drop(ItemStack const&, bool);
    virtual void sendEventPacket(EventPacket &)const;
    virtual void openContainer(ActorUniqueID const&);
    virtual void aiStep();
    virtual void destroyRegion();
    virtual void openMaterialReducer(BlockPos const&);
    void _validateSpawnPositionAvailability(Vec3 const&, BlockSource *, Vec3 const*)const;
    void getSelectedItemSlot()const;
    void handleJumpEffects();
    void getCertificate()const;
//  bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
//  void setPlayerUIItem(PlayerUISlot, ItemStack const&); //TODO: incomplete function definition
//  void handleMovePlayerPacket(Player::PositionMode, Vec3 const&, Vec2 const&, float, int, int); //TODO: incomplete function definition
    void getContainerManager();
//  void setLastHurtBy(ActorType); //TODO: incomplete function definition
    void getLastHurtBy()const;
    void getCursorSelectedItem()const;
    void getPacketSender();
    void startUsingItem(ItemStack const&, int);
    void getClientSubId()const;
    void _findFallbackSpawnPosition(Vec3 &, std::vector<BlockSource *>, unsigned int);
    void setContainerManager(std::shared_ptr<IContainerManager>);
    void getSleepRotation()const;
    void getScore();
    bool canUseOperatorBlocks()const;
    void _getItemDestroySpeed(Block const&)const;
    void setSelectedItem(ItemStack const&);
//  void setRespawnDimensionId(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void getOnScreenAnimationTicks()const;
    bool isRespawnReady();
    void getXpNeededForNextLevel()const;
//  void setPlatform(BuildPlatform); //TODO: incomplete function definition
    void getCurrentOnScreenAnimationEffectID()const;
    void getPlayerIndex()const;
    void _setStartedBlockingTimeStamp(long);
    void onMobStatusChanged(ActorUniqueID);
    void getSelectedItem()const;
    void _fixup4JBedSpawnPosition(Vec3 &);
    void crackBlock(BlockPos const&, unsigned char);
    void getNewEnchantmentSeed();
    void _updateInteraction();
    void dropCursorSelectedItem();
    void getCreativeItemList()const;
    void setMapIndex(int);
    bool canBeSeenOnMap()const;
    void getTransactionManager();
    void setPlatformOnlineId(std::string const&);
    void getChunkRadius()const;
    void resetOnScreenAnimationTicks();
    void causeFoodExhaustion(float);
    void _setBlockedUsingDamagedShieldTimeStamp(long);
    void startGliding();
    void setUsedPotion(bool);
    void setRespawnPosition(BlockPos const&, bool);
    void setCursorSelectedItem(ItemStack const&);
    void _handleCarriedItemInteractText();
    void getUnderwaterLightLevel()const;
    bool isChatAllowed();
    void getChunkSource()const;
    void getFilteredCreativeItemList()const;
    std::string getItemInteractText(Item const&)const;
    bool isSleepingLongEnough()const;
    void setTeleportDestination(Vec3 const&);
    void getGameMode()const;
    void eat(ItemStack const&);
    void getPlatform()const;
    bool isUsingItem()const;
    void take(Actor &, int, int);
    std::string getPlayerSessionId()const;
    void setAllPlayersSleeping();
    void getBlockRespawnUntilClientMessage()const;
    void _applyExhaustion(Vec3 const&);
    void getVRMoveAdjustAngle()const;
    void getClientId()const;
    void getAgent()const;
    bool isSurvival()const;
    void getAgentID()const;
    void resetToDefaultGameMode();
    void setPlayerIndex(int);
    void getSkin();
    bool isHiddenFrom(Mob &)const;
    bool isEmoting()const;
//  void removeListener(PlayerListener &); //TODO: incomplete function definition
    void _isDangerousSpawn(BlockSource &, AABB const&)const;
    void registerAttributes();
    void getAgentIfAllowed(bool, ActorUniqueID)const;
    void getBlockingStartTimeStamp()const;
    void setCursorSelectedItemGroup(ItemGroup const&);
//  void addListener(PlayerListener &); //TODO: incomplete function definition
    bool isInRaid()const;
//  void getPlayerUIItem(PlayerUISlot); //TODO: incomplete function definition
    void eat(int, float);
    void tickArmor();
    void moveCape();
    bool hasOpenContainer()const;
    std::string getDeviceId()const;
    void getItemInUse()const;
    void getSupplies()const;
    void getCurrentActiveShield()const;
    void getBlockedUsingShieldTimeStamp()const;
    void useUIAnimationComponent(bool);
    void setEmotingStatus(bool);
    void resetPlayerLevel();
    void getSkin()const;
    void setR5DataRecoverComplete(bool);
    void stopUsingItem();
    void checkNeedAutoJump(float, float);
    void getUsedPotion();
    std::string getPlatformOnlineId()const;
    void getEnderChestContainer();
    bool isOperator()const;
    void getDirection()const;
    void _registerElytraLoopSound();
    void setChunkRadius(unsigned int);
    void forceAllowEating()const;
    bool isInCreativeMode()const;
    void getSpawnPosition();
    void getLuck();
    void getTicksUsingItem();
    bool hasOwnedChunkSource()const;
    std::string getInteractText()const;
    void getDestroyProgress(Block const&)const;
    void setEnchantmentSeed(int);
    void updateTrackedBosses();
    void setAgent(Agent *);
    void stopGliding();
    void _setBlockedUsingShieldTimeStamp(long);
    void _ensureSafeSpawnPosition(Vec3 &);
    void getEnchantmentSeed()const;
    bool hasRespawnPosition()const;
    void clearCreativeItemList();
    void checkAndfixSpawnPosition(Vec3 &, std::vector<BlockSource *>, bool, bool, bool, bool)const;
//  void setRespawnDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void getTrackedBosses();
    void getRespawnDimensionId()const;
    void shouldShowCredits()const;
    void setHasSeenCredits();
    void recheckSpawnPosition();
    void getDestroySpeed(Block const&)const;
    bool isHurt();
    void _chooseSpawnPositionWithinArea();
    void checkBed(BlockSource *, Vec3 const*);
    void getCursorSelectedItemGroup()const;
//  void _sendShieldUpdatePacket(ShieldItem const*, ItemStack const&, ItemStack const&, ContainerID, int); //TODO: incomplete function definition
    void setUnderwaterLightLevel(float);
    bool isHungry()const;
    void setBlockRespawnUntilClientMessage(bool);
    void getHudContainerManagerModel();
    void interact(Actor &, Vec3 const&);
    void getAutoJumping()const;
    bool isDestroyingBlock();
    void onResetBAI(int);
    bool isViewer()const;
    void _addLevels(int);
    void getPlayerGameType()const;
    void getXpNeededForLevelRange(int, int)const;
    void updateTeleportDestPos();
//  Player(Level &, PacketSender &, GameType, NetworkIdentifier const&, unsigned char, mce::UUID, std::string const&, std::unique_ptr<Certificate>, std::string const&, std::string const&); //TODO: incomplete function definition
    void getMapIndex();
    void getBlockedUsingDamagedShieldTimeStamp()const;
    void updateInventoryTransactions();
    void spawnExperienceOrb(Vec3 const&, int);
    void setBedRespawnPosition(BlockPos const&);
    void getPlayerLevel()const;
    void getPlayerUIContainer();
    void updateSkin(SerializedSkin const&, int);
    void _isChunkSourceLoaded(Vec3 const&, BlockSource const&)const;
    void getCapePos(float);
    void _tickCooldowns();
    bool isBouncing()const;
    void _chooseSpawnArea();
    void releaseUsingItem();
    void getUnmappedPlayerGameType();
    void getAttackDamage();
    void setDefaultHeadHeight();
    void getStandingPositionOnBlock(BlockPos const&);
    bool isForcedRespawn()const;
    void getLevelProgress()const;
    void getPlayerPermissionLevel()const;
    bool isSpawned()const;
    void _touch(Actor &);
    void queueOnScreenTextureAnimation(unsigned int);
    void clearRespawnPosition();
    void getR5DataRecoverComplete()const;
    bool canDestroy(Block const&)const;
    void getSkinAdjustments()const;
    void _blockUsingShield(ActorDamageSource const&, float);
//  void fireDimensionChangedEvent(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void updateCreativeItemList(std::vector<ItemInstance> const&);
    class CachedSpawnData {

    public:
        CachedSpawnData();
    };
};

#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "Agent.h"
#include "../block/actor/ChalkboardBlockActor.h"
#include <memory>
#include "../../unmapped/SerializedSkin.h"
#include "Mob.h"
#include "../../unmapped/DataLoadHelper.h"
#include "../level/chunksource/ChunkSource.h"
#include "../item/ItemInstance.h"
#include "../util/AABB.h"
#include "../util/Vec2.h"
#include <string>
#include "../container/manager/IContainerManager.h"
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include "../level/Level.h"
#include "../network/packet/EventPacket.h"
#include "../block/unmapped/BlockSource.h"
#include "../item/ItemStack.h"
#include "../block/actor/BlockActor.h"
#include "../../mce/UUID.h"
#include "../util/Vec3.h"
#include <vector>
#include "../item/unmapped/ItemGroup.h"
#include "../item/Item.h"
#include "../item/ShieldItem.h"
#include "Actor.h"
#include "../../unmapped/Dimension.h"
#include "../util/Tick.h"
#include "unmapped/ActorUniqueID.h"
#include "../nbt/CompoundTag.h"
#include "../network/packet/Packet.h"
#include "../text/TextObjectRoot.h"
#include "../network/packet/sender/PacketSender.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/Certificate.h"
#include "../../unmapped/NetworkIdentifier.h"


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

    virtual void completeUsingItem();
    virtual void openContainer(ActorUniqueID const&);
    virtual void startSpinAttack();
    virtual bool isCreative()const;
    virtual void startSleepInBed(BlockPos const&);
//  virtual void setArmor(ArmorSlot, ItemStack const&); //TODO: incomplete function definition
    virtual void attack(Actor &);
    virtual void playEmote(std::string const&, bool);
    virtual void getEntityTypeId()const;
//  virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&); //TODO: incomplete function definition
    virtual void drop(ItemStack const&, bool);
    virtual void awardKillScore(Actor &, int);
    virtual bool isShootable();
    virtual void getMapDecorationRotation()const;
    virtual void _onSizeUpdated();
    virtual void getItemUseStartupProgress();
    virtual void useNewAi()const;
    virtual void travel(float, float, float);
    virtual void move(Vec3 const&);
    virtual std::string getFormattedNameTag()const;
    virtual void openStructureEditor(BlockPos const&);
    virtual void dropEquipment(ActorDamageSource const&, int);
    virtual void startCrafting(BlockPos const&, bool);
    virtual void stopDestroying();
    virtual void _fireDimensionChanged();
    virtual void moveView();
//  virtual void reportMovementTelemetry(MovementEventType); //TODO: incomplete function definition
    virtual bool isAutoJumpEnabled()const;
    virtual bool isLoading()const;
    virtual void unRegisterTrackedBoss(ActorUniqueID);
//  virtual bool isItemInCooldown(CooldownType)const; //TODO: incomplete function definition
    virtual void startSwimming();
    virtual void stopSpinAttack();
    virtual void dropEquipment();
    virtual void onSynchedDataUpdate(int);
    virtual void openBeacon(BlockPos const&);
    virtual void openCommandBlock(BlockPos const&);
    virtual bool isPlayerInitialized()const;
    virtual void getTickingOffsets()const;
    virtual void inventoryChanged(Container &, int, ItemStack const&, ItemStack const&);
    virtual void displayClientMessage(std::string const& message);
    virtual bool isWorldBuilder();
    virtual void sendInventory(bool);
    virtual bool isSleeping()const;
    virtual void openFurnace(BlockPos const&);
    virtual void addLevels(int);
    virtual void openCompoundCreator(BlockPos const&);
    virtual void openCartographyTable(BlockPos const&);
    virtual bool isEntityRelevant(Actor const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void remove();
    virtual void openInventory();
    virtual void getEventing()const;
    virtual void openAnvil(BlockPos const&);
    virtual void checkMovementStats(Vec3 const&);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void updateGliding();
    virtual void displayLocalizableMessage(std::string const& message, std::vector<std::string> const& translations);
    virtual void getSleepTimer()const;
    virtual bool isJumping()const;
    virtual void openSmoker(BlockPos const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getPortalWaitTime()const;
    virtual void aiStep();
    virtual void openCommandBlockMinecart(ActorUniqueID const&);
//  virtual void useItem(ItemStack &, ItemUseMethod, bool); //TODO: incomplete function definition
    virtual void sendEventPacket(EventPacket &)const;
    virtual bool isAdventure()const;
    virtual void jumpFromGround();
    virtual void setCarriedItem(ItemStack const&);
    virtual void updateAi();
    virtual void add(ItemStack &);
    virtual void getAllHand()const;
    virtual void tickWorld(Tick const&);
    virtual void getEquippedTotem()const;
    virtual bool canOpenContainerScreen();
    ~Player();
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void sendMotionPacketIfNeeded();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getCameraOffset()const;
    virtual bool isCreativeModeAllowed();
    virtual void openTrading(ActorUniqueID const&, bool);
    virtual void _crit(Actor &);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void die(ActorDamageSource const&);
    virtual bool canAddRider(Actor &)const;
    virtual void openLoom(BlockPos const&);
    virtual void getCarriedItem()const;
    virtual bool isDamageBlocked(ActorDamageSource const&)const;
    virtual void getCommandPermissionLevel()const;
    virtual void rideTick();
    virtual void openGrindstone(BlockPos const&);
    virtual void stopLoading();
    virtual void startStonecutting(BlockPos const&);
    virtual void openEnchanter(BlockPos const&);
    virtual void _fireWillChangeDimension();
    virtual void addExperience(int);
    virtual bool isInTrialMode();
    virtual void getCurrentStructureFeature()const;
    virtual void openBrewingStand(BlockPos const&);
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    virtual void getItemUseIntervalProgress();
    virtual void suspendRegion();
    virtual void getAllEquipment()const;
    virtual bool isBlocking()const;
    virtual void openHorseInventory(ActorUniqueID const&);
    virtual void onSuspension();
//  virtual void getItemCooldownLeft(CooldownType)const; //TODO: incomplete function definition
    virtual void stopSleepInBed(bool, bool);
    virtual void sendNetworkPacket(Packet &)const;
    virtual bool isImmobile()const;
    virtual void adjustDamageAmount(int &)const;
    virtual void prepareRegion(ChunkSource &);
//  virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    virtual bool hasResource(int);
    virtual void openDispenser(BlockPos const&, bool);
    virtual void normalTick();
    virtual void stopSwimming();
    virtual void setName(std::string const&);
    virtual bool canStartSleepInBed();
    virtual bool isLocalPlayer()const;
    virtual void deleteContainerManager();
    virtual void openContainer(BlockPos const&);
    virtual void openElementConstructor(BlockPos const&);
    virtual void getAddPacket();
    virtual void openChalkboard(ChalkboardBlockActor &, bool);
    virtual void resetPos(bool);
    virtual void feed(int);
    virtual void respawn();
    virtual void resetRot();
    virtual void openBook(int, bool, int, BlockActor *);
    virtual void openLabTable(BlockPos const&);
    virtual void openHopper(BlockPos const&);
    virtual void openStonecutter(BlockPos const&);
    virtual void getPreviousTickSleepTimer()const;
    virtual bool isHostingPlayer()const;
    virtual void getRidingHeight();
    virtual void consumeTotem();
//  virtual void setPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    virtual void onMovePlayerPacketNormal(Vec3 const&, Vec2 const&, float);
    virtual void setSpeed(float);
    virtual void getSpeed()const;
    virtual void initBodyControl();
    virtual void setFieldOfViewModifier(float);
    virtual void getUserId()const;
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual void startCooldown(Item const*);
//  virtual void getAttachPos(ActorLocation, float)const; //TODO: incomplete function definition
    virtual void getAlwaysShowNameTag()const;
    virtual void destroyRegion();
    virtual void openNpcInteractScreen(Actor &);
    virtual void openBlastFurnace(BlockPos const&);
    virtual void openPortfolio();
    virtual void getItemUseDuration();
    virtual void setOffhandSlot(ItemStack const&);
    virtual void openMaterialReducer(BlockPos const&);
    virtual void registerTrackedBoss(ActorUniqueID);
    virtual void getAnimationComponent();
    virtual bool canExistWhenDisallowMob()const;
//  virtual void setPlayerGameType(GameType); //TODO: incomplete function definition
    virtual void onLinkedSlotsChanged();
    virtual void setSleeping(bool);
    virtual void openSign(BlockPos const&);
    virtual void openHopper(ActorUniqueID const&);
    virtual bool canBePulledIntoVehicle()const;
    virtual void moveSpawnView(Vec3 const&);
    virtual void getPortalCooldown()const;
    virtual void startDestroying();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void displayChatMessage(std::string const&, std::string const&);
    void getGameMode()const;
    void setContainerManager(std::shared_ptr<IContainerManager>);
    void interact(Actor &, Vec3 const&);
    void handleJumpEffects();
    void getSkinAdjustments()const;
    void setSelectedItem(ItemStack const&);
    void queueOnScreenTextureAnimation(unsigned int);
    void getContainerManager();
    void getLuck();
//  void fireDimensionChangedEvent(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void startUsingItem(ItemStack const&, int);
    std::string getDeviceId()const;
    void _fixup4JBedSpawnPosition(Vec3 &);
    void getBlockRespawnUntilClientMessage()const;
    void getSkin()const;
    bool canDestroy(Block const&)const;
    void getChunkRadius()const;
    bool isOperator()const;
    void dropCursorSelectedItem();
    void take(Actor &, int, int);
//  void setPlatform(BuildPlatform); //TODO: incomplete function definition
    bool hasRespawnPosition()const;
    bool isUsingItem()const;
    void getPlayerLevel()const;
    void setR5DataRecoverComplete(bool);
    void _findFallbackSpawnPosition(Vec3 &, std::vector<BlockSource *>, unsigned int);
    void getCertificate()const;
    bool isHiddenFrom(Mob &)const;
    bool isRespawnReady();
    bool isForcedRespawn()const;
    void getBlockingStartTimeStamp()const;
    void checkNeedAutoJump(float, float);
    void getEnchantmentSeed()const;
    void getRespawnDimensionId()const;
    void shouldShowCredits()const;
//  void getPlayerUIItem(PlayerUISlot); //TODO: incomplete function definition
    void getAgent()const;
    void checkBed(BlockSource *, Vec3 const*);
    void setEnchantmentSeed(int);
    bool isSpawned()const;
    void getPlayerGameType()const;
    void startGliding();
    void stopUsingItem();
    bool hasOwnedChunkSource()const;
    void _blockUsingShield(ActorDamageSource const&, float);
//  void removeListener(PlayerListener &); //TODO: incomplete function definition
    void setUsedPotion(bool);
    void getTrackedBosses();
    void getXpNeededForNextLevel()const;
    void setBedRespawnPosition(BlockPos const&);
    void setCursorSelectedItem(ItemStack const&);
    void getNewEnchantmentSeed();
    void getAttackDamage();
    void _setBlockedUsingDamagedShieldTimeStamp(long);
    void setTeleportDestination(Vec3 const&);
    void _validateSpawnPositionAvailability(Vec3 const&, BlockSource *, Vec3 const*)const;
    void setPlatformOnlineId(std::string const&);
    void _handleCarriedItemInteractText();
    void setBlockRespawnUntilClientMessage(bool);
    void _setBlockedUsingShieldTimeStamp(long);
    void getCurrentActiveShield()const;
    void setMapIndex(int);
    bool isHungry()const;
    void getStandingPositionOnBlock(BlockPos const&);
    void getPlatform()const;
//  void addListener(PlayerListener &); //TODO: incomplete function definition
    void getSpawnPosition();
    void getSkin();
//  bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    void getPlayerUIContainer();
    void _getItemDestroySpeed(Block const&)const;
    bool isEmoting()const;
    void clearCreativeItemList();
//  void setRespawnDimensionId(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void setDefaultHeadHeight();
    void updateTeleportDestPos();
    void getClientId()const;
    void spawnExperienceOrb(Vec3 const&, int);
    void getEnderChestContainer();
    void _isChunkSourceLoaded(Vec3 const&, BlockSource const&)const;
    std::string getInteractText()const;
    void checkAndfixSpawnPosition(Vec3 &, std::vector<BlockSource *>, bool, bool, bool, bool)const;
    void _touch(Actor &);
    std::string getItemInteractText(Item const&)const;
    std::string getPlatformOnlineId()const;
    void _chooseSpawnArea();
    void setAllPlayersSleeping();
    void getHudContainerManagerModel();
    void getClientSubId()const;
    void setRespawnPosition(BlockPos const&, bool);
    void getLastHurtBy()const;
    void _chooseSpawnPositionWithinArea();
    void _addLevels(int);
    void getDirection()const;
    void clearRespawnPosition();
    void getCurrentOnScreenAnimationEffectID()const;
    bool isInRaid()const;
    bool isInCreativeMode()const;
    void stopGliding();
//  Player(Level &, PacketSender &, GameType, NetworkIdentifier const&, unsigned char, mce::UUID, std::string const&, std::unique_ptr<Certificate>, std::string const&, std::string const&); //TODO: incomplete function definition
    void _updateInteraction();
    void setHasSeenCredits();
//  void handleMovePlayerPacket(Player::PositionMode, Vec3 const&, Vec2 const&, float, int, int); //TODO: incomplete function definition
    void getR5DataRecoverComplete()const;
    void getOnScreenAnimationTicks()const;
    void getAutoJumping()const;
    void setPlayerIndex(int);
    void getUsedPotion();
    bool isSleepingLongEnough()const;
    void getAgentID()const;
    void getDestroySpeed(Block const&)const;
    void getScore();
    void setCursorSelectedItemGroup(ItemGroup const&);
    void getCreativeItemList()const;
    void setAgent(Agent *);
    bool isSurvival()const;
    void _applyExhaustion(Vec3 const&);
    void getItemInUse()const;
    void getSelectedItemSlot()const;
    void tickArmor();
    void getLevelProgress()const;
    void updateSkin(SerializedSkin const&, int);
    std::string getPlayerSessionId()const;
    void onMobStatusChanged(ActorUniqueID);
    void getSelectedItem()const;
    void causeFoodExhaustion(float);
    bool hasOpenContainer()const;
    void getUnmappedPlayerGameType();
    void useUIAnimationComponent(bool);
    void onResetBAI(int);
    void updateInventoryTransactions();
    bool isDestroyingBlock();
    void getBlockedUsingShieldTimeStamp()const;
    void setChunkRadius(unsigned int);
    void resetOnScreenAnimationTicks();
    void crackBlock(BlockPos const&, unsigned char);
    void _isDangerousSpawn(BlockSource &, AABB const&)const;
//  void setLastHurtBy(ActorType); //TODO: incomplete function definition
//  void _sendShieldUpdatePacket(ShieldItem const*, ItemStack const&, ItemStack const&, ContainerID, int); //TODO: incomplete function definition
    void getAgentIfAllowed(bool, ActorUniqueID)const;
    void getUnderwaterLightLevel()const;
    void resetPlayerLevel();
    void _tickCooldowns();
    void updateCreativeItemList(std::vector<ItemInstance> const&);
    bool canUseOperatorBlocks()const;
    void eat(int, float);
    void updateTrackedBosses();
    void getBlockedUsingDamagedShieldTimeStamp()const;
    void registerAttributes();
    void getPlayerPermissionLevel()const;
    void setEmotingStatus(bool);
    void getVRMoveAdjustAngle()const;
    void getTicksUsingItem();
    void resetToDefaultGameMode();
    void getSleepRotation()const;
    void getTransactionManager();
    void getPlayerIndex()const;
    bool canBeSeenOnMap()const;
    void getCursorSelectedItem()const;
    void getCursorSelectedItemGroup()const;
    void getCapePos(float);
    void getDestroyProgress(Block const&)const;
//  void setPlayerUIItem(PlayerUISlot, ItemStack const&); //TODO: incomplete function definition
    bool isChatAllowed();
    void setUnderwaterLightLevel(float);
    void _setStartedBlockingTimeStamp(long);
    void getFilteredCreativeItemList()const;
    void getChunkSource()const;
    void getSupplies()const;
    void forceAllowEating()const;
    bool isViewer()const;
    void releaseUsingItem();
    void recheckSpawnPosition();
    void _ensureSafeSpawnPosition(Vec3 &);
//  void setRespawnDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    bool isBouncing()const;
    void getXpNeededForLevelRange(int, int)const;
    void moveCape();
    void getPacketSender();
    bool isHurt();
    void eat(ItemStack const&);
    void getMapIndex();
    void _registerElytraLoopSound();
    class CachedSpawnData {

    public:
        CachedSpawnData();
    };
};

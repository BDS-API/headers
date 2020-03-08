#pragma once

#include "../actor/unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/IEntityRegistryOwner"
#include "../../unmapped/StructureManager"
#include "../../mce/UUID"
#include "../network/packet/sender/PacketSender"
#include "../block/unmapped/BlockSourceListener"
#include "../../unmapped/Abilities"
#include "../../unmapped/PlayerEventCoordinator"
#include "../command/orgin/CommandOrigin"
#include "../../unmapped/ClientPlayerEventCoordinator"
#include "../../unmapped/TagRegistry"
#include "../block/BlockLegacy"
#include "../../unmapped/MolangVariableMap"
#include "../../unmapped/NavigationComponent"
#include "../../unmapped/TextureUVCoordinateSet"
#include "../../unmapped/IWorldRegistriesProvider"
#include "../util/Vec3"
#include "../../unmapped/_TickPtr"
#include "../../unmapped/ClientLevelEventCoordinator"
#include "../block/unmapped/BlockSource"
#include "../../unmapped/HashedString"
#include "../../unmapped/ServerLevelEventCoordinator"
#include "../util/AABB"
#include "../util/Color"
#include "../actor/unmapped/ActorUniqueID"
#include "../../unmapped/Dimension"
#include "../actor/Player"
#include "../actor/unmapped/ActorRuntimeID"
#include "../actor/unmapped/ActorEventCoordinator"
#include "../block/unmapped/BlockEventCoordinator"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../block/unmapped/BlockComponentFactory"
#include "../pack/ResourcePackManager"
#include "../actor/damagesource/ActorDamageSource"
#include "../actor/Actor"
#include "../../unmapped/ServerPlayerEventCoordinator"
#include "../Scheduler"
#include "../../unmapped/EntityNetId"
#include "../eventing/IMinecraftEventing"
#include "../item/unmapped/ItemEventCoordinator"
#include "../nbt/CompoundTag"
#include "../network/NetEventCallback"
#include "../../unmapped/EducationLevelSettings"
#include "../network/packet/BossEventPacket"
#include "../../unmapped/ChangeDimensionRequest"
#include "../block/unmapped/BlockDefinitionGroup"
#include "storage/LevelStorage"


class Level : BlockSourceListener, IWorldRegistriesProvider {

public:
    virtual Level::~Level()
    virtual void onSourceCreated(BlockSource &);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*);
    virtual void startLeaveGame();
    virtual void addEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addGlobalEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addAutonomousEntity(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    virtual void addPlayer(std::unique_ptr<Player, std::default_delete<Player>>);
    virtual void takeEntity(ActorUniqueID);
    virtual void borrowEntity(ActorUniqueID, LevelChunk *);
    virtual void getCurrentServerTick()const;
    virtual void getBiomeRegistry()const;
    virtual void getBiomeRegistry();
    virtual void getBlockPalette()const;
    virtual void getBlockPalette();
    virtual void getFeatureRegistry()const;
    virtual void getFeatureRegistry();
    virtual void getFeatureTypeFactory()const;
    virtual void getFeatureTypeFactory();
    virtual void getJigsawStructureRegistry()const;
    virtual void getJigsawStructureRegistry();
    virtual void getStructureManager();
    virtual void getStructureManager()const;
    virtual void getBiomeComponentFactory()const;
    virtual void getBiomeComponentFactory();
    virtual void getSurfaceBuilderRegistry()const;
    virtual void getSurfaceBuilderRegistry();
    virtual void getDimensionFactory()const;
    virtual void getDimensionFactory();
    virtual void onPlayerDeath(Player &, ActorDamageSource const&);
    virtual void tick();
    virtual void directTickEntities(BlockSource &);
    virtual void updateSleepingPlayerList();
    virtual void setDifficulty(Difficulty);
    virtual void setCommandsEnabled(bool);
    virtual void setWorldTemplateOptionsUnlocked();
    virtual void saveAdditionalData();
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void queueEntityRemoval(std::unique_ptr<Actor, std::default_delete<Actor>> &&, bool);
    virtual void removeEntityReferences(Actor &, bool);
    virtual void loadFunctionManager();
    virtual void getClientResourcePackManager()const;
    virtual void getServerResourcePackManager()const;
    virtual void getTradeTables();
    virtual void addEntryToTagCache(std::string const&);
    virtual void dropEntryFromTagCache(std::string const&);
    virtual void clearTagCache();
    virtual void decrementTagCache(std::string const&, TagRegistry &);
    virtual void incrementTagCache(std::string const&, TagRegistry &);
    virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion);
    virtual void getTagRegistry();
    virtual void setFinishedInitializing();

    void getIOTasksGroup();
    void getEntitySystems();
    void getActorFactory();
    void getActorInfoRegistry();
    void getSimPaused();
    void getEntityRegistryOwner();
    void getClientTickingOffsets()const;
    std::vector<Player *>* getActivePlayers()const;
    void setSimPaused(bool);
    void getSoundPlayer();
    void getTickingOffsets()const;
    void getRegisteredBorderBlock()const;
    void getSyncTasksGroup();
    void createRandomSeed();
    Level(SoundPlayer &, std::unique_ptr<LevelStorage, std::default_delete<LevelStorage>>, IMinecraftEventing &, bool, Scheduler &, StructureManager &, ResourcePackManager &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory, std::default_delete<BlockComponentFactory>>, std::unique_ptr<BlockDefinitionGroup, std::default_delete<BlockDefinitionGroup>>);
    void addListener(LevelListener &);
    void setRemotePlayerEventCoordinator(std::unique_ptr<PlayerEventCoordinator, std::default_delete<PlayerEventCoordinator>> &&);
    void setServerPlayerEventCoordinator(std::unique_ptr<ServerPlayerEventCoordinator, std::default_delete<ServerPlayerEventCoordinator>> &&);
    void setClientPlayerEventCoordinator(std::unique_ptr<ClientPlayerEventCoordinator, std::default_delete<ClientPlayerEventCoordinator>> &&);
    void setActorEventCoordinator(std::unique_ptr<ActorEventCoordinator, std::default_delete<ActorEventCoordinator>> &&);
    void _setClientLevelEventCoordinator(std::unique_ptr<ClientLevelEventCoordinator, std::default_delete<ClientLevelEventCoordinator>> &&);
    void _setServerLevelEventCoordinator(std::unique_ptr<ServerLevelEventCoordinator, std::default_delete<ServerLevelEventCoordinator>> &&);
    void setBlockEventCoordinator(std::unique_ptr<BlockEventCoordinator, std::default_delete<BlockEventCoordinator>> &&);
    void setItemEventCoordinator(std::unique_ptr<ItemEventCoordinator, std::default_delete<ItemEventCoordinator>> &&);
    void setDefaultGameType(GameType);
    void _resetBiomeData();
    void _loadBiomeData();
    Tick* getCurrentTick()const;
    void createPhotoStorage();
    void _loadAutonomousEntities();
    void getEventing();
    void saveGameData();
    void saveVillages();
    void saveBiomeData();
    void setNetEventCallback(NetEventCallback *);
    void setPacketSender(PacketSender *);
    void _removeAllPlayers();
    bool isLeaveGameDone();
    void createDimension(AutomaticID<Dimension, int>);
    void getDimension(AutomaticID<Dimension, int>)const;
    void forEachDimension(std::function<bool ()(Dimension &)>);
    void forEachDimension(std::function<bool ()(Dimension const&)>)const;
    void getChunkTickRange()const;
    void getLevelData()const;
    void getPortalForcer();
    void requestPlayerChangeDimension(Player &, std::unique_ptr<ChangeDimensionRequest, std::default_delete<ChangeDimensionRequest>>);
    void _handleChangeDimensionRequests();
    void entityChangeDimension(Actor &, AutomaticID<Dimension, int>);
    void getDimensionConversionData()const;
    void _playerChangeDimension(Player *, ChangeDimensionRequest &);
    void forceRemoveEntity(Actor &);
    void getSharedSpawnPos();
    void getPlayer(ActorUniqueID)const;
    bool isPlayerSuspended(Player &)const;
    void _handlePlayerSuspension();
    void _suspendPlayer(mce::UUID const&);
    void _resumePlayer(mce::UUID const&);
    void _fixEntitiesRegion(std::vector<Actor *, std::allocator<Actor *>> &, BlockSource const&, Dimension &);
    void checkAndHandleMaterial(AABB const&, MaterialType, Actor *);
    void checkMaterial(AABB const&, MaterialType, Actor *);
    void _syncTime(int);
    bool isClientSide()const;
    void _cleanupDisconnectedPlayers();
    void _getServerLevelEventCoordinator();
    void fetchEntity(ActorUniqueID, bool)const;
    void getGameRules();
    void tickEntities();
    void setTime(int);
    void getTime()const;
    void forEachPlayer(std::function<bool ()(Player &)>);
    unsigned int getActivePlayerCount()const;
    void tickEntitySystems();
    void _saveSomeChunks();
    void _isSavingRequired()const;
    void _pollSaveGameStatistics();
    void saveDirtyChunks();
    void findPath(Actor &, int, int, int, NavigationComponent &);
    void findPath(Actor &, Actor &, NavigationComponent &);
    void broadcastLevelEvent(LevelEvent, Vec3 const&, int, Player *);
    void broadcastLevelEvent(LevelEvent, CompoundTag const&, Player *);
    void playSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void getPrimaryLocalPlayer()const;
    void playSound(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool);
    void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool);
    void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, int, Player *);
    void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, Block const&, Player *);
    void handleLevelEvent(LevelEvent, Vec3 const&, int);
    void handleLevelEvent(LevelEvent, CompoundTag const&);
    void handleSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool);
    void handleSoundEvent(std::string const&, Vec3 const&, float, float);
    void handleStopSoundEvent(std::string const&);
    void handleStopAllSounds();
    void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool);
    void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int);
    void getDifficulty()const;
    void getNextRuntimeID();
    void getActorEventCoordinator();
    void _validatePlayerName(Player &);
    void getNewPlayerId()const;
    void suspendPlayer(Player &);
    void resumePlayer(Player &);
    void removeAllNonPlayerEntities(ActorUniqueID);
    void getRuntimeEntity(ActorRuntimeID, bool)const;
    void findPlayer(std::function<bool ()(Player const&)>)const;
    void getScoreboard();
    void forceFlushRemovedPlayers();
    void levelCleanupQueueEntityRemoval(std::unique_ptr<Actor, std::default_delete<Actor>> &&, bool);
    void registerTemporaryPointer(_TickPtr &);
    void unregisterTemporaryPointer(_TickPtr &);
    void getMob(ActorUniqueID)const;
    void removeListener(LevelListener &);
    void _tickTemporaryPointers();
    void _clientHandleAddOwnedEntity(EntityNetId);
    void _clientHandleAddWeakRefEntity(EntityNetId, WeakRefT<EntityRefTraits> const&);
    void _clientHandleRemoveOwnedEntity(EntityNetId);
    void _clientHandleRemoveWeakRefEntity(EntityNetId);
    void explode(BlockSource &, Actor *, Vec3 const&, float, bool, bool, float, bool);
    void spawnParticleEffect(std::string const&, Vec3 const&, Dimension *);
    void spawnParticleEffect(std::string const&, Actor const&, Vec3 const&);
    void denyEffect(Vec3 const&);
    void potionSplash(Vec3 const&, Color const&, bool);
    void extinguishFire(BlockSource &, BlockPos const&, unsigned char);
    void saveLevelData();
    void setMultiplayerGameIntent(bool);
    void getMultiplayerGameIntent()const;
    void setMultiplayerGame(bool);
    bool isMultiplayerGame()const;
    void setLANBroadcastIntent(bool);
    void getLANBroadcastIntent()const;
    void setLANBroadcast(bool);
    void getLANBroadcast()const;
    void setXBLBroadcastIntent(Social::GamePublishSetting);
    void getXBLBroadcastIntent()const;
    bool hasXBLBroadcastIntent()const;
    void setXBLBroadcastMode(Social::GamePublishSetting);
    void getXBLBroadcastMode()const;
    bool hasXBLBroadcast()const;
    void setPlatformBroadcastIntent(Social::GamePublishSetting);
    void getPlatformBroadcastIntent()const;
    bool hasPlatformBroadcastIntent()const;
    void setPlatformBroadcastMode(Social::GamePublishSetting);
    void getPlatformBroadcastMode()const;
    bool hasPlatformBroadcast()const;
    void setHasLockedBehaviorPack(bool);
    void setHasLockedResourcePack(bool);
    void animateTick(Actor &);
    void getSeed();
    void setDefaultSpawn(BlockPos const&);
    void getDefaultSpawn()const;
    void getDefaultGameType()const;
    void getRemotePlayerEventCoordinator();
    void getServerPlayerEventCoordinator();
    void getClientPlayerEventCoordinator();
    void getBlockEventCoordinator();
    void _getClientLevelEventCoordinator();
    void getItemEventCoordinator();
    void broadcastEntityEvent(Actor *, ActorEvent, int);
    void addBossEventListener(BossEventListener *);
    void removeBossEventListener(BossEventListener *);
    void broadcastBossEvent(BossEventUpdateType, ActorUniqueID const&, BossEventPacket const&);
    void broadcastBossEvent(BossEventUpdateType);
    void areBossEventListenersReady();
    bool hasLevelStorage()const;
    void getLevelStorage();
    void getLevelStorage()const;
    void getLevelData();
    void getPhotoStorage();
    void _saveAllMapData();
    void savePlayers();
    void _saveAutonomousEntities();
    void deferTimedStorageActions(bool);
    void _checkUserStorage();
    void getTickingAreasMgr();
    void getTickingArea(mce::UUID const&)const;
    void getPlayer(std::string const&)const;
    void getPlayer(mce::UUID const&)const;
    void getPlayerByXuid(std::string const&)const;
    void getPlayerFromUnknownIdentifier(std::string const&)const;
    void getNextPlayer(ActorUniqueID const&, bool);
    void getPrevPlayer(ActorUniqueID const&, bool);
    void getNumRemotePlayers();
    void getPlatformPlayer(std::string const&)const;
    void getPlayerFromServerId(std::string const&)const;
    void getRuntimePlayer(ActorRuntimeID)const;
    void getRandomPlayer();
    void getRandom()const;
    void getPlayerColor(Player const&)const;
    void onChunkDiscarded(LevelChunk &);
    void removeAutonomousEntity(Actor *, LevelChunk *);
    void forEachPlayer(std::function<bool ()(Player const&)>)const;
    void getUserCount()const;
    void getUsers();
    void getUsers()const;
    void _getValidatedPlayerName(std::string const&);
    void destroyBlock(BlockSource &, BlockPos const&, bool);
    void getSpawner()const;
    void getProjectileFactory()const;
    void getEntityDefinitions()const;
    void getBlockDefinitions()const;
    void getBlockComponentFactory();
    void getBlockComponentFactory()const;
    void getActorAnimationGroup()const;
    void getActorAnimationControllerGroup()const;
    void getSpawnRules()const;
    void getSpawnGroupRegistry()const;
    void getSpawnRulesMutable()const;
    void getBehaviorTreeGroup()const;
    void getBehaviorFactory()const;
    bool isUsableLevel(Level*);
    void getTearingDown()const;
    void getPlayerList();
    void getPlayerList()const;
    void getGlobalEntities();
    void getAutonomousEntities();
    void getAutonomousActiveEntity(ActorUniqueID)const;
    void getAutonomousInactiveEntity(ActorUniqueID)const;
    void getAutonomousEntity(ActorUniqueID)const;
    void getAutonomousLoadedEntities();
    void getPacketSender()const;
    void getNetEventCallback()const;
    void getHitResult();
    void getLiquidHitResult();
    void getAdventureSettings();
    void getGameRules()const;
    void getDefaultAbilities();
    void getWireframeQueue()const;
    void getWireframeQueue();
    bool hasStartWithMapEnabled()const;
    void getLootTables();
    void updateWeather(float, int, float, int);
    void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &);
    void upgradeStorageVersion(StorageVersion);
    void save();
    void suspendAndSave();
    void waitAsyncSuspendWork();
    void _destroyEffect(BlockPos const&, Block const&, int);
    void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool);
    bool hasCommandsEnabled()const;
    bool hasExperimentalGameplayEnabled()const;
    void useMsaGamertagsOnly()const;
    void setMsaGamertagsOnly(bool);
    void getSpecialMultiplier(AutomaticID<Dimension, int>);
    void getNewUniqueID();
    bool isExporting()const;
    void setIsExporting(bool);
    void getSavedData()const;
    void setLevelId(std::string);
    bool isEdu()const;
    void getMapSavedData(ActorUniqueID);
    void _loadMapData(ActorUniqueID const&);
    void getMapSavedData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void requestMapInfo(ActorUniqueID);
    void createMapSavedData(ActorUniqueID const&, BlockPos const&, AutomaticID<Dimension, int>, int);
    void createMapSavedData(std::vector<ActorUniqueID, std::allocator<ActorUniqueID>> const&, BlockPos const&, AutomaticID<Dimension, int>, int);
    void _createMapSavedData(ActorUniqueID const&);
    void copyAndLockMap(ActorUniqueID, ActorUniqueID);
    void expandMapByID(ActorUniqueID, bool);
    void getNetherScale()const;
    void getPlayerAbilities(ActorUniqueID const&);
    void setPlayerAbilities(ActorUniqueID const&, Abilities);
    void sendAllPlayerAbilities(Player const&);
    void tickedMob();
    void getTickedMobCountPrevious()const;
    void getGlobalBlockPalette()const;
    void getRecipes()const;
    void registerBorderBlock(BlockLegacy const&);
    void getEducationLevelSettings()const;
    void setEducationLevelSettings(EducationLevelSettings);
    void saveEducationLevelSettings();
    void getServerAuthoritativeMovement()const;
    void setServerAuthoritativeMovement(bool);
    void shouldCorrectPlayerMovement()const;
    void setCorrectPlayerMovement(bool);
    void getPlayerMovementScoreThreshold()const;
    void setPlayerMovementScoreThreshold(float);
    void getPlayerMovementDistanceThreshold()const;
    void getPlayerMovementDistanceThresholdSqr()const;
    void setPlayerMovementDistanceThreshold(float);
    void getPlayerMovementDurationThreshold()const;
    void setPlayerMovementDurationThreshold(std::chrono::duration<long, std::ratio<1l, 1000l>>);
};

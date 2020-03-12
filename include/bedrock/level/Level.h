#pragma once

#include "../block/unmapped/BlockSourceListener.h"
#include "../actor/unmapped/ActorUniqueID.h"
#include <memory>
#include "../../unmapped/EducationLevelSettings.h"
#include "../../unmapped/EntityNetId.h"
#include <vector>
#include <string>
#include "../actor/unmapped/ActorRuntimeID.h"
#include "../../unmapped/Abilities.h"
#include <functional>
#include "../util/ChunkPos.h"
#include "../../unmapped/IWorldRegistriesProvider.h"


class Level : BlockSourceListener, IWorldRegistriesProvider {

public:
    class CompareLevelChunkQueuedSavingElement;
    class LevelChunkQueuedSavingElement;

    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*);
    virtual void onSourceDestroyed(BlockSource &);
    virtual void onPlayerDeath(Player &, ActorDamageSource const&);
    virtual void getFeatureTypeFactory();
    virtual void getTradeTables();
    virtual void getBlockPalette()const;
    virtual void incrementTagCache(std::string const&, TagRegistry &);
    virtual void saveAdditionalData();
    virtual void getTagRegistry();
    virtual void addEntryToTagCache(std::string const&);
    virtual void getSurfaceBuilderRegistry()const;
    virtual void getBiomeRegistry();
    virtual void getBlockPalette();
    virtual void addEntity(BlockSource &, std::unique_ptr<Actor>);
    virtual void getDimensionFactory();
    virtual void loadFunctionManager();
    virtual void addPlayer(std::unique_ptr<Player>);
    virtual void getFeatureRegistry();
    virtual void getJigsawStructureRegistry()const;
    virtual void setCommandsEnabled(bool);
    virtual void getStructureManager()const;
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void getStructureManager();
    virtual void getFeatureTypeFactory()const;
    virtual void addGlobalEntity(BlockSource &, std::unique_ptr<Actor>);
    virtual void getDimensionFactory()const;
    virtual void clearTagCache();
    virtual void removeEntityReferences(Actor &, bool);
    virtual void getBiomeRegistry()const;
    ~Level();
    virtual void takeEntity(ActorUniqueID);
    virtual void getFeatureRegistry()const;
    virtual void getBiomeComponentFactory();
    virtual void getJigsawStructureRegistry();
    virtual void onSourceCreated(BlockSource &);
    virtual void queueEntityRemoval(std::unique_ptr<Actor> &&, bool);
    virtual void updateSleepingPlayerList();
    virtual void getClientResourcePackManager()const;
    virtual void getBiomeComponentFactory()const;
    virtual void addAutonomousEntity(BlockSource &, std::unique_ptr<Actor>);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void dropEntryFromTagCache(std::string const&);
    virtual void setFinishedInitializing();
    virtual void tick();
    virtual void setWorldTemplateOptionsUnlocked();
    virtual void startLeaveGame();
    virtual void decrementTagCache(std::string const&, TagRegistry &);
    virtual void directTickEntities(BlockSource &);
    virtual void getSurfaceBuilderRegistry();
    virtual void getServerResourcePackManager()const;
//  virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion); //TODO: incomplete function definition
    virtual void borrowEntity(ActorUniqueID, LevelChunk *);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void getCurrentServerTick()const;
//  virtual void setDifficulty(Difficulty); //TODO: incomplete function definition
    void saveDirtyChunks();
    void getTickingOffsets()const;
//  void getDimension(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    void getClientPlayerEventCoordinator();
    bool isClientSide()const;
    void findPath(Actor &, Actor &, NavigationComponent &);
    void getPrimaryLocalPlayer()const;
    void _saveAutonomousEntities();
    void requestPlayerChangeDimension(Player &, std::unique_ptr<ChangeDimensionRequest>);
    void getRuntimePlayer(ActorRuntimeID)const;
    void getRegisteredBorderBlock()const;
    void potionSplash(Vec3 const&, Color const&, bool);
    void getSoundPlayer();
    void getEntityRegistryOwner();
    std::string getPlayerPlatformOnlineId(mce::UUID const&)const;
    bool isUsableLevel(Level *);
    void _createMapSavedData(ActorUniqueID const&);
//  void setPlayerMovementDurationThreshold(std::chrono::duration<long, std::ratio<1l, 1000l>>); //TODO: incomplete function definition
    void forEachDimension(std::function<bool (Dimension &)>);
    void getMob(ActorUniqueID)const;
    void getNetherScale()const;
    void getUsers();
    void getGameRules();
    void getBlockEventCoordinator();
    void getEntityDefinitions()const;
    void _destroyEffect(BlockPos const&, Block const&, int);
    void getActorAnimationGroup()const;
    void getActorAnimationControllerGroup()const;
    void getPhotoStorage();
    void getClientTickingOffsets()const;
//  void checkMaterial(AABB const&, MaterialType, Actor *); //TODO: incomplete function definition
    bool isMultiplayerGame()const;
    void setDefaultSpawn(BlockPos const&);
    void setMsaGamertagsOnly(bool);
    void getProjectileFactory()const;
    void getBlockDefinitions()const;
    void getAdventureSettings();
//  void createMapSavedData(ActorUniqueID const&, BlockPos const&, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
    void getIOTasksGroup();
    void _getServerLevelEventCoordinator();
    void saveVillages();
    void getDefaultGameType()const;
    void getWireframeQueue()const;
//  void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool); //TODO: incomplete function definition
    bool hasXBLBroadcast()const;
    void setItemEventCoordinator(std::unique_ptr<ItemEventCoordinator> &&);
    std::string getLevelId()const;
    void forEachDimension(std::function<bool (Dimension const&)>)const;
    void tickedMob();
//  void entityChangeDimension(Actor &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void getPlayerMovementScoreThreshold()const;
    void getPlayerColor(Player const&)const;
    void getLiquidHitResult();
    void saveBiomeData();
    void setPlayerAbilities(ActorUniqueID const&, Abilities);
//  void checkAndHandleMaterial(AABB const&, MaterialType, Actor *); //TODO: incomplete function definition
    void getNumRemotePlayers();
    void _pollSaveGameStatistics();
    void getAutonomousEntity(ActorUniqueID)const;
    void extinguishFire(BlockSource &, BlockPos const&, unsigned char);
    void explode(BlockSource &, Actor *, Vec3 const&, float, bool, bool, float, bool);
    void getLANBroadcast()const;
    void setPlayerMovementDistanceThreshold(float);
    void getDefaultAbilities();
    void getSpawnRules()const;
    void getHitResult();
    void waitAsyncSuspendWork();
    void getRuntimeEntity(ActorRuntimeID, bool)const;
    void getPlayer(std::string const&)const;
    bool hasStartWithMapEnabled()const;
    void getSharedSpawnPos();
    void addListener(LevelListener &);
    void _resumePlayer(mce::UUID const&);
    void copyAndLockMap(ActorUniqueID, ActorUniqueID);
    void getRemotePlayerEventCoordinator();
    void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    void getEventing();
    void getPlatformPlayer(std::string const&)const;
    void setPacketSender(PacketSender *);
    void getActorFactory();
//  void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void getActorEventCoordinator();
    void getTime()const;
    void setTime(int);
    void setHasLockedBehaviorPack(bool);
    void _saveAllMapData();
    std::string createUniqueLevelID(int);
    void useMsaGamertagsOnly()const;
//  void setXBLBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
//  void getSpecialMultiplier(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void handleStopSoundEvent(std::string const&);
    void getTickedMobCountPrevious()const;
    void setRemotePlayerEventCoordinator(std::unique_ptr<PlayerEventCoordinator> &&);
    void _clientHandleAddOwnedEntity(EntityNetId);
    void getServerPlayerEventCoordinator();
    void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    void getPlayerMovementDistanceThresholdSqr()const;
    void shouldCorrectPlayerMovement()const;
    void getRecipes()const;
    void getActorInfoRegistry();
    void setNetEventCallback(NetEventCallback *);
    void getGlobalEntities();
    void getAutonomousInactiveEntity(ActorUniqueID)const;
//  void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &); //TODO: incomplete function definition
    void destroyBlock(BlockSource &, BlockPos const&, bool);
    void requestMapInfo(ActorUniqueID);
    void getPlatformBroadcastMode()const;
    void _playerChangeDimension(Player *, ChangeDimensionRequest &);
    void _loadBiomeData();
    void getMapSavedData(std::unique_ptr<CompoundTag> const&);
    void setCorrectPlayerMovement(bool);
    void getPlayerFromUnknownIdentifier(std::string const&)const;
    void setMultiplayerGame(bool);
    void removeListener(LevelListener &);
    void _removeAllPlayers();
    std::vector<Player *> * getActivePlayers()const;
    void _setClientLevelEventCoordinator(std::unique_ptr<ClientLevelEventCoordinator> &&);
    void setLANBroadcastIntent(bool);
//  void broadcastLevelEvent(LevelEvent, CompoundTag const&, Player *); //TODO: incomplete function definition
    void _handleChangeDimensionRequests();
//  void removeBossEventListener(BossEventListener *); //TODO: incomplete function definition
    void setLevelId(std::string);
    void getLevelData()const;
    void getUserCount()const;
    void setActorEventCoordinator(std::unique_ptr<ActorEventCoordinator> &&);
    void getXBLBroadcastIntent()const;
//  void setPlatformBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
//  void addBossEventListener(BossEventListener *); //TODO: incomplete function definition
    void getTickingArea(mce::UUID const&)const;
    void getPlayerList()const;
    void _cleanupDisconnectedPlayers();
    void forceRemoveEntity(Actor &);
    void getWireframeQueue();
    void createRandomSeed();
    void getTickingAreasMgr();
    void removeAutonomousEntity(Actor *, LevelChunk *);
    void onChunkDiscarded(LevelChunk &);
    void getLevelData();
    bool hasPlatformBroadcastIntent()const;
    void getAutonomousActiveEntity(ActorUniqueID)const;
    bool hasXBLBroadcastIntent()const;
//  void setDefaultGameType(GameType); //TODO: incomplete function definition
    void _suspendPlayer(mce::UUID const&);
    void saveLevelData();
    bool hasCommandsEnabled()const;
    void savePlayers();
    void getPlayerMovementDistanceThreshold()const;
    void getSpawnGroupRegistry()const;
    void getPlayerByXuid(std::string const&)const;
    void getEducationLevelSettings()const;
    void _validatePlayerName(Player &);
    void findPlayer(std::function<bool (Player const&)>)const;
    void expandMapByID(ActorUniqueID, bool);
    void saveEducationLevelSettings();
//  void broadcastBossEvent(BossEventUpdateType); //TODO: incomplete function definition
//  void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void _handlePlayerSuspension();
    unsigned int getActivePlayerCount()const;
    void getPlayer(ActorUniqueID)const;
    void forEachPlayer(std::function<bool (Player &)>);
    void _isSavingRequired()const;
    void getLANBroadcastIntent()const;
    void _clientHandleRemoveOwnedEntity(EntityNetId);
    void getPlatformBroadcastIntent()const;
//  void broadcastBossEvent(BossEventUpdateType, ActorUniqueID const&, BossEventPacket const&); //TODO: incomplete function definition
    void fetchEntity(ActorUniqueID, bool)const;
//  void handleSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void deferTimedStorageActions(bool);
    void getPrevPlayer(ActorUniqueID const&, bool);
    void setPlayerMovementScoreThreshold(float);
    void updateWeather(float, int, float, int);
    void save();
//  void _clientHandleAddWeakRefEntity(EntityNetId, WeakRefT<EntityRefTraits> const&); //TODO: incomplete function definition
    void getXBLBroadcastMode()const;
    void getNetEventCallback()const;
    std::string getPlayerNames();
    void getAutonomousLoadedEntities();
    void getLevelStorage()const;
    std::string getPlayerXUID(mce::UUID const&)const;
    void sendAllPlayerAbilities(Player const&);
    void registerTemporaryPointer(_TickPtr &);
    Level(SoundPlayer &, std::unique_ptr<LevelStorage>, IMinecraftEventing &, bool, Scheduler &, StructureManager &, ResourcePackManager &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory>, std::unique_ptr<BlockDefinitionGroup>);
    void _resetBiomeData();
    void getDifficulty()const;
    void resumePlayer(Player &);
    void getPlayerList();
    void getScoreboard();
    void tickEntities();
    void _saveSomeChunks();
    void getLootTables();
    void _tickTemporaryPointers();
    void getEntitySystems();
    void spawnParticleEffect(std::string const&, Vec3 const&, Dimension *);
    bool hasExperimentalGameplayEnabled()const;
    void _syncTime(int);
    void tickEntitySystems();
    void _checkUserStorage();
    void getPortalForcer();
//  void setPlatformBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    void getNewUniqueID();
    void denyEffect(Vec3 const&);
    void _clientHandleRemoveWeakRefEntity(EntityNetId);
    void getSpawner()const;
    void getPlayerFromServerId(std::string const&)const;
    void getMultiplayerGameIntent()const;
    void setSimPaused(bool);
    void saveGameData();
    void animateTick(Actor &);
    void forEachPlayer(std::function<bool (Player const&)>)const;
    void getGameRules()const;
    void registerBorderBlock(BlockLegacy const&);
    void setBlockEventCoordinator(std::unique_ptr<BlockEventCoordinator> &&);
    bool hasLevelStorage()const;
//  void createMapSavedData(std::vector<ActorUniqueID> const&, BlockPos const&, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
//  void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, int, Player *); //TODO: incomplete function definition
    std::string getScreenshotsFolder()const;
    void getBlockComponentFactory()const;
//  void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, Block const&, Player *); //TODO: incomplete function definition
//  void playSound(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    bool isEdu()const;
    void spawnParticleEffect(std::string const&, Actor const&, Vec3 const&);
    void getLevelStorage();
    void _getClientLevelEventCoordinator();
    bool isPlayerSuspended(Player &)const;
    void getTearingDown()const;
    void getRandomPlayer();
    void _getValidatedPlayerName(std::string const&);
    void suspendAndSave();
    void getMapSavedData(ActorUniqueID);
    void _loadAutonomousEntities();
    void setClientPlayerEventCoordinator(std::unique_ptr<ClientPlayerEventCoordinator> &&);
    void getBehaviorFactory()const;
    bool isLeaveGameDone();
    void getSyncTasksGroup();
    void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    bool hasPlatformBroadcast()const;
    void getChunkTickRange()const;
    void setLANBroadcast(bool);
    void _setServerLevelEventCoordinator(std::unique_ptr<ServerLevelEventCoordinator> &&);
    void suspendPlayer(Player &);
    void getBehaviorTreeGroup()const;
    void handleStopAllSounds();
    void _loadMapData(ActorUniqueID const&);
    void getSeed();
    void setServerPlayerEventCoordinator(std::unique_ptr<ServerPlayerEventCoordinator> &&);
//  void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void setIsExporting(bool);
//  void createDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition
    void getNextPlayer(ActorUniqueID const&, bool);
    void getServerAuthoritativeMovement()const;
//  void broadcastEntityEvent(Actor *, ActorEvent, int); //TODO: incomplete function definition
    void setEducationLevelSettings(EducationLevelSettings);
    void getUsers()const;
    void getNextRuntimeID();
    void getGlobalBlockPalette()const;
    void levelCleanupQueueEntityRemoval(std::unique_ptr<Actor> &&, bool);
    void getItemEventCoordinator();
    void getPlayerAbilities(ActorUniqueID const&);
    void getAutonomousEntities();
    void handleSoundEvent(std::string const&, Vec3 const&, float, float);
    void getRandom()const;
    void getBlockComponentFactory();
    void findPath(Actor &, int, int, int, NavigationComponent &);
    void removeAllNonPlayerEntities(ActorUniqueID);
    void getPacketSender()const;
    void _fixEntitiesRegion(std::vector<Actor *> &, BlockSource const&, Dimension &);
    void unregisterTemporaryPointer(_TickPtr &);
//  void setXBLBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void setHasLockedResourcePack(bool);
//  void playSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
//  void broadcastLevelEvent(LevelEvent, Vec3 const&, int, Player *); //TODO: incomplete function definition
    void getSpawnRulesMutable()const;
    bool isExporting()const;
    void forceFlushRemovedPlayers();
    void getPlayerMovementDurationThreshold()const;
    void areBossEventListenersReady();
    void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    void getPlayer(mce::UUID const&)const;
    void getSimPaused();
    void getNewPlayerId()const;
    void getDefaultSpawn()const;
//  void upgradeStorageVersion(StorageVersion); //TODO: incomplete function definition
    void setServerAuthoritativeMovement(bool);
    void setMultiplayerGameIntent(bool);
    void getSavedData()const;
    Tick* getCurrentTick()const;
//  void handleLevelEvent(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
    void createPhotoStorage();
//  void handleLevelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
    void getDimensionConversionData()const;
//  void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
//  void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool); //TODO: incomplete function definition
    class CompareLevelChunkQueuedSavingElement {

    public:
        void operator()(Level::LevelChunkQueuedSavingElement const&, Level::LevelChunkQueuedSavingElement const&);
    };
    class LevelChunkQueuedSavingElement {

    public:
//      LevelChunkQueuedSavingElement(ChunkPos, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
    };
};

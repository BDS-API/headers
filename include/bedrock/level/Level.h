#pragma once

#include "../../unmapped/TagRegistry.h"
#include "../../unmapped/Abilities.h"
#include "../actor/unmapped/ActorRuntimeID.h"
#include "../../unmapped/TextureUVCoordinateSet.h"
#include "../util/BlockPos.h"
#include "../../unmapped/PlayerEventCoordinator.h"
#include "../block/BlockLegacy.h"
#include "../../unmapped/ClientPlayerEventCoordinator.h"
#include "../actor/damagesource/ActorDamageSource.h"
#include "../block/unmapped/BlockDefinitionGroup.h"
#include "storage/LevelStorage.h"
#include <memory>
#include "../util/AABB.h"
#include "../command/origin/CommandOrigin.h"
#include "../../unmapped/ChangeDimensionRequest.h"
#include "../item/unmapped/ItemEventCoordinator.h"
#include <string>
#include "../actor/unmapped/ActorUniqueID.h"
#include "../pack/ResourcePackManager.h"
#include "../actor/Actor.h"
#include "../block/unmapped/BlockEventCoordinator.h"
#include "../../unmapped/MolangVariableMap.h"
#include "../../unmapped/IWorldRegistriesProvider.h"
#include "../../unmapped/ClientLevelEventCoordinator.h"
#include <functional>
#include "../actor/unmapped/ActorEventCoordinator.h"
#include "../../unmapped/Block.h"
#include "../network/NetEventCallback.h"
#include "../block/unmapped/BlockSource.h"
#include "LevelChunk.h"
#include "../../unmapped/_TickPtr.h"
#include "../../unmapped/EducationLevelSettings.h"
#include "../../unmapped/IEntityRegistryOwner.h"
#include "../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/StructureManager.h"
#include "../../unmapped/NavigationComponent.h"
#include "../../mce/UUID.h"
#include "../util/Vec3.h"
#include "../block/unmapped/BlockSourceListener.h"
#include "../network/packet/BossEventPacket.h"
#include "../../unmapped/ServerPlayerEventCoordinator.h"
#include <vector>
#include "../../unmapped/EntityNetId.h"
#include "../util/Color.h"
#include "../Scheduler.h"
#include "../../unmapped/SoundPlayer.h"
#include "../eventing/IMinecraftEventing.h"
#include "LevelListener.h"
#include "LevelSettings.h"
#include "../../unmapped/HashedString.h"
#include "../../unmapped/Dimension.h"
#include <ratio>
#include "../util/ChunkPos.h"
#include "../../unmapped/ServerLevelEventCoordinator.h"
#include "../nbt/CompoundTag.h"
#include "LevelData.h"
#include "../actor/Player.h"
#include "../network/packet/sender/PacketSender.h"
#include "../block/unmapped/BlockComponentFactory.h"


class Level : BlockSourceListener, IWorldRegistriesProvider {

public:
    class CompareLevelChunkQueuedSavingElement;
    class LevelChunkQueuedSavingElement;

    virtual void addPlayer(std::unique_ptr<Player>);
    virtual void onSourceDestroyed(BlockSource &);
//  virtual void setDifficulty(Difficulty); //TODO: incomplete function definition
    virtual void getBiomeRegistry();
    virtual void addEntryToTagCache(std::string const&);
    virtual void takeEntity(ActorUniqueID);
    virtual void getFeatureTypeFactory()const;
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*);
    virtual void queueEntityRemoval(std::unique_ptr<Actor> &&, bool);
    virtual void addGlobalEntity(BlockSource &, std::unique_ptr<Actor>);
    virtual void startLeaveGame();
    virtual void getTagRegistry();
    virtual void addAutonomousEntity(BlockSource &, std::unique_ptr<Actor>);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void getBiomeComponentFactory();
    virtual void onSourceCreated(BlockSource &);
    virtual void removeEntityReferences(Actor &, bool);
    virtual void dropEntryFromTagCache(std::string const&);
    virtual void setFinishedInitializing();
    virtual void getSurfaceBuilderRegistry()const;
    virtual void getServerResourcePackManager()const;
    virtual void tick();
    virtual void decrementTagCache(std::string const&, TagRegistry &);
    virtual void getFeatureRegistry();
//  virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion); //TODO: incomplete function definition
    virtual void getFeatureTypeFactory();
    virtual void loadFunctionManager();
    virtual void directTickEntities(BlockSource &);
    virtual void updateSleepingPlayerList();
    virtual void getBiomeRegistry()const;
    virtual void incrementTagCache(std::string const&, TagRegistry &);
    virtual void borrowEntity(ActorUniqueID, LevelChunk *);
    virtual void getDimensionFactory();
    virtual void getJigsawStructureRegistry();
    virtual void getJigsawStructureRegistry()const;
    virtual void setCommandsEnabled(bool);
    virtual void getFeatureRegistry()const;
    virtual void onNewChunkFor(Player &, LevelChunk &);
    virtual void getBlockPalette()const;
    virtual void getDimensionFactory()const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void getStructureManager()const;
    virtual void getBiomeComponentFactory()const;
    virtual void getStructureManager();
    virtual void saveAdditionalData();
    virtual void addEntity(BlockSource &, std::unique_ptr<Actor>);
    virtual void getTradeTables();
    virtual void getCurrentServerTick()const;
    virtual void setWorldTemplateOptionsUnlocked();
    virtual void getSurfaceBuilderRegistry();
    virtual void onPlayerDeath(Player &, ActorDamageSource const&);
    virtual void getClientResourcePackManager()const;
    ~Level();
    virtual void clearTagCache();
    virtual void getBlockPalette();
    void saveGameData();
    void spawnParticleEffect(std::string const&, Actor const&, Vec3 const&);
    void levelCleanupQueueEntityRemoval(std::unique_ptr<Actor> &&, bool);
    void createRandomSeed();
//  void playSound(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
//  void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void getLootTables();
//  void upgradeStorageVersion(StorageVersion); //TODO: incomplete function definition
    void waitAsyncSuspendWork();
    void getNewUniqueID();
    void getProjectileFactory()const;
    void setNetEventCallback(NetEventCallback *);
    bool isExporting()const;
    void saveDirtyChunks();
//  void handleLevelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
    void getMapSavedData(ActorUniqueID);
    void _validatePlayerName(Player &);
    void _saveAllMapData();
    void setItemEventCoordinator(std::unique_ptr<ItemEventCoordinator> &&);
    bool isLeaveGameDone();
    void getXBLBroadcastMode()const;
    void getPhotoStorage();
    void getNetEventCallback()const;
    bool isPlayerSuspended(Player &)const;
//  void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void getPrimaryLocalPlayer()const;
    void getUsers();
    void _loadMapData(ActorUniqueID const&);
    void getIOTasksGroup();
    bool hasLevelStorage()const;
    void getAutonomousActiveEntity(ActorUniqueID)const;
//  void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool); //TODO: incomplete function definition
    void setMultiplayerGameIntent(bool);
    std::string getPlayerXUID(mce::UUID const&)const;
    void getPacketSender()const;
    void getLiquidHitResult();
//  void entityChangeDimension(Actor &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void getPlatformBroadcastMode()const;
    void getPlayer(mce::UUID const&)const;
//  void broadcastBossEvent(BossEventUpdateType, ActorUniqueID const&, BossEventPacket const&); //TODO: incomplete function definition
    void fetchEntity(ActorUniqueID, bool)const;
    void getBlockComponentFactory()const;
    void _removeAllPlayers();
    void getPlayerFromUnknownIdentifier(std::string const&)const;
    void getPlayerMovementDistanceThreshold()const;
    void setActorEventCoordinator(std::unique_ptr<ActorEventCoordinator> &&);
    void setHasLockedBehaviorPack(bool);
//  void setXBLBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    void getNextRuntimeID();
    void potionSplash(Vec3 const&, Color const&, bool);
//  void broadcastEntityEvent(Actor *, ActorEvent, int); //TODO: incomplete function definition
    void setServerPlayerEventCoordinator(std::unique_ptr<ServerPlayerEventCoordinator> &&);
//  void setPlatformBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    void requestMapInfo(ActorUniqueID);
    std::string getLevelId()const;
//  void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void registerBorderBlock(BlockLegacy const&);
    void getRegisteredBorderBlock()const;
    void getPlayerMovementDistanceThresholdSqr()const;
    void getActorInfoRegistry();
    void getRuntimePlayer(ActorRuntimeID)const;
    void _handleChangeDimensionRequests();
    void getRandomPlayer();
    void _destroyEffect(BlockPos const&, Block const&, int);
//  void playSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void _saveAutonomousEntities();
    std::string createUniqueLevelID(int);
    void getMapSavedData(std::unique_ptr<CompoundTag> const&);
//  void createMapSavedData(ActorUniqueID const&, BlockPos const&, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
    void onChunkDiscarded(LevelChunk &);
    bool isUsableLevel(Level *);
    void getBlockDefinitions()const;
    bool isEdu()const;
    void getUsers()const;
    std::string getPlayerPlatformOnlineId(mce::UUID const&)const;
//  void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, int, Player *); //TODO: incomplete function definition
    void getSyncTasksGroup();
    void _loadBiomeData();
    void _tickTemporaryPointers();
    void getAutonomousEntities();
    void getNewPlayerId()const;
    void _setServerLevelEventCoordinator(std::unique_ptr<ServerLevelEventCoordinator> &&);
    void getActorEventCoordinator();
    void getLANBroadcastIntent()const;
    void _clientHandleAddOwnedEntity(EntityNetId);
    std::string getPlayerNames();
    void getActorAnimationControllerGroup()const;
    void getSpawnGroupRegistry()const;
    void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    void _resumePlayer(mce::UUID const&);
    void getTickingAreasMgr();
    void getWireframeQueue()const;
    void setEducationLevelSettings(EducationLevelSettings);
    void getServerAuthoritativeMovement()const;
    void _resetBiomeData();
    void _getValidatedPlayerName(std::string const&);
    void getSpawner()const;
    void requestPlayerChangeDimension(Player &, std::unique_ptr<ChangeDimensionRequest>);
    void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
//  void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool); //TODO: incomplete function definition
    Tick* getCurrentTick()const;
    void handleSoundEvent(std::string const&, Vec3 const&, float, float);
//  void checkMaterial(AABB const&, MaterialType, Actor *); //TODO: incomplete function definition
    void destroyBlock(BlockSource &, BlockPos const&, bool);
    void getTearingDown()const;
    void _clientHandleRemoveOwnedEntity(EntityNetId);
    void saveEducationLevelSettings();
//  void setXBLBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void setServerAuthoritativeMovement(bool);
    void findPath(Actor &, int, int, int, NavigationComponent &);
    bool isMultiplayerGame()const;
    void resumePlayer(Player &);
    void getBlockEventCoordinator();
    void getSimPaused();
    void getDifficulty()const;
    void registerTemporaryPointer(_TickPtr &);
    void getAutonomousLoadedEntities();
    void forEachDimension(std::function<bool (Dimension &)>);
//  void broadcastBossEvent(BossEventUpdateType); //TODO: incomplete function definition
    void _saveSomeChunks();
    void getDefaultGameType()const;
    bool isClientSide()const;
    void getBehaviorFactory()const;
    void getAutonomousInactiveEntity(ActorUniqueID)const;
    void getSavedData()const;
    void findPlayer(std::function<bool (Player const&)>)const;
    void getRandom()const;
//  void addBossEventListener(BossEventListener *); //TODO: incomplete function definition
    void getTickingArea(mce::UUID const&)const;
    void getHitResult();
    void tickEntitySystems();
    void getMultiplayerGameIntent()const;
    void handleStopAllSounds();
    void getTime()const;
    bool hasXBLBroadcast()const;
    void getAdventureSettings();
    void setMultiplayerGame(bool);
    void expandMapByID(ActorUniqueID, bool);
    void getSharedSpawnPos();
    void findPath(Actor &, Actor &, NavigationComponent &);
    void deferTimedStorageActions(bool);
    void getPlayerAbilities(ActorUniqueID const&);
    void getPlayerMovementScoreThreshold()const;
//  void getDimension(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    void getPlatformBroadcastIntent()const;
    void removeAllNonPlayerEntities(ActorUniqueID);
//  void _clientHandleAddWeakRefEntity(EntityNetId, WeakRefT<EntityRefTraits> const&); //TODO: incomplete function definition
    void getDimensionConversionData()const;
    void getNextPlayer(ActorUniqueID const&, bool);
    void shouldCorrectPlayerMovement()const;
    void setPlayerMovementDistanceThreshold(float);
    void _cleanupDisconnectedPlayers();
    void getLevelData();
//  void setPlayerMovementDurationThreshold(std::chrono::duration<long, std::ratio<1l, 1000l>>); //TODO: incomplete function definition
    void saveBiomeData();
//  void removeBossEventListener(BossEventListener *); //TODO: incomplete function definition
    void getBlockComponentFactory();
    void getAutonomousEntity(ActorUniqueID)const;
    void setRemotePlayerEventCoordinator(std::unique_ptr<PlayerEventCoordinator> &&);
    void getSoundPlayer();
    void denyEffect(Vec3 const&);
    void getDefaultSpawn()const;
    void unregisterTemporaryPointer(_TickPtr &);
    void savePlayers();
    bool hasExperimentalGameplayEnabled()const;
    void getSeed();
    void getEventing();
    void areBossEventListenersReady();
    void getUserCount()const;
    void getNumRemotePlayers();
    void getEntityRegistryOwner();
    void saveLevelData();
    void setPlayerMovementScoreThreshold(float);
    void saveVillages();
//  void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &); //TODO: incomplete function definition
    void _fixEntitiesRegion(std::vector<Actor *> &, BlockSource const&, Dimension &);
    void getSpawnRulesMutable()const;
//  void checkAndHandleMaterial(AABB const&, MaterialType, Actor *); //TODO: incomplete function definition
    void forEachPlayer(std::function<bool (Player &)>);
    void setClientPlayerEventCoordinator(std::unique_ptr<ClientPlayerEventCoordinator> &&);
    void getPlayer(std::string const&)const;
    void setIsExporting(bool);
    std::string getScreenshotsFolder()const;
    void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    void setMsaGamertagsOnly(bool);
    void getClientPlayerEventCoordinator();
    void getGlobalEntities();
    void extinguishFire(BlockSource &, BlockPos const&, unsigned char);
    void addListener(LevelListener &);
    void getMob(ActorUniqueID)const;
    void getActorAnimationGroup()const;
    void suspendAndSave();
//  void setDefaultGameType(GameType); //TODO: incomplete function definition
    void _suspendPlayer(mce::UUID const&);
    void _getClientLevelEventCoordinator();
    void _createMapSavedData(ActorUniqueID const&);
    std::vector<Player *> * getActivePlayers()const;
    void spawnParticleEffect(std::string const&, Vec3 const&, Dimension *);
    bool hasStartWithMapEnabled()const;
    void _getServerLevelEventCoordinator();
    void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    void tickEntities();
    void getTickingOffsets()const;
    bool hasPlatformBroadcast()const;
    void _handlePlayerSuspension();
    void getBehaviorTreeGroup()const;
    void save();
    void getActorFactory();
    void getServerPlayerEventCoordinator();
    void useMsaGamertagsOnly()const;
    void _setClientLevelEventCoordinator(std::unique_ptr<ClientLevelEventCoordinator> &&);
//  void handleLevelEvent(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
    void removeListener(LevelListener &);
    bool hasPlatformBroadcastIntent()const;
    void tickedMob();
//  void createDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void getPortalForcer();
    void setHasLockedResourcePack(bool);
    void createPhotoStorage();
    void forEachDimension(std::function<bool (Dimension const&)>)const;
//  void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void getScoreboard();
    void setLANBroadcastIntent(bool);
//  void setPlatformBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void forEachPlayer(std::function<bool (Player const&)>)const;
    void getPlayerList();
    void _pollSaveGameStatistics();
    void setLANBroadcast(bool);
    void animateTick(Actor &);
    void setSimPaused(bool);
    void getPlatformPlayer(std::string const&)const;
//  void createMapSavedData(std::vector<ActorUniqueID> const&, BlockPos const&, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
//  void broadcastLevelEvent(LevelEvent, Vec3 const&, int, Player *); //TODO: incomplete function definition
    void getItemEventCoordinator();
    bool hasCommandsEnabled()const;
    void getPlayer(ActorUniqueID)const;
    void getPlayerColor(Player const&)const;
    void _playerChangeDimension(Player *, ChangeDimensionRequest &);
    unsigned int getActivePlayerCount()const;
    Level(SoundPlayer &, std::unique_ptr<LevelStorage>, IMinecraftEventing &, bool, Scheduler &, StructureManager &, ResourcePackManager &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory>, std::unique_ptr<BlockDefinitionGroup>);
    void getTickedMobCountPrevious()const;
    void getPlayerList()const;
    void updateWeather(float, int, float, int);
    void sendAllPlayerAbilities(Player const&);
//  void broadcastLevelEvent(LevelEvent, CompoundTag const&, Player *); //TODO: incomplete function definition
//  void handleSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void getEntityDefinitions()const;
//  void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, Block const&, Player *); //TODO: incomplete function definition
    void getRecipes()const;
    void _syncTime(int);
    void getEntitySystems();
    void getLevelData()const;
    void getWireframeQueue();
    void setLevelId(std::string);
    void _checkUserStorage();
    void getGameRules()const;
    void getSpawnRules()const;
    void getPlayerFromServerId(std::string const&)const;
    void getEducationLevelSettings()const;
    void setCorrectPlayerMovement(bool);
    void getPrevPlayer(ActorUniqueID const&, bool);
    void setBlockEventCoordinator(std::unique_ptr<BlockEventCoordinator> &&);
    void getLANBroadcast()const;
    void getXBLBroadcastIntent()const;
    void forceFlushRemovedPlayers();
    void copyAndLockMap(ActorUniqueID, ActorUniqueID);
    void setDefaultSpawn(BlockPos const&);
    void setPacketSender(PacketSender *);
    void getDefaultAbilities();
    void removeAutonomousEntity(Actor *, LevelChunk *);
    void getLevelStorage()const;
    void handleStopSoundEvent(std::string const&);
    void getClientTickingOffsets()const;
    void getPlayerMovementDurationThreshold()const;
    void setTime(int);
//  void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition
    void suspendPlayer(Player &);
    void _isSavingRequired()const;
    void explode(BlockSource &, Actor *, Vec3 const&, float, bool, bool, float, bool);
    bool hasXBLBroadcastIntent()const;
    void _loadAutonomousEntities();
    void getPlayerByXuid(std::string const&)const;
    void setPlayerAbilities(ActorUniqueID const&, Abilities);
    void getLevelStorage();
    void getChunkTickRange()const;
    void getGameRules();
    void getRuntimeEntity(ActorRuntimeID, bool)const;
//  void getSpecialMultiplier(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void forceRemoveEntity(Actor &);
    void _clientHandleRemoveWeakRefEntity(EntityNetId);
    void getGlobalBlockPalette()const;
    void getRemotePlayerEventCoordinator();
    void getNetherScale()const;
    namespace CompareLevelChunkQueuedSavingElement {

        void operator()(Level::LevelChunkQueuedSavingElement const&, Level::LevelChunkQueuedSavingElement const&);
    };
    class LevelChunkQueuedSavingElement {

    public:
//      LevelChunkQueuedSavingElement(ChunkPos, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
    };
};

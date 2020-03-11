#pragma once

#include "../pack/ResourcePackManager.h"
#include "./LevelData.h"
#include <string>
#include "../../unmapped/ClientLevelEventCoordinator.h"
#include "../../unmapped/Dimension.h"
#include "../../unmapped/_TickPtr.h"
#include "../util/Color.h"
#include "../actor/damagesource/ActorDamageSource.h"
#include <ratio>
#include "../actor/unmapped/ActorDefinitionIdentifier.h"
#include "../block/unmapped/BlockComponentFactory.h"
#include "../actor/unmapped/ActorUniqueID.h"
#include "../../unmapped/ServerPlayerEventCoordinator.h"
#include "./LevelListener.h"
#include "../util/Vec3.h"
#include "./Level.h"
#include "../../unmapped/TextureUVCoordinateSet.h"
#include "../block/BlockLegacy.h"
#include "../Scheduler.h"
#include <functional>
#include "../../unmapped/ServerLevelEventCoordinator.h"
#include "../actor/unmapped/ActorEventCoordinator.h"
#include "../../unmapped/PlayerEventCoordinator.h"
#include "../../unmapped/MolangVariableMap.h"
#include "storage/LevelStorage.h"
#include "./LevelChunk.h"
#include "../../unmapped/IWorldRegistriesProvider.h"
#include "../../unmapped/HashedString.h"
#include "../../unmapped/EducationLevelSettings.h"
#include "../../unmapped/ChangeDimensionRequest.h"
#include "../block/unmapped/BlockDefinitionGroup.h"
#include "../actor/Player.h"
#include "../network/packet/sender/PacketSender.h"
#include "../eventing/IMinecraftEventing.h"
#include "../../unmapped/StructureManager.h"
#include "../block/unmapped/BlockSource.h"
#include "../../unmapped/ClientPlayerEventCoordinator.h"
#include "../network/packet/BossEventPacket.h"
#include "../util/BlockPos.h"
#include "../../unmapped/EntityNetId.h"
#include "../../unmapped/IEntityRegistryOwner.h"
#include "../item/unmapped/ItemEventCoordinator.h"
#include "../nbt/CompoundTag.h"
#include "../network/NetEventCallback.h"
#include "../block/unmapped/BlockEventCoordinator.h"
#include "../../unmapped/TagRegistry.h"
#include "../../mce/UUID.h"
#include "./LevelSettings.h"
#include "../../unmapped/Abilities.h"
#include <memory>
#include "../../unmapped/SoundPlayer.h"
#include "../block/unmapped/BlockSourceListener.h"
#include "../actor/unmapped/ActorRuntimeID.h"
#include "../command/orgin/CommandOrigin.h"
#include "../../unmapped/NavigationComponent.h"
#include <vector>
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../../unmapped/Block.h"


class Level : BlockSourceListener, IWorldRegistriesProvider {

public:
    virtual ~Level();
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
//  virtual void setDifficulty(Difficulty); //TODO: incomplete function definition
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
//  virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion); //TODO: incomplete function definition
    virtual void getTagRegistry();
    virtual void setFinishedInitializing();

    void getIOTasksGroup();
    void getEntitySystems();
    void getActorFactory();
    void getActorInfoRegistry();
    void getSimPaused();
    void getEntityRegistryOwner();
    void getClientTickingOffsets()const;
    void getActivePlayers()const;
    void setSimPaused(bool);
    void getSoundPlayer();
    void getTickingOffsets()const;
    void getRegisteredBorderBlock()const;
    void getSyncTasksGroup();
    std::string createUniqueLevelID(int);
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
//  void setDefaultGameType(GameType); //TODO: incomplete function definition
    void _resetBiomeData();
    void _loadBiomeData();
    void getCurrentTick()const;
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
//  void createDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition
//  void getDimension(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    void forEachDimension(std::function<bool (Dimension &)>);
    void forEachDimension(std::function<bool (Dimension const&)>)const;
    void getChunkTickRange()const;
    void getLevelData()const;
    void getPortalForcer();
    void requestPlayerChangeDimension(Player &, std::unique_ptr<ChangeDimensionRequest, std::default_delete<ChangeDimensionRequest>>);
    void _handleChangeDimensionRequests();
//  void entityChangeDimension(Actor &, AutomaticID<Dimension, int>); //TODO: incomplete function definition
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
//  void checkAndHandleMaterial(AABB const&, MaterialType, Actor *); //TODO: incomplete function definition
//  void checkMaterial(AABB const&, MaterialType, Actor *); //TODO: incomplete function definition
    void _syncTime(int);
    bool isClientSide()const;
    void _cleanupDisconnectedPlayers();
    void _getServerLevelEventCoordinator();
    void fetchEntity(ActorUniqueID, bool)const;
    void getGameRules();
    void tickEntities();
    void setTime(int);
    void getTime()const;
    void forEachPlayer(std::function<bool (Player &)>);
    void getActivePlayerCount()const;
    void tickEntitySystems();
    void _saveSomeChunks();
    void _isSavingRequired()const;
    void _pollSaveGameStatistics();
    void saveDirtyChunks();
    void findPath(Actor &, int, int, int, NavigationComponent &);
    void findPath(Actor &, Actor &, NavigationComponent &);
//  void broadcastLevelEvent(LevelEvent, Vec3 const&, int, Player *); //TODO: incomplete function definition
//  void broadcastLevelEvent(LevelEvent, CompoundTag const&, Player *); //TODO: incomplete function definition
//  void playSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void getPrimaryLocalPlayer()const;
//  void playSound(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
//  void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
//  void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
//  void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
//  void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
//  void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, int, Player *); //TODO: incomplete function definition
//  void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, Block const&, Player *); //TODO: incomplete function definition
//  void handleLevelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
//  void handleLevelEvent(LevelEvent, CompoundTag const&); //TODO: incomplete function definition
//  void handleSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition
    void handleSoundEvent(std::string const&, Vec3 const&, float, float);
    void handleStopSoundEvent(std::string const&);
    void handleStopAllSounds();
//  void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool); //TODO: incomplete function definition
//  void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition
    void getDifficulty()const;
    void getNextRuntimeID();
    void getActorEventCoordinator();
    void _validatePlayerName(Player &);
    void getNewPlayerId()const;
    void suspendPlayer(Player &);
    void resumePlayer(Player &);
    void removeAllNonPlayerEntities(ActorUniqueID);
    void getRuntimeEntity(ActorRuntimeID, bool)const;
    void findPlayer(std::function<bool (Player const&)>)const;
    void getScoreboard();
    void forceFlushRemovedPlayers();
    void levelCleanupQueueEntityRemoval(std::unique_ptr<Actor, std::default_delete<Actor>> &&, bool);
    void registerTemporaryPointer(_TickPtr &);
    void unregisterTemporaryPointer(_TickPtr &);
    void getMob(ActorUniqueID)const;
    void removeListener(LevelListener &);
    void _tickTemporaryPointers();
    void _clientHandleAddOwnedEntity(EntityNetId);
//  void _clientHandleAddWeakRefEntity(EntityNetId, WeakRefT<EntityRefTraits> const&); //TODO: incomplete function definition
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
//  void setXBLBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void getXBLBroadcastIntent()const;
    bool hasXBLBroadcastIntent()const;
//  void setXBLBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
    void getXBLBroadcastMode()const;
    bool hasXBLBroadcast()const;
//  void setPlatformBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition
    void getPlatformBroadcastIntent()const;
    bool hasPlatformBroadcastIntent()const;
//  void setPlatformBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition
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
//  void broadcastEntityEvent(Actor *, ActorEvent, int); //TODO: incomplete function definition
//  void addBossEventListener(BossEventListener *); //TODO: incomplete function definition
//  void removeBossEventListener(BossEventListener *); //TODO: incomplete function definition
//  void broadcastBossEvent(BossEventUpdateType, ActorUniqueID const&, BossEventPacket const&); //TODO: incomplete function definition
//  void broadcastBossEvent(BossEventUpdateType); //TODO: incomplete function definition
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
    std::string getPlayerNames();
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
    void forEachPlayer(std::function<bool (Player const&)>)const;
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
    bool isUsableLevel(Level *);
    void getTearingDown()const;
    void getPlayerList();
    void getPlayerList()const;
    std::string getPlayerXUID(mce::UUID const&)const;
    std::string getPlayerPlatformOnlineId(mce::UUID const&)const;
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
//  void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &); //TODO: incomplete function definition
//  void upgradeStorageVersion(StorageVersion); //TODO: incomplete function definition
    void save();
    void suspendAndSave();
    void waitAsyncSuspendWork();
    void _destroyEffect(BlockPos const&, Block const&, int);
    void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&);
    void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&);
    void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
    void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float);
//  void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool); //TODO: incomplete function definition
    bool hasCommandsEnabled()const;
    bool hasExperimentalGameplayEnabled()const;
    void useMsaGamertagsOnly()const;
    void setMsaGamertagsOnly(bool);
//  void getSpecialMultiplier(AutomaticID<Dimension, int>); //TODO: incomplete function definition
    void getNewUniqueID();
    bool isExporting()const;
    void setIsExporting(bool);
    void getSavedData()const;
    std::string getScreenshotsFolder()const;
    std::string getLevelId()const;
    void setLevelId(std::string);
    bool isEdu()const;
    void getMapSavedData(ActorUniqueID);
    void _loadMapData(ActorUniqueID const&);
    void getMapSavedData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void requestMapInfo(ActorUniqueID);
//  void createMapSavedData(ActorUniqueID const&, BlockPos const&, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
//  void createMapSavedData(std::vector<ActorUniqueID, std::allocator<ActorUniqueID>> const&, BlockPos const&, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition
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
//  void setPlayerMovementDurationThreshold(std::chrono::duration<long, std::ratio<1l, 1000l>>); //TODO: incomplete function definition
};

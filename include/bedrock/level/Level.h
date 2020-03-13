#pragma once

#include "../../unmapped/EducationLevelSettings.h"
#include "../block/unmapped/BlockSourceListener.h"
#include "../../unmapped/EntityNetId.h"
#include <vector>
#include <memory>
#include "../util/ChunkPos.h"
#include "../../unmapped/IWorldRegistriesProvider.h"
#include <string>
#include "../actor/unmapped/ActorRuntimeID.h"
#include <functional>
#include "../../unmapped/Abilities.h"
#include "../actor/unmapped/ActorUniqueID.h"


class Level : BlockSourceListener, IWorldRegistriesProvider {

public:
    class CompareLevelChunkQueuedSavingElement;
    class LevelChunkQueuedSavingElement;

    ~Level(); // _ZN5LevelD2Ev
    virtual void onSourceCreated(BlockSource &); // _ZN5Level15onSourceCreatedER11BlockSource
    virtual void onSourceDestroyed(BlockSource &); // _ZN5Level17onSourceDestroyedER11BlockSource
    virtual void initialize(std::string const&, LevelSettings const&, LevelData *, std::string const*); // _ZN5Level10initializeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK13LevelSettingsP9LevelDataPS6_
    virtual void startLeaveGame(); // _ZN5Level14startLeaveGameEv
    virtual void addEntity(BlockSource &, std::unique_ptr<Actor>); // _ZN5Level9addEntityER11BlockSourceSt10unique_ptrI5ActorSt14default_deleteIS3_EE
    virtual void addGlobalEntity(BlockSource &, std::unique_ptr<Actor>); // _ZN5Level15addGlobalEntityER11BlockSourceSt10unique_ptrI5ActorSt14default_deleteIS3_EE
    virtual void addAutonomousEntity(BlockSource &, std::unique_ptr<Actor>); // _ZN5Level19addAutonomousEntityER11BlockSourceSt10unique_ptrI5ActorSt14default_deleteIS3_EE
    virtual void addPlayer(std::unique_ptr<Player>); // _ZN5Level9addPlayerESt10unique_ptrI6PlayerSt14default_deleteIS1_EE
    virtual void takeEntity(ActorUniqueID); // _ZN5Level10takeEntityE13ActorUniqueID
    virtual void borrowEntity(ActorUniqueID, LevelChunk *); // _ZN5Level12borrowEntityE13ActorUniqueIDP10LevelChunk
    virtual void getCurrentServerTick()const; // _ZNK5Level20getCurrentServerTickEv
    virtual void getBiomeRegistry()const; // _ZNK5Level16getBiomeRegistryEv
    virtual void getBiomeRegistry(); // _ZN5Level16getBiomeRegistryEv
    virtual void getBlockPalette()const; // _ZNK5Level15getBlockPaletteEv
    virtual void getBlockPalette(); // _ZN5Level15getBlockPaletteEv
    virtual void getFeatureRegistry()const; // _ZNK5Level18getFeatureRegistryEv
    virtual void getFeatureRegistry(); // _ZN5Level18getFeatureRegistryEv
    virtual void getFeatureTypeFactory()const; // _ZNK5Level21getFeatureTypeFactoryEv
    virtual void getFeatureTypeFactory(); // _ZN5Level21getFeatureTypeFactoryEv
    virtual void getJigsawStructureRegistry()const; // _ZNK5Level26getJigsawStructureRegistryEv
    virtual void getJigsawStructureRegistry(); // _ZN5Level26getJigsawStructureRegistryEv
    virtual void getStructureManager(); // _ZN5Level19getStructureManagerEv
    virtual void getStructureManager()const; // _ZNK5Level19getStructureManagerEv
    virtual void getBiomeComponentFactory()const; // _ZNK5Level24getBiomeComponentFactoryEv
    virtual void getBiomeComponentFactory(); // _ZN5Level24getBiomeComponentFactoryEv
    virtual void getSurfaceBuilderRegistry()const; // _ZNK5Level25getSurfaceBuilderRegistryEv
    virtual void getSurfaceBuilderRegistry(); // _ZN5Level25getSurfaceBuilderRegistryEv
    virtual void getDimensionFactory()const; // _ZNK5Level19getDimensionFactoryEv
    virtual void getDimensionFactory(); // _ZN5Level19getDimensionFactoryEv
    virtual void onPlayerDeath(Player &, ActorDamageSource const&); // _ZN5Level13onPlayerDeathER6PlayerRK17ActorDamageSource
    virtual void tick(); // _ZN5Level4tickEv
    virtual void directTickEntities(BlockSource &); // _ZN5Level18directTickEntitiesER11BlockSource
    virtual void updateSleepingPlayerList(); // _ZN5Level24updateSleepingPlayerListEv
//  virtual void setDifficulty(Difficulty); //TODO: incomplete function definition // _ZN5Level13setDifficultyE10Difficulty
    virtual void setCommandsEnabled(bool); // _ZN5Level18setCommandsEnabledEb
    virtual void setWorldTemplateOptionsUnlocked(); // _ZN5Level31setWorldTemplateOptionsUnlockedEv
    virtual void saveAdditionalData(); // _ZN5Level18saveAdditionalDataEv
    virtual void onNewChunk(BlockSource &, LevelChunk &); // _ZN5Level10onNewChunkER11BlockSourceR10LevelChunk
    virtual void onNewChunkFor(Player &, LevelChunk &); // _ZN5Level13onNewChunkForER6PlayerR10LevelChunk
    virtual void onChunkLoaded(LevelChunk &); // _ZN5Level13onChunkLoadedER10LevelChunk
    virtual void queueEntityRemoval(std::unique_ptr<Actor> &&, bool); // _ZN5Level18queueEntityRemovalEOSt10unique_ptrI5ActorSt14default_deleteIS1_EEb
    virtual void removeEntityReferences(Actor &, bool); // _ZN5Level22removeEntityReferencesER5Actorb
    virtual void loadFunctionManager(); // _ZN5Level19loadFunctionManagerEv
    virtual void getClientResourcePackManager()const; // _ZNK5Level28getClientResourcePackManagerEv
    virtual void getServerResourcePackManager()const; // _ZNK5Level28getServerResourcePackManagerEv
    virtual void getTradeTables(); // _ZN5Level14getTradeTablesEv
    virtual void addEntryToTagCache(std::string const&); // _ZN5Level18addEntryToTagCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void dropEntryFromTagCache(std::string const&); // _ZN5Level21dropEntryFromTagCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void clearTagCache(); // _ZN5Level13clearTagCacheEv
    virtual void decrementTagCache(std::string const&, TagRegistry &); // _ZN5Level17decrementTagCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11TagRegistry
    virtual void incrementTagCache(std::string const&, TagRegistry &); // _ZN5Level17incrementTagCacheERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11TagRegistry
//  virtual void runCommand(HashedString const&, CommandOrigin &, CommandOriginSystem, CurrentCmdVersion); //TODO: incomplete function definition // _ZN5Level10runCommandERK12HashedStringR13CommandOrigin19CommandOriginSystem17CurrentCmdVersion
    virtual void getTagRegistry(); // _ZN5Level14getTagRegistryEv
    virtual void setFinishedInitializing(); // _ZN5Level23setFinishedInitializingEv
    void getIOTasksGroup(); // _ZN5Level15getIOTasksGroupEv
    void getEntitySystems(); // _ZN5Level16getEntitySystemsEv
    void getActorFactory(); // _ZN5Level15getActorFactoryEv
    void getActorInfoRegistry(); // _ZN5Level20getActorInfoRegistryEv
    void getSimPaused(); // _ZN5Level12getSimPausedEv
    void getEntityRegistryOwner(); // _ZN5Level22getEntityRegistryOwnerEv
    void getClientTickingOffsets()const; // _ZNK5Level23getClientTickingOffsetsEv
    std::vector<Player *> * getActivePlayers()const; // _ZNK5Level16getActivePlayersEv
    void setSimPaused(bool); // _ZN5Level12setSimPausedEb
    void getSoundPlayer(); // _ZN5Level14getSoundPlayerEv
    void getTickingOffsets()const; // _ZNK5Level17getTickingOffsetsEv
    void getRegisteredBorderBlock()const; // _ZNK5Level24getRegisteredBorderBlockEv
    void getSyncTasksGroup(); // _ZN5Level17getSyncTasksGroupEv
    std::string createUniqueLevelID(int); // _ZN5Level19createUniqueLevelIDB5cxx11Ei
    void createRandomSeed(); // _ZN5Level16createRandomSeedEv
    Level(SoundPlayer &, std::unique_ptr<LevelStorage>, IMinecraftEventing &, bool, Scheduler &, StructureManager &, ResourcePackManager &, IEntityRegistryOwner &, std::unique_ptr<BlockComponentFactory>, std::unique_ptr<BlockDefinitionGroup>); // _ZN5LevelC2ER11SoundPlayerSt10unique_ptrI12LevelStorageSt14default_deleteIS3_EER18IMinecraftEventingbR9SchedulerR16StructureManagerR19ResourcePackManagerR20IEntityRegistryOwnerS2_I21BlockComponentFactoryS4_ISH_EES2_I20BlockDefinitionGroupS4_ISK_EE
    void addListener(LevelListener &); // _ZN5Level11addListenerER13LevelListener
    void setRemotePlayerEventCoordinator(std::unique_ptr<PlayerEventCoordinator> &&); // _ZN5Level31setRemotePlayerEventCoordinatorEOSt10unique_ptrI22PlayerEventCoordinatorSt14default_deleteIS1_EE
    void setServerPlayerEventCoordinator(std::unique_ptr<ServerPlayerEventCoordinator> &&); // _ZN5Level31setServerPlayerEventCoordinatorEOSt10unique_ptrI28ServerPlayerEventCoordinatorSt14default_deleteIS1_EE
    void setClientPlayerEventCoordinator(std::unique_ptr<ClientPlayerEventCoordinator> &&); // _ZN5Level31setClientPlayerEventCoordinatorEOSt10unique_ptrI28ClientPlayerEventCoordinatorSt14default_deleteIS1_EE
    void setActorEventCoordinator(std::unique_ptr<ActorEventCoordinator> &&); // _ZN5Level24setActorEventCoordinatorEOSt10unique_ptrI21ActorEventCoordinatorSt14default_deleteIS1_EE
    void _setClientLevelEventCoordinator(std::unique_ptr<ClientLevelEventCoordinator> &&); // _ZN5Level31_setClientLevelEventCoordinatorEOSt10unique_ptrI27ClientLevelEventCoordinatorSt14default_deleteIS1_EE
    void _setServerLevelEventCoordinator(std::unique_ptr<ServerLevelEventCoordinator> &&); // _ZN5Level31_setServerLevelEventCoordinatorEOSt10unique_ptrI27ServerLevelEventCoordinatorSt14default_deleteIS1_EE
    void setBlockEventCoordinator(std::unique_ptr<BlockEventCoordinator> &&); // _ZN5Level24setBlockEventCoordinatorEOSt10unique_ptrI21BlockEventCoordinatorSt14default_deleteIS1_EE
    void setItemEventCoordinator(std::unique_ptr<ItemEventCoordinator> &&); // _ZN5Level23setItemEventCoordinatorEOSt10unique_ptrI20ItemEventCoordinatorSt14default_deleteIS1_EE
//  void setDefaultGameType(GameType); //TODO: incomplete function definition // _ZN5Level18setDefaultGameTypeE8GameType
    void _resetBiomeData(); // _ZN5Level15_resetBiomeDataEv
    void _loadBiomeData(); // _ZN5Level14_loadBiomeDataEv
    Tick* getCurrentTick()const; // _ZNK5Level14getCurrentTickEv
    void createPhotoStorage(); // _ZN5Level18createPhotoStorageEv
    void _loadAutonomousEntities(); // _ZN5Level23_loadAutonomousEntitiesEv
    void getEventing(); // _ZN5Level11getEventingEv
    void saveGameData(); // _ZN5Level12saveGameDataEv
    void saveVillages(); // _ZN5Level12saveVillagesEv
    void saveBiomeData(); // _ZN5Level13saveBiomeDataEv
    void setNetEventCallback(NetEventCallback *); // _ZN5Level19setNetEventCallbackEP16NetEventCallback
    void setPacketSender(PacketSender *); // _ZN5Level15setPacketSenderEP12PacketSender
    void _removeAllPlayers(); // _ZN5Level17_removeAllPlayersEv
    bool isLeaveGameDone(); // _ZN5Level15isLeaveGameDoneEv
//  void createDimension(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN5Level15createDimensionE11AutomaticIDI9DimensioniE
//  void getDimension(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition // _ZNK5Level12getDimensionE11AutomaticIDI9DimensioniE
    void forEachDimension(std::function<bool (Dimension &)>); // _ZN5Level16forEachDimensionESt8functionIFbR9DimensionEE
    void forEachDimension(std::function<bool (Dimension const&)>)const; // _ZNK5Level16forEachDimensionESt8functionIFbRK9DimensionEE
    void getChunkTickRange()const; // _ZNK5Level17getChunkTickRangeEv
    void getLevelData()const; // _ZNK5Level12getLevelDataEv
    void getPortalForcer(); // _ZN5Level15getPortalForcerEv
    void requestPlayerChangeDimension(Player &, std::unique_ptr<ChangeDimensionRequest>); // _ZN5Level28requestPlayerChangeDimensionER6PlayerSt10unique_ptrI22ChangeDimensionRequestSt14default_deleteIS3_EE
    void _handleChangeDimensionRequests(); // _ZN5Level30_handleChangeDimensionRequestsEv
//  void entityChangeDimension(Actor &, AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN5Level21entityChangeDimensionER5Actor11AutomaticIDI9DimensioniE
    void getDimensionConversionData()const; // _ZNK5Level26getDimensionConversionDataEv
    void _playerChangeDimension(Player *, ChangeDimensionRequest &); // _ZN5Level22_playerChangeDimensionEP6PlayerR22ChangeDimensionRequest
    void forceRemoveEntity(Actor &); // _ZN5Level17forceRemoveEntityER5Actor
    void getSharedSpawnPos(); // _ZN5Level17getSharedSpawnPosEv
    void getPlayer(ActorUniqueID)const; // _ZNK5Level9getPlayerE13ActorUniqueID
    bool isPlayerSuspended(Player &)const; // _ZNK5Level17isPlayerSuspendedER6Player
    void _handlePlayerSuspension(); // _ZN5Level23_handlePlayerSuspensionEv
    void _suspendPlayer(mce::UUID const&); // _ZN5Level14_suspendPlayerERKN3mce4UUIDE
    void _resumePlayer(mce::UUID const&); // _ZN5Level13_resumePlayerERKN3mce4UUIDE
    void _fixEntitiesRegion(std::vector<Actor *> &, BlockSource const&, Dimension &); // _ZN5Level18_fixEntitiesRegionERSt6vectorIP5ActorSaIS2_EERK11BlockSourceR9Dimension
//  void checkAndHandleMaterial(AABB const&, MaterialType, Actor *); //TODO: incomplete function definition // _ZN5Level22checkAndHandleMaterialERK4AABB12MaterialTypeP5Actor
//  void checkMaterial(AABB const&, MaterialType, Actor *); //TODO: incomplete function definition // _ZN5Level13checkMaterialERK4AABB12MaterialTypeP5Actor
    void _syncTime(int); // _ZN5Level9_syncTimeEi
    bool isClientSide()const; // _ZNK5Level12isClientSideEv
    void _cleanupDisconnectedPlayers(); // _ZN5Level27_cleanupDisconnectedPlayersEv
    void _getServerLevelEventCoordinator(); // _ZN5Level31_getServerLevelEventCoordinatorEv
    void fetchEntity(ActorUniqueID, bool)const; // _ZNK5Level11fetchEntityE13ActorUniqueIDb
    void getGameRules(); // _ZN5Level12getGameRulesEv
    void tickEntities(); // _ZN5Level12tickEntitiesEv
    void setTime(int); // _ZN5Level7setTimeEi
    void getTime()const; // _ZNK5Level7getTimeEv
    void forEachPlayer(std::function<bool (Player &)>); // _ZN5Level13forEachPlayerESt8functionIFbR6PlayerEE
    unsigned int getActivePlayerCount()const; // _ZNK5Level20getActivePlayerCountEv
    void tickEntitySystems(); // _ZN5Level17tickEntitySystemsEv
    void _saveSomeChunks(); // _ZN5Level15_saveSomeChunksEv
    void _isSavingRequired()const; // _ZNK5Level17_isSavingRequiredEv
    void _pollSaveGameStatistics(); // _ZN5Level23_pollSaveGameStatisticsEv
    void saveDirtyChunks(); // _ZN5Level15saveDirtyChunksEv
    void findPath(Actor &, int, int, int, NavigationComponent &); // _ZN5Level8findPathER5ActoriiiR19NavigationComponent
    void findPath(Actor &, Actor &, NavigationComponent &); // _ZN5Level8findPathER5ActorS1_R19NavigationComponent
//  void broadcastLevelEvent(LevelEvent, Vec3 const&, int, Player *); //TODO: incomplete function definition // _ZN5Level19broadcastLevelEventE10LevelEventRK4Vec3iP6Player
//  void broadcastLevelEvent(LevelEvent, CompoundTag const&, Player *); //TODO: incomplete function definition // _ZN5Level19broadcastLevelEventE10LevelEventRK11CompoundTagP6Player
//  void playSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN5Level9playSoundER11BlockSource15LevelSoundEventRK4Vec3iRK25ActorDefinitionIdentifierbb
    void getPrimaryLocalPlayer()const; // _ZNK5Level21getPrimaryLocalPlayerEv
//  void playSound(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN5Level9playSoundE15LevelSoundEventRK4Vec3iRK25ActorDefinitionIdentifierbb
//  void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN5Level21playSynchronizedSoundER11BlockSource15LevelSoundEventRK4Vec3RK5BlockRK25ActorDefinitionIdentifierbb
//  void playSynchronizedSound(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN5Level21playSynchronizedSoundER11BlockSource15LevelSoundEventRK4Vec3iRK25ActorDefinitionIdentifierbb
//  void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN5Level19broadcastSoundEventER11BlockSource15LevelSoundEventRK4Vec3iRK25ActorDefinitionIdentifierbb
//  void broadcastSoundEvent(BlockSource &, LevelSoundEvent, Vec3 const&, Block const&, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN5Level19broadcastSoundEventER11BlockSource15LevelSoundEventRK4Vec3RK5BlockRK25ActorDefinitionIdentifierbb
//  void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, int, Player *); //TODO: incomplete function definition // _ZN5Level23broadcastDimensionEventER11BlockSource10LevelEventRK4Vec3iP6Player
//  void broadcastDimensionEvent(BlockSource &, LevelEvent, Vec3 const&, Block const&, Player *); //TODO: incomplete function definition // _ZN5Level23broadcastDimensionEventER11BlockSource10LevelEventRK4Vec3RK5BlockP6Player
//  void handleLevelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition // _ZN5Level16handleLevelEventE10LevelEventRK4Vec3i
//  void handleLevelEvent(LevelEvent, CompoundTag const&); //TODO: incomplete function definition // _ZN5Level16handleLevelEventE10LevelEventRK11CompoundTag
//  void handleSoundEvent(LevelSoundEvent, Vec3 const&, int, ActorDefinitionIdentifier const&, bool, bool); //TODO: incomplete function definition // _ZN5Level16handleSoundEventE15LevelSoundEventRK4Vec3iRK25ActorDefinitionIdentifierbb
    void handleSoundEvent(std::string const&, Vec3 const&, float, float); // _ZN5Level16handleSoundEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3ff
    void handleStopSoundEvent(std::string const&); // _ZN5Level20handleStopSoundEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void handleStopAllSounds(); // _ZN5Level19handleStopAllSoundsEv
//  void addParticle(ParticleType, Vec3 const&, Vec3 const&, int, CompoundTag const*, bool); //TODO: incomplete function definition // _ZN5Level11addParticleE12ParticleTypeRK4Vec3S3_iPK11CompoundTagb
//  void sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int); //TODO: incomplete function definition // _ZN5Level24sendServerLegacyParticleE12ParticleTypeRK4Vec3S3_i
    void getDifficulty()const; // _ZNK5Level13getDifficultyEv
    void getNextRuntimeID(); // _ZN5Level16getNextRuntimeIDEv
    void getActorEventCoordinator(); // _ZN5Level24getActorEventCoordinatorEv
    void _validatePlayerName(Player &); // _ZN5Level19_validatePlayerNameER6Player
    void getNewPlayerId()const; // _ZNK5Level14getNewPlayerIdEv
    void suspendPlayer(Player &); // _ZN5Level13suspendPlayerER6Player
    void resumePlayer(Player &); // _ZN5Level12resumePlayerER6Player
    void removeAllNonPlayerEntities(ActorUniqueID); // _ZN5Level26removeAllNonPlayerEntitiesE13ActorUniqueID
    void getRuntimeEntity(ActorRuntimeID, bool)const; // _ZNK5Level16getRuntimeEntityE14ActorRuntimeIDb
    void findPlayer(std::function<bool (Player const&)>)const; // _ZNK5Level10findPlayerESt8functionIFbRK6PlayerEE
    void getScoreboard(); // _ZN5Level13getScoreboardEv
    void forceFlushRemovedPlayers(); // _ZN5Level24forceFlushRemovedPlayersEv
    void levelCleanupQueueEntityRemoval(std::unique_ptr<Actor> &&, bool); // _ZN5Level30levelCleanupQueueEntityRemovalEOSt10unique_ptrI5ActorSt14default_deleteIS1_EEb
    void registerTemporaryPointer(_TickPtr &); // _ZN5Level24registerTemporaryPointerER8_TickPtr
    void unregisterTemporaryPointer(_TickPtr &); // _ZN5Level26unregisterTemporaryPointerER8_TickPtr
    void getMob(ActorUniqueID)const; // _ZNK5Level6getMobE13ActorUniqueID
    void removeListener(LevelListener &); // _ZN5Level14removeListenerER13LevelListener
    void _tickTemporaryPointers(); // _ZN5Level22_tickTemporaryPointersEv
    void _clientHandleAddOwnedEntity(EntityNetId); // _ZN5Level27_clientHandleAddOwnedEntityE11EntityNetId
//  void _clientHandleAddWeakRefEntity(EntityNetId, WeakRefT<EntityRefTraits> const&); //TODO: incomplete function definition // _ZN5Level29_clientHandleAddWeakRefEntityE11EntityNetIdRK8WeakRefTI15EntityRefTraitsE
    void _clientHandleRemoveOwnedEntity(EntityNetId); // _ZN5Level30_clientHandleRemoveOwnedEntityE11EntityNetId
    void _clientHandleRemoveWeakRefEntity(EntityNetId); // _ZN5Level32_clientHandleRemoveWeakRefEntityE11EntityNetId
    void explode(BlockSource &, Actor *, Vec3 const&, float, bool, bool, float, bool); // _ZN5Level7explodeER11BlockSourceP5ActorRK4Vec3fbbfb
    void spawnParticleEffect(std::string const&, Vec3 const&, Dimension *); // _ZN5Level19spawnParticleEffectERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3P9Dimension
    void spawnParticleEffect(std::string const&, Actor const&, Vec3 const&); // _ZN5Level19spawnParticleEffectERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK5ActorRK4Vec3
    void denyEffect(Vec3 const&); // _ZN5Level10denyEffectERK4Vec3
    void potionSplash(Vec3 const&, Color const&, bool); // _ZN5Level12potionSplashERK4Vec3RK5Colorb
    void extinguishFire(BlockSource &, BlockPos const&, unsigned char); // _ZN5Level14extinguishFireER11BlockSourceRK8BlockPosh
    void saveLevelData(); // _ZN5Level13saveLevelDataEv
    void setMultiplayerGameIntent(bool); // _ZN5Level24setMultiplayerGameIntentEb
    void getMultiplayerGameIntent()const; // _ZNK5Level24getMultiplayerGameIntentEv
    void setMultiplayerGame(bool); // _ZN5Level18setMultiplayerGameEb
    bool isMultiplayerGame()const; // _ZNK5Level17isMultiplayerGameEv
    void setLANBroadcastIntent(bool); // _ZN5Level21setLANBroadcastIntentEb
    void getLANBroadcastIntent()const; // _ZNK5Level21getLANBroadcastIntentEv
    void setLANBroadcast(bool); // _ZN5Level15setLANBroadcastEb
    void getLANBroadcast()const; // _ZNK5Level15getLANBroadcastEv
//  void setXBLBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition // _ZN5Level21setXBLBroadcastIntentEN6Social18GamePublishSettingE
    void getXBLBroadcastIntent()const; // _ZNK5Level21getXBLBroadcastIntentEv
    bool hasXBLBroadcastIntent()const; // _ZNK5Level21hasXBLBroadcastIntentEv
//  void setXBLBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition // _ZN5Level19setXBLBroadcastModeEN6Social18GamePublishSettingE
    void getXBLBroadcastMode()const; // _ZNK5Level19getXBLBroadcastModeEv
    bool hasXBLBroadcast()const; // _ZNK5Level15hasXBLBroadcastEv
//  void setPlatformBroadcastIntent(Social::GamePublishSetting); //TODO: incomplete function definition // _ZN5Level26setPlatformBroadcastIntentEN6Social18GamePublishSettingE
    void getPlatformBroadcastIntent()const; // _ZNK5Level26getPlatformBroadcastIntentEv
    bool hasPlatformBroadcastIntent()const; // _ZNK5Level26hasPlatformBroadcastIntentEv
//  void setPlatformBroadcastMode(Social::GamePublishSetting); //TODO: incomplete function definition // _ZN5Level24setPlatformBroadcastModeEN6Social18GamePublishSettingE
    void getPlatformBroadcastMode()const; // _ZNK5Level24getPlatformBroadcastModeEv
    bool hasPlatformBroadcast()const; // _ZNK5Level20hasPlatformBroadcastEv
    void setHasLockedBehaviorPack(bool); // _ZN5Level24setHasLockedBehaviorPackEb
    void setHasLockedResourcePack(bool); // _ZN5Level24setHasLockedResourcePackEb
    void animateTick(Actor &); // _ZN5Level11animateTickER5Actor
    void getSeed(); // _ZN5Level7getSeedEv
    void setDefaultSpawn(BlockPos const&); // _ZN5Level15setDefaultSpawnERK8BlockPos
    void getDefaultSpawn()const; // _ZNK5Level15getDefaultSpawnEv
    void getDefaultGameType()const; // _ZNK5Level18getDefaultGameTypeEv
    void getRemotePlayerEventCoordinator(); // _ZN5Level31getRemotePlayerEventCoordinatorEv
    void getServerPlayerEventCoordinator(); // _ZN5Level31getServerPlayerEventCoordinatorEv
    void getClientPlayerEventCoordinator(); // _ZN5Level31getClientPlayerEventCoordinatorEv
    void getBlockEventCoordinator(); // _ZN5Level24getBlockEventCoordinatorEv
    void _getClientLevelEventCoordinator(); // _ZN5Level31_getClientLevelEventCoordinatorEv
    void getItemEventCoordinator(); // _ZN5Level23getItemEventCoordinatorEv
//  void broadcastEntityEvent(Actor *, ActorEvent, int); //TODO: incomplete function definition // _ZN5Level20broadcastEntityEventEP5Actor10ActorEventi
//  void addBossEventListener(BossEventListener *); //TODO: incomplete function definition // _ZN5Level20addBossEventListenerEP17BossEventListener
//  void removeBossEventListener(BossEventListener *); //TODO: incomplete function definition // _ZN5Level23removeBossEventListenerEP17BossEventListener
//  void broadcastBossEvent(BossEventUpdateType, ActorUniqueID const&, BossEventPacket const&); //TODO: incomplete function definition // _ZN5Level18broadcastBossEventE19BossEventUpdateTypeRK13ActorUniqueIDRK15BossEventPacket
//  void broadcastBossEvent(BossEventUpdateType); //TODO: incomplete function definition // _ZN5Level18broadcastBossEventE19BossEventUpdateType
    void areBossEventListenersReady(); // _ZN5Level26areBossEventListenersReadyEv
    bool hasLevelStorage()const; // _ZNK5Level15hasLevelStorageEv
    void getLevelStorage(); // _ZN5Level15getLevelStorageEv
    void getLevelStorage()const; // _ZNK5Level15getLevelStorageEv
    void getLevelData(); // _ZN5Level12getLevelDataEv
    void getPhotoStorage(); // _ZN5Level15getPhotoStorageEv
    void _saveAllMapData(); // _ZN5Level15_saveAllMapDataEv
    void savePlayers(); // _ZN5Level11savePlayersEv
    void _saveAutonomousEntities(); // _ZN5Level23_saveAutonomousEntitiesEv
    void deferTimedStorageActions(bool); // _ZN5Level24deferTimedStorageActionsEb
    void _checkUserStorage(); // _ZN5Level17_checkUserStorageEv
    void getTickingAreasMgr(); // _ZN5Level18getTickingAreasMgrEv
    void getTickingArea(mce::UUID const&)const; // _ZNK5Level14getTickingAreaERKN3mce4UUIDE
    std::string getPlayerNames(); // _ZN5Level14getPlayerNamesB5cxx11Ev
    void getPlayer(std::string const&)const; // _ZNK5Level9getPlayerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getPlayer(mce::UUID const&)const; // _ZNK5Level9getPlayerERKN3mce4UUIDE
    void getPlayerByXuid(std::string const&)const; // _ZNK5Level15getPlayerByXuidERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getPlayerFromUnknownIdentifier(std::string const&)const; // _ZNK5Level30getPlayerFromUnknownIdentifierERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getNextPlayer(ActorUniqueID const&, bool); // _ZN5Level13getNextPlayerERK13ActorUniqueIDb
    void getPrevPlayer(ActorUniqueID const&, bool); // _ZN5Level13getPrevPlayerERK13ActorUniqueIDb
    void getNumRemotePlayers(); // _ZN5Level19getNumRemotePlayersEv
    void getPlatformPlayer(std::string const&)const; // _ZNK5Level17getPlatformPlayerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getPlayerFromServerId(std::string const&)const; // _ZNK5Level21getPlayerFromServerIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getRuntimePlayer(ActorRuntimeID)const; // _ZNK5Level16getRuntimePlayerE14ActorRuntimeID
    void getRandomPlayer(); // _ZN5Level15getRandomPlayerEv
    void getRandom()const; // _ZNK5Level9getRandomEv
    void getPlayerColor(Player const&)const; // _ZNK5Level14getPlayerColorERK6Player
    void onChunkDiscarded(LevelChunk &); // _ZN5Level16onChunkDiscardedER10LevelChunk
    void removeAutonomousEntity(Actor *, LevelChunk *); // _ZN5Level22removeAutonomousEntityEP5ActorP10LevelChunk
    void forEachPlayer(std::function<bool (Player const&)>)const; // _ZNK5Level13forEachPlayerESt8functionIFbRK6PlayerEE
    void getUserCount()const; // _ZNK5Level12getUserCountEv
    void getUsers(); // _ZN5Level8getUsersEv
    void getUsers()const; // _ZNK5Level8getUsersEv
    void _getValidatedPlayerName(std::string const&); // _ZN5Level23_getValidatedPlayerNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void destroyBlock(BlockSource &, BlockPos const&, bool); // _ZN5Level12destroyBlockER11BlockSourceRK8BlockPosb
    void getSpawner()const; // _ZNK5Level10getSpawnerEv
    void getProjectileFactory()const; // _ZNK5Level20getProjectileFactoryEv
    void getEntityDefinitions()const; // _ZNK5Level20getEntityDefinitionsEv
    void getBlockDefinitions()const; // _ZNK5Level19getBlockDefinitionsEv
    void getBlockComponentFactory(); // _ZN5Level24getBlockComponentFactoryEv
    void getBlockComponentFactory()const; // _ZNK5Level24getBlockComponentFactoryEv
    void getActorAnimationGroup()const; // _ZNK5Level22getActorAnimationGroupEv
    void getActorAnimationControllerGroup()const; // _ZNK5Level32getActorAnimationControllerGroupEv
    void getSpawnRules()const; // _ZNK5Level13getSpawnRulesEv
    void getSpawnGroupRegistry()const; // _ZNK5Level21getSpawnGroupRegistryEv
    void getSpawnRulesMutable()const; // _ZNK5Level20getSpawnRulesMutableEv
    void getBehaviorTreeGroup()const; // _ZNK5Level20getBehaviorTreeGroupEv
    void getBehaviorFactory()const; // _ZNK5Level18getBehaviorFactoryEv
    bool isUsableLevel(Level *); // _ZN5Level13isUsableLevelEPS_
    void getTearingDown()const; // _ZNK5Level14getTearingDownEv
    void getPlayerList(); // _ZN5Level13getPlayerListEv
    void getPlayerList()const; // _ZNK5Level13getPlayerListEv
    std::string getPlayerXUID(mce::UUID const&)const; // _ZNK5Level13getPlayerXUIDB5cxx11ERKN3mce4UUIDE
    std::string getPlayerPlatformOnlineId(mce::UUID const&)const; // _ZNK5Level25getPlayerPlatformOnlineIdB5cxx11ERKN3mce4UUIDE
    void getGlobalEntities(); // _ZN5Level17getGlobalEntitiesEv
    void getAutonomousEntities(); // _ZN5Level21getAutonomousEntitiesEv
    void getAutonomousActiveEntity(ActorUniqueID)const; // _ZNK5Level25getAutonomousActiveEntityE13ActorUniqueID
    void getAutonomousInactiveEntity(ActorUniqueID)const; // _ZNK5Level27getAutonomousInactiveEntityE13ActorUniqueID
    void getAutonomousEntity(ActorUniqueID)const; // _ZNK5Level19getAutonomousEntityE13ActorUniqueID
    void getAutonomousLoadedEntities(); // _ZN5Level27getAutonomousLoadedEntitiesEv
    void getPacketSender()const; // _ZNK5Level15getPacketSenderEv
    void getNetEventCallback()const; // _ZNK5Level19getNetEventCallbackEv
    void getHitResult(); // _ZN5Level12getHitResultEv
    void getLiquidHitResult(); // _ZN5Level18getLiquidHitResultEv
    void getAdventureSettings(); // _ZN5Level20getAdventureSettingsEv
    void getGameRules()const; // _ZNK5Level12getGameRulesEv
    void getDefaultAbilities(); // _ZN5Level19getDefaultAbilitiesEv
    void getWireframeQueue()const; // _ZNK5Level17getWireframeQueueEv
    void getWireframeQueue(); // _ZN5Level17getWireframeQueueEv
    bool hasStartWithMapEnabled()const; // _ZNK5Level22hasStartWithMapEnabledEv
    void getLootTables(); // _ZN5Level13getLootTablesEv
    void updateWeather(float, int, float, int); // _ZN5Level13updateWeatherEfifi
//  void takePicture(cg::ImageBuffer &, Actor *, Actor *, ScreenshotOptions &); //TODO: incomplete function definition // _ZN5Level11takePictureERN2cg11ImageBufferEP5ActorS4_R17ScreenshotOptions
//  void upgradeStorageVersion(StorageVersion); //TODO: incomplete function definition // _ZN5Level21upgradeStorageVersionE14StorageVersion
    void save(); // _ZN5Level4saveEv
    void suspendAndSave(); // _ZN5Level14suspendAndSaveEv
    void waitAsyncSuspendWork(); // _ZN5Level20waitAsyncSuspendWorkEv
    void _destroyEffect(BlockPos const&, Block const&, int); // _ZN5Level14_destroyEffectERK8BlockPosRK5Blocki
    void addParticleEffect(HashedString const&, Vec3 const&, MolangVariableMap const&); // _ZN5Level17addParticleEffectERK12HashedStringRK4Vec3RK17MolangVariableMap
    void addParticleEffect(HashedString const&, Actor const&, HashedString const&, Vec3 const&, MolangVariableMap const&); // _ZN5Level17addParticleEffectERK12HashedStringRK5ActorS2_RK4Vec3RK17MolangVariableMap
    void addTerrainParticleEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float); // _ZN5Level24addTerrainParticleEffectERK8BlockPosRK5BlockRK4Vec3fff
    void addTerrainSlideEffect(BlockPos const&, Block const&, Vec3 const&, float, float, float); // _ZN5Level21addTerrainSlideEffectERK8BlockPosRK5BlockRK4Vec3fff
//  void addBreakingItemParticleEffect(Vec3 const&, ParticleType, TextureUVCoordinateSet const&, bool); //TODO: incomplete function definition // _ZN5Level29addBreakingItemParticleEffectERK4Vec312ParticleTypeRK22TextureUVCoordinateSetb
    bool hasCommandsEnabled()const; // _ZNK5Level18hasCommandsEnabledEv
    bool hasExperimentalGameplayEnabled()const; // _ZNK5Level30hasExperimentalGameplayEnabledEv
    void useMsaGamertagsOnly()const; // _ZNK5Level19useMsaGamertagsOnlyEv
    void setMsaGamertagsOnly(bool); // _ZN5Level19setMsaGamertagsOnlyEb
//  void getSpecialMultiplier(AutomaticID<Dimension, int>); //TODO: incomplete function definition // _ZN5Level20getSpecialMultiplierE11AutomaticIDI9DimensioniE
    void getNewUniqueID(); // _ZN5Level14getNewUniqueIDEv
    bool isExporting()const; // _ZNK5Level11isExportingEv
    void setIsExporting(bool); // _ZN5Level14setIsExportingEb
    void getSavedData()const; // _ZNK5Level12getSavedDataEv
    std::string getScreenshotsFolder()const; // _ZNK5Level20getScreenshotsFolderB5cxx11Ev
    std::string getLevelId()const; // _ZNK5Level10getLevelIdB5cxx11Ev
    void setLevelId(std::string); // _ZN5Level10setLevelIdENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isEdu()const; // _ZNK5Level5isEduEv
    void getMapSavedData(ActorUniqueID); // _ZN5Level15getMapSavedDataE13ActorUniqueID
    void _loadMapData(ActorUniqueID const&); // _ZN5Level12_loadMapDataERK13ActorUniqueID
    void getMapSavedData(std::unique_ptr<CompoundTag> const&); // _ZN5Level15getMapSavedDataERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void requestMapInfo(ActorUniqueID); // _ZN5Level14requestMapInfoE13ActorUniqueID
//  void createMapSavedData(ActorUniqueID const&, BlockPos const&, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition // _ZN5Level18createMapSavedDataERK13ActorUniqueIDRK8BlockPos11AutomaticIDI9DimensioniEi
//  void createMapSavedData(std::vector<ActorUniqueID> const&, BlockPos const&, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition // _ZN5Level18createMapSavedDataERKSt6vectorI13ActorUniqueIDSaIS1_EERK8BlockPos11AutomaticIDI9DimensioniEi
    void _createMapSavedData(ActorUniqueID const&); // _ZN5Level19_createMapSavedDataERK13ActorUniqueID
    void copyAndLockMap(ActorUniqueID, ActorUniqueID); // _ZN5Level14copyAndLockMapE13ActorUniqueIDS0_
    void expandMapByID(ActorUniqueID, bool); // _ZN5Level13expandMapByIDE13ActorUniqueIDb
    void getNetherScale()const; // _ZNK5Level14getNetherScaleEv
    void getPlayerAbilities(ActorUniqueID const&); // _ZN5Level18getPlayerAbilitiesERK13ActorUniqueID
    void setPlayerAbilities(ActorUniqueID const&, Abilities); // _ZN5Level18setPlayerAbilitiesERK13ActorUniqueID9Abilities
    void sendAllPlayerAbilities(Player const&); // _ZN5Level22sendAllPlayerAbilitiesERK6Player
    void tickedMob(); // _ZN5Level9tickedMobEv
    void getTickedMobCountPrevious()const; // _ZNK5Level25getTickedMobCountPreviousEv
    void getGlobalBlockPalette()const; // _ZNK5Level21getGlobalBlockPaletteEv
    void getRecipes()const; // _ZNK5Level10getRecipesEv
    void registerBorderBlock(BlockLegacy const&); // _ZN5Level19registerBorderBlockERK11BlockLegacy
    void getEducationLevelSettings()const; // _ZNK5Level25getEducationLevelSettingsEv
    void setEducationLevelSettings(EducationLevelSettings); // _ZN5Level25setEducationLevelSettingsE22EducationLevelSettings
    void saveEducationLevelSettings(); // _ZN5Level26saveEducationLevelSettingsEv
    void getServerAuthoritativeMovement()const; // _ZNK5Level30getServerAuthoritativeMovementEv
    void setServerAuthoritativeMovement(bool); // _ZN5Level30setServerAuthoritativeMovementEb
    void shouldCorrectPlayerMovement()const; // _ZNK5Level27shouldCorrectPlayerMovementEv
    void setCorrectPlayerMovement(bool); // _ZN5Level24setCorrectPlayerMovementEb
    void getPlayerMovementScoreThreshold()const; // _ZNK5Level31getPlayerMovementScoreThresholdEv
    void setPlayerMovementScoreThreshold(float); // _ZN5Level31setPlayerMovementScoreThresholdEf
    void getPlayerMovementDistanceThreshold()const; // _ZNK5Level34getPlayerMovementDistanceThresholdEv
    void getPlayerMovementDistanceThresholdSqr()const; // _ZNK5Level37getPlayerMovementDistanceThresholdSqrEv
    void setPlayerMovementDistanceThreshold(float); // _ZN5Level34setPlayerMovementDistanceThresholdEf
    void getPlayerMovementDurationThreshold()const; // _ZNK5Level34getPlayerMovementDurationThresholdEv
//  void setPlayerMovementDurationThreshold(std::chrono::duration<long, std::ratio<1l, 1000l>>); //TODO: incomplete function definition // _ZN5Level34setPlayerMovementDurationThresholdENSt6chrono8durationIlSt5ratioILl1ELl1000EEEE
    class CompareLevelChunkQueuedSavingElement {

    public:
        void operator()(Level::LevelChunkQueuedSavingElement const&, Level::LevelChunkQueuedSavingElement const&); // _ZN5Level36CompareLevelChunkQueuedSavingElementclERKNS_29LevelChunkQueuedSavingElementES3_
    };
    class LevelChunkQueuedSavingElement {

    public:
//      LevelChunkQueuedSavingElement(ChunkPos, AutomaticID<Dimension, int>, int); //TODO: incomplete function definition // _ZN5Level29LevelChunkQueuedSavingElementC2E8ChunkPos11AutomaticIDI9DimensioniEi
    };
};

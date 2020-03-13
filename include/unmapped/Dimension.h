#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <memory>
#include "../bedrock/util/Brightness.h"
#include <string>
#include "../bedrock/level/LevelListener.h"
#include "SavedData.h"
#include "../bedrock/util/BlockPos.h"
#include <functional>
#include "../bedrock/util/Vec3.h"


class Dimension : LevelListener, SavedData {

public:
    static long MOON_BRIGHTNESS_PER_PHASE;
    static long CurrentLimboEntitiesVersion;
    static long STRUCTURE_PRUNE_INTERVAL;

    ~Dimension(); // _ZN9DimensionD2Ev
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*); // _ZN9Dimension14onBlockChangedER11BlockSourceRK8BlockPosjRK5BlockS7_iPK21ActorBlockSyncMessage
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int); // _ZN9Dimension12onBlockEventER11BlockSourceiiiii
    virtual void onNewChunk(BlockSource &, LevelChunk &); // _ZN9Dimension10onNewChunkER11BlockSourceR10LevelChunk
    virtual void onChunkLoaded(LevelChunk &); // _ZN9Dimension13onChunkLoadedER10LevelChunk
    virtual void onLevelDestruction(std::string const&); // _ZN9Dimension18onLevelDestructionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void init(); // _ZN9Dimension4initEv
    virtual void tick(); // _ZN9Dimension4tickEv
    virtual void tickRedstone(); // _ZN9Dimension12tickRedstoneEv
    virtual void updateLightRamp(); // _ZN9Dimension15updateLightRampEv
    virtual bool isNaturalDimension()const; // _ZNK9Dimension18isNaturalDimensionEv
    virtual bool isValidSpawn(int, int)const; // _ZNK9Dimension12isValidSpawnEii
    virtual void getFogColor(float)const; // _ZNK9Dimension11getFogColorEf
    virtual void getMaxFogEnd()const; // _ZNK9Dimension12getMaxFogEndEv
    virtual void getMaxFogStart()const; // _ZNK9Dimension14getMaxFogStartEv
    virtual bool isFoggyAt(int, int)const; // _ZNK9Dimension9isFoggyAtEii
    virtual void getCloudHeight()const; // _ZNK9Dimension14getCloudHeightEv
    virtual void getDefaultBiome()const; // _ZNK9Dimension15getDefaultBiomeEv
    virtual void mayRespawn()const; // _ZNK9Dimension10mayRespawnEv
    virtual bool hasGround()const; // _ZNK9Dimension9hasGroundEv
    virtual void getSpawnPos()const; // _ZNK9Dimension11getSpawnPosEv
    virtual void getSpawnYPosition()const; // _ZNK9Dimension17getSpawnYPositionEv
    virtual bool hasBedrockFog(); // _ZN9Dimension13hasBedrockFogEv
    virtual void getClearColorScale(); // _ZN9Dimension18getClearColorScaleEv
    virtual void showSky()const; // _ZNK9Dimension7showSkyEv
    virtual bool isDay()const; // _ZNK9Dimension5isDayEv
    virtual void getSunIntensity(float, Vec3 const&, float)const; // _ZNK9Dimension15getSunIntensityEfRK4Vec3f
    virtual void deserialize(CompoundTag const&); // _ZN9Dimension11deserializeERK11CompoundTag
    virtual void serialize(CompoundTag &)const; // _ZNK9Dimension9serializeER11CompoundTag
    virtual void sendBroadcast(Packet const&, Player *); // _ZN9Dimension13sendBroadcastERK6PacketP6Player
    virtual void startLeaveGame(); // _ZN9Dimension14startLeaveGameEv
    virtual void getTimeOfDay(int, float)const; // _ZNK9Dimension12getTimeOfDayEif
    void setHasWeather(bool); // _ZN9Dimension13setHasWeatherEb
    void getSeaLevel()const; // _ZNK9Dimension11getSeaLevelEv
    void getPostProcessingManager(); // _ZN9Dimension24getPostProcessingManagerEv
    void getHeight()const; // _ZNK9Dimension9getHeightEv
    void getChunkBuildOrderPolicy(); // _ZN9Dimension24getChunkBuildOrderPolicyEv
    void getTaskGroup(); // _ZN9Dimension12getTaskGroupEv
    void getDefaultBrightness()const; // _ZNK9Dimension20getDefaultBrightnessEv
    bool hasWeather()const; // _ZNK9Dimension10hasWeatherEv
    std::string getName()const; // _ZNK9Dimension7getNameB5cxx11Ev
    void getLevelChunkBuilderData(); // _ZN9Dimension24getLevelChunkBuilderDataEv
    void getLevelChunkGarbageCollector()const; // _ZNK9Dimension29getLevelChunkGarbageCollectorEv
    void getLevelChunkGarbageCollector(); // _ZN9Dimension29getLevelChunkGarbageCollectorEv
//  Dimension(Level &, AutomaticID<Dimension, int>, short, Scheduler &, std::string); //TODO: incomplete function definition // _ZN9DimensionC2ER5Level11AutomaticIDIS_iEsR9SchedulerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isRedstoneTick(); // _ZN9Dimension14isRedstoneTickEv
    void addWither(ActorUniqueID const&); // _ZN9Dimension9addWitherERK13ActorUniqueID
    void removeWither(ActorUniqueID const&); // _ZN9Dimension12removeWitherERK13ActorUniqueID
    void removeActorByID(ActorUniqueID const&); // _ZN9Dimension15removeActorByIDERK13ActorUniqueID
    void getEntityIdMap()const; // _ZNK9Dimension14getEntityIdMapEv
    void getPopCap(int, bool)const; // _ZNK9Dimension9getPopCapEib
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool); // _ZN9Dimension16updateBlockLightERK8BlockPos10BrightnessS3_S3_S3_b
    void backgroundTickSeasons(); // _ZN9Dimension21backgroundTickSeasonsEv
    void getLevel()const; // _ZNK9Dimension8getLevelEv
    void forEachPlayer(std::function<bool (Player &)>); // _ZN9Dimension13forEachPlayerESt8functionIFbR6PlayerEE
    bool isLeaveGameDone(); // _ZN9Dimension15isLeaveGameDoneEv
    void getChunkSource()const; // _ZNK9Dimension14getChunkSourceEv
    void getVillageManager()const; // _ZNK9Dimension17getVillageManagerEv
    void forceSaveVillageManager(); // _ZN9Dimension23forceSaveVillageManagerEv
    void tryGarbageCollectStructures(); // _ZN9Dimension27tryGarbageCollectStructuresEv
    void getWorldGenerator()const; // _ZNK9Dimension17getWorldGeneratorEv
    void getOldSkyDarken(float); // _ZN9Dimension15getOldSkyDarkenEf
    void _tickEntityChunkMoves(); // _ZN9Dimension21_tickEntityChunkMovesEv
    void _runChunkGenerationWatchdog(); // _ZN9Dimension27_runChunkGenerationWatchdogEv
    void _captureChunkMapDebugDrawData(); // _ZN9Dimension29_captureChunkMapDebugDrawDataEv
    void transferEntityToUnloadedChunk(Vec3 const&, std::unique_ptr<CompoundTag>); // _ZN9Dimension29transferEntityToUnloadedChunkERK4Vec3St10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    void getSeasons(); // _ZN9Dimension10getSeasonsEv
    void getTimeOfDay(float)const; // _ZNK9Dimension12getTimeOfDayEf
    void getSunAngle(float)const; // _ZNK9Dimension11getSunAngleEf
    void getSunlightDirection(float)const; // _ZNK9Dimension20getSunlightDirectionEf
    void getWeather()const; // _ZNK9Dimension10getWeatherEv
    void getMoonPhase()const; // _ZNK9Dimension12getMoonPhaseEv
    void getMoonBrightness()const; // _ZNK9Dimension17getMoonBrightnessEv
    void getSkyDarken(float)const; // _ZNK9Dimension12getSkyDarkenEf
    void getSkyDarken()const; // _ZNK9Dimension12getSkyDarkenEv
    void getBrightnessRamp()const; // _ZNK9Dimension17getBrightnessRampEv
    void setBrightnessRamp(unsigned int, float); // _ZN9Dimension17setBrightnessRampEjf
    void getSunriseColor(float)const; // _ZNK9Dimension15getSunriseColorEf
    void getSkyColor(Actor const&, float)const; // _ZNK9Dimension11getSkyColorERK5Actorf
    void getSkyColor(BlockSource &, BlockPos const&, float)const; // _ZNK9Dimension11getSkyColorER11BlockSourceRK8BlockPosf
    void getCloudColor(float); // _ZN9Dimension13getCloudColorEf
    void getStarBrightness(float); // _ZN9Dimension17getStarBrightnessEf
    void getId()const; // _ZNK9Dimension5getIdEv
    void getLevelConst()const; // _ZNK9Dimension13getLevelConstEv
    void getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD()const; // _ZNK9Dimension46getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEADEv
    void getCircuitSystem(); // _ZN9Dimension16getCircuitSystemEv
    void getTickingAreasConst()const; // _ZNK9Dimension20getTickingAreasConstEv
    void getTickingAreas(); // _ZN9Dimension15getTickingAreasEv
    void _onNewTickingEntity(Actor &); // _ZN9Dimension19_onNewTickingEntityER5Actor
    bool processTickingAreaRemoves(); // _ZN9Dimension25processTickingAreaRemovesEv
    bool processTickingAreaUpdates(); // _ZN9Dimension25processTickingAreaUpdatesEv
    void getEntityIdMapConst()const; // _ZNK9Dimension19getEntityIdMapConstEv
    void forEachPlayer(std::function<bool (Player const&)>)const; // _ZNK9Dimension13forEachPlayerESt8functionIFbRK6PlayerEE
    void findPlayer(std::function<bool (Player const&)>)const; // _ZNK9Dimension10findPlayerESt8functionIFbRK6PlayerEE
    void fetchNearestPlayer(Actor &, float); // _ZN9Dimension18fetchNearestPlayerER5Actorf
    void fetchNearestPlayer(float, float, float, float, bool); // _ZN9Dimension18fetchNearestPlayerEffffb
    void fetchNearestAttackablePlayer(BlockPos, float, Actor *); // _ZN9Dimension28fetchNearestAttackablePlayerE8BlockPosfP5Actor
    void fetchNearestAttackablePlayer(Actor &, float); // _ZN9Dimension28fetchNearestAttackablePlayerER5Actorf
    void distanceToNearestPlayerSqr2D(Vec3); // _ZN9Dimension28distanceToNearestPlayerSqr2DE4Vec3
    void _registerEntity(Actor &); // _ZN9Dimension15_registerEntityER5Actor
    void _unregisterEntity(Actor &); // _ZN9Dimension17_unregisterEntityER5Actor
    void flagEntityforChunkMove(Actor &); // _ZN9Dimension22flagEntityforChunkMoveER5Actor
    void fetchEntity(ActorUniqueID, bool); // _ZN9Dimension11fetchEntityE13ActorUniqueIDb
    void transferEntity(Vec3 const&, std::unique_ptr<CompoundTag>); // _ZN9Dimension14transferEntityERK4Vec3St10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    void _completeEntityTransfer(BlockSource &, std::unique_ptr<Actor>); // _ZN9Dimension23_completeEntityTransferER11BlockSourceSt10unique_ptrI5ActorSt14default_deleteIS3_EE
    void onChunkDiscarded(LevelChunk &); // _ZN9Dimension16onChunkDiscardedER10LevelChunk
    void tryAssignNewRegionAt(ChunkPos const&, Actor &); // _ZN9Dimension20tryAssignNewRegionAtERK8ChunkPosR5Actor
//  void upgradeOldLimboEntity(CompoundTag &, LimboEntitiesVersion); //TODO: incomplete function definition // _ZN9Dimension21upgradeOldLimboEntityER11CompoundTag20LimboEntitiesVersion
    void sendPacketForPosition(BlockPos const&, Packet const&, Player const*); // _ZN9Dimension21sendPacketForPositionERK8BlockPosRK6PacketPK6Player
    bool isUltraWarm()const; // _ZNK9Dimension11isUltraWarmEv
    void setUltraWarm(bool); // _ZN9Dimension12setUltraWarmEb
    bool hasCeiling()const; // _ZNK9Dimension10hasCeilingEv
    void setCeiling(bool); // _ZN9Dimension10setCeilingEb
    bool hasSkylight()const; // _ZNK9Dimension11hasSkylightEv
    void setSkylight(bool); // _ZN9Dimension11setSkylightEb
    void sendPacketForEntity(Actor const&, Packet const&, Player const*); // _ZN9Dimension19sendPacketForEntityERK5ActorRK6PacketPK6Player
    void getBlockEventDispatcher(); // _ZN9Dimension23getBlockEventDispatcherEv
    void getBlockEventDispatcherConst()const; // _ZNK9Dimension28getBlockEventDispatcherConstEv
    void operator==(Dimension const&)const; // _ZNK9DimensioneqERKS_
};

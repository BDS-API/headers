#pragma once

#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include <memory>
#include "../bedrock/level/LevelListener.h"
#include <string>
#include "SavedData.h"
#include <functional>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/Brightness.h"


class Dimension : LevelListener, SavedData {

public:
    static long MOON_BRIGHTNESS_PER_PHASE;
    static long CurrentLimboEntitiesVersion;
    static long STRUCTURE_PRUNE_INTERVAL;

    virtual void getMaxFogEnd()const;
    virtual void startLeaveGame();
    virtual void tick();
    virtual void getSpawnYPosition()const;
    virtual void getDefaultBiome()const;
    virtual void getClearColorScale();
    virtual void init();
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void sendBroadcast(Packet const&, Player *);
    virtual void deserialize(CompoundTag const&);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual bool isNaturalDimension()const;
    virtual bool hasBedrockFog();
    virtual void onChunkLoaded(LevelChunk &);
    virtual void getTimeOfDay(int, float)const;
    virtual void getMaxFogStart()const;
    virtual void getSpawnPos()const;
    virtual bool hasGround()const;
    ~Dimension();
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void serialize(CompoundTag &)const;
    virtual void onLevelDestruction(std::string const&);
    virtual void mayRespawn()const;
    virtual void getCloudHeight()const;
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual void showSky()const;
    virtual void updateLightRamp();
    virtual void tickRedstone();
    virtual void getFogColor(float)const;
    virtual bool isValidSpawn(int, int)const;
    virtual bool isDay()const;
    virtual bool isFoggyAt(int, int)const;
    void sendPacketForEntity(Actor const&, Packet const&, Player const*);
    void _unregisterEntity(Actor &);
    void getTickingAreasConst()const;
    void setCeiling(bool);
    void fetchNearestAttackablePlayer(Actor &, float);
    void setBrightnessRamp(unsigned int, float);
    bool processTickingAreaUpdates();
    void getChunkBuildOrderPolicy();
    void _tickEntityChunkMoves();
    void transferEntity(Vec3 const&, std::unique_ptr<CompoundTag>);
    void onChunkDiscarded(LevelChunk &);
    bool hasWeather()const;
//  Dimension(Level &, AutomaticID<Dimension, int>, short, Scheduler &, std::string); //TODO: incomplete function definition
    void getSunriseColor(float)const;
    void tryGarbageCollectStructures();
    void getSunlightDirection(float)const;
    void fetchEntity(ActorUniqueID, bool);
    bool isRedstoneTick();
    void getTickingAreas();
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void getBlockEventDispatcherConst()const;
    bool processTickingAreaRemoves();
    void _onNewTickingEntity(Actor &);
    void getId()const;
    void addWither(ActorUniqueID const&);
    void removeWither(ActorUniqueID const&);
    std::string getName()const;
    bool hasCeiling()const;
    void getPostProcessingManager();
    void setHasWeather(bool);
    void _completeEntityTransfer(BlockSource &, std::unique_ptr<Actor>);
    void getMoonPhase()const;
    void getPopCap(int, bool)const;
    void getDefaultBrightness()const;
    void getSkyColor(BlockSource &, BlockPos const&, float)const;
    void getWeather()const;
    void getMoonBrightness()const;
    bool isLeaveGameDone();
    void flagEntityforChunkMove(Actor &);
    void getWorldGenerator()const;
    void getHeight()const;
    bool isUltraWarm()const;
    void _registerEntity(Actor &);
    void getBrightnessRamp()const;
    void forEachPlayer(std::function<bool (Player &)>);
    void getTaskGroup();
    void getCloudColor(float);
    void getSkyColor(Actor const&, float)const;
    void getSkyDarken(float)const;
    void getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD()const;
    void distanceToNearestPlayerSqr2D(Vec3);
//  void upgradeOldLimboEntity(CompoundTag &, LimboEntitiesVersion); //TODO: incomplete function definition
    void getSunAngle(float)const;
    void getEntityIdMapConst()const;
    void getSeaLevel()const;
    void getEntityIdMap()const;
    void backgroundTickSeasons();
    void fetchNearestPlayer(Actor &, float);
    bool hasSkylight()const;
    void findPlayer(std::function<bool (Player const&)>)const;
    void getLevelChunkGarbageCollector();
    void fetchNearestPlayer(float, float, float, float, bool);
    void forceSaveVillageManager();
    void getBlockEventDispatcher();
    void getVillageManager()const;
    void getChunkSource()const;
    void operator==(Dimension const&)const;
    void getLevelChunkGarbageCollector()const;
    void fetchNearestAttackablePlayer(BlockPos, float, Actor *);
    void getCircuitSystem();
    void sendPacketForPosition(BlockPos const&, Packet const&, Player const*);
    void getLevelConst()const;
    void getSkyDarken()const;
    void removeActorByID(ActorUniqueID const&);
    void setSkylight(bool);
    void getLevel()const;
    void getStarBrightness(float);
    void getSeasons();
    void _runChunkGenerationWatchdog();
    void _captureChunkMapDebugDrawData();
    void getLevelChunkBuilderData();
    void tryAssignNewRegionAt(ChunkPos const&, Actor &);
    void forEachPlayer(std::function<bool (Player const&)>)const;
    void setUltraWarm(bool);
    void getTimeOfDay(float)const;
    void transferEntityToUnloadedChunk(Vec3 const&, std::unique_ptr<CompoundTag>);
    void getOldSkyDarken(float);
};

#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/network/packet/Packet.h"
#include "../bedrock/util/ChunkPos.h"
#include "Block.h"
#include "../bedrock/level/LevelChunk.h"
#include <memory>
#include <string>
#include "../bedrock/util/Vec3.h"
#include <functional>
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/level/LevelListener.h"
#include "../bedrock/actor/unmapped/ActorBlockSyncMessage.h"
#include "../bedrock/Scheduler.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Brightness.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "SavedData.h"


class Dimension : LevelListener, SavedData {

public:
    static long MOON_BRIGHTNESS_PER_PHASE;
    static long CurrentLimboEntitiesVersion;
    static long STRUCTURE_PRUNE_INTERVAL;

    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual bool isValidSpawn(int, int)const;
    virtual void mayRespawn()const;
    virtual bool hasBedrockFog();
    virtual bool isFoggyAt(int, int)const;
    virtual void updateLightRamp();
    virtual void startLeaveGame();
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual void getCloudHeight()const;
    virtual void deserialize(CompoundTag const&);
    virtual void getDefaultBiome()const;
    virtual void init();
    virtual void getTimeOfDay(int, float)const;
    virtual void getMaxFogStart()const;
    virtual void getClearColorScale();
    virtual void getFogColor(float)const;
    virtual void tickRedstone();
    virtual void onLevelDestruction(std::string const&);
    virtual void getSpawnPos()const;
    virtual bool isDay()const;
    virtual void getSpawnYPosition()const;
    ~Dimension();
    virtual void tick();
    virtual void getMaxFogEnd()const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void sendBroadcast(Packet const&, Player *);
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void showSky()const;
    virtual bool isNaturalDimension()const;
    virtual bool hasGround()const;
    virtual void serialize(CompoundTag &)const;
    bool hasCeiling()const;
    void forceSaveVillageManager();
    void getPostProcessingManager();
    void onChunkDiscarded(LevelChunk &);
    void operator==(Dimension const&)const;
    void getMoonPhase()const;
    void transferEntityToUnloadedChunk(Vec3 const&, std::unique_ptr<CompoundTag>);
    void getBrightnessRamp()const;
    void getHeight()const;
    void getLevelChunkBuilderData();
    void getCircuitSystem();
    void _registerEntity(Actor &);
    void getTickingAreasConst()const;
    void sendPacketForEntity(Actor const&, Packet const&, Player const*);
    void getBlockEventDispatcher();
    void forEachPlayer(std::function<bool (Player &)>);
    void getChunkSource()const;
    void removeActorByID(ActorUniqueID const&);
    void getSunlightDirection(float)const;
    void _onNewTickingEntity(Actor &);
    void _runChunkGenerationWatchdog();
    void getMoonBrightness()const;
    void backgroundTickSeasons();
    void flagEntityforChunkMove(Actor &);
    void _completeEntityTransfer(BlockSource &, std::unique_ptr<Actor>);
    bool hasWeather()const;
    void setHasWeather(bool);
    void getSeasons();
    void getTickingAreas();
    void getSunriseColor(float)const;
    void getPopCap(int, bool)const;
    void setCeiling(bool);
    void getEntityIdMapConst()const;
    bool hasSkylight()const;
    void fetchEntity(ActorUniqueID, bool);
    void getBlockEventDispatcherConst()const;
    void _tickEntityChunkMoves();
    void setUltraWarm(bool);
    void getId()const;
    void getSkyColor(Actor const&, float)const;
    void distanceToNearestPlayerSqr2D(Vec3);
    void fetchNearestAttackablePlayer(Actor &, float);
    void getChunkBuildOrderPolicy();
    void tryGarbageCollectStructures();
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void setSkylight(bool);
    void getSkyColor(BlockSource &, BlockPos const&, float)const;
    void setBrightnessRamp(unsigned int, float);
    void getLevelChunkGarbageCollector()const;
    void getSeaLevel()const;
    void getDefaultBrightness()const;
    void tryAssignNewRegionAt(ChunkPos const&, Actor &);
    bool processTickingAreaRemoves();
    bool isUltraWarm()const;
    void findPlayer(std::function<bool (Player const&)>)const;
    void sendPacketForPosition(BlockPos const&, Packet const&, Player const*);
    void getCloudColor(float);
    std::string getName()const;
    void forEachPlayer(std::function<bool (Player const&)>)const;
    void getTaskGroup();
    void getStarBrightness(float);
    void getOldSkyDarken(float);
    void getLevel()const;
    void fetchNearestAttackablePlayer(BlockPos, float, Actor *);
    void getTimeOfDay(float)const;
    bool processTickingAreaUpdates();
    void removeWither(ActorUniqueID const&);
//  void upgradeOldLimboEntity(CompoundTag &, LimboEntitiesVersion); //TODO: incomplete function definition
    void getSkyDarken()const;
    void getEntityIdMap()const;
    bool isLeaveGameDone();
    void getLevelChunkGarbageCollector();
    void addWither(ActorUniqueID const&);
    void getVillageManager()const;
    void getWeather()const;
    void getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD()const;
    void getLevelConst()const;
    void fetchNearestPlayer(Actor &, float);
    void fetchNearestPlayer(float, float, float, float, bool);
    bool isRedstoneTick();
    void getSkyDarken(float)const;
    void getWorldGenerator()const;
    void getSunAngle(float)const;
    void transferEntity(Vec3 const&, std::unique_ptr<CompoundTag>);
//  Dimension(Level &, AutomaticID<Dimension, int>, short, Scheduler &, std::string); //TODO: incomplete function definition
    void _unregisterEntity(Actor &);
    void _captureChunkMapDebugDrawData();
};

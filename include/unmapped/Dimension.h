#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Player"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/Brightness"
#include "../bedrock/actor/unmapped/ActorBlockSyncMessage"
#include "../bedrock/level/Level"
#include "../bedrock/level/LevelChunk"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/ChunkPos"
#include "../bedrock/actor/Actor"
#include "../bedrock/network/packet/Packet"
#include "../bedrock/Scheduler"
#include "../bedrock/level/LevelListener"


class Dimension : LevelListener, SavedData {

public:
    static long MOON_BRIGHTNESS_PER_PHASE;
    static long CurrentLimboEntitiesVersion;
    static long STRUCTURE_PRUNE_INTERVAL;

    virtual Dimension::~Dimension()
    virtual void onBlockChanged(BlockSource &, BlockPos const&, unsigned int, Block const&, Block const&, int, ActorBlockSyncMessage const*);
    virtual void onBlockEvent(BlockSource &, int, int, int, int, int);
    virtual void onNewChunk(BlockSource &, LevelChunk &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onLevelDestruction(std::string const&);
    virtual void init();
    virtual void tick();
    virtual void tickRedstone();
    virtual void updateLightRamp();
    virtual bool isNaturalDimension()const;
    virtual bool isValidSpawn(int, int)const;
    virtual void getFogColor(float)const;
    virtual void getMaxFogEnd()const;
    virtual void getMaxFogStart()const;
    virtual bool isFoggyAt(int, int)const;
    virtual void getCloudHeight()const;
    virtual void getDefaultBiome()const;
    virtual void mayRespawn()const;
    virtual bool hasGround()const;
    virtual void getSpawnPos()const;
    virtual void getSpawnYPosition()const;
    virtual bool hasBedrockFog();
    virtual void getClearColorScale();
    virtual void showSky()const;
    virtual bool isDay()const;
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;
    virtual void sendBroadcast(Packet const&, Player *);
    virtual void startLeaveGame();
    virtual void getTimeOfDay(int, float)const;

    void setHasWeather(bool);
    void getSeaLevel()const;
    void getPostProcessingManager();
    void getHeight()const;
    void getChunkBuildOrderPolicy();
    void getTaskGroup();
    void getDefaultBrightness()const;
    bool hasWeather()const;
    void getLevelChunkBuilderData();
    void getLevelChunkGarbageCollector()const;
    void getLevelChunkGarbageCollector();
    Dimension(Level &, AutomaticID<Dimension, int>, short, Scheduler &, std::string);
    bool isRedstoneTick();
    void addWither(ActorUniqueID const&);
    void removeWither(ActorUniqueID const&);
    void removeActorByID(ActorUniqueID const&);
    void getEntityIdMap()const;
    void getPopCap(int, bool)const;
    void updateBlockLight(BlockPos const&, Brightness, Brightness, Brightness, Brightness, bool);
    void backgroundTickSeasons();
    void getLevel()const;
    void forEachPlayer(std::function<bool ()(Player &)>);
    bool isLeaveGameDone();
    void getChunkSource()const;
    void getVillageManager()const;
    void forceSaveVillageManager();
    void tryGarbageCollectStructures();
    void getWorldGenerator()const;
    void getOldSkyDarken(float);
    void _tickEntityChunkMoves();
    void _runChunkGenerationWatchdog();
    void _captureChunkMapDebugDrawData();
    void transferEntityToUnloadedChunk(Vec3 const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void getSeasons();
    void getTimeOfDay(float)const;
    void getSunAngle(float)const;
    void getSunlightDirection(float)const;
    void getWeather()const;
    void getMoonPhase()const;
    void getMoonBrightness()const;
    void getSkyDarken(float)const;
    void getSkyDarken()const;
    void getBrightnessRamp()const;
    void setBrightnessRamp(unsigned int, float);
    void getSunriseColor(float)const;
    void getSkyColor(Actor const&, float)const;
    void getSkyColor(BlockSource &, BlockPos const&, float)const;
    void getCloudColor(float);
    void getStarBrightness(float);
    void getId()const;
    void getLevelConst()const;
    void getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD()const;
    void getCircuitSystem();
    void getTickingAreasConst()const;
    void getTickingAreas();
    void _onNewTickingEntity(Actor &);
    bool processTickingAreaRemoves();
    bool processTickingAreaUpdates();
    void getEntityIdMapConst()const;
    void forEachPlayer(std::function<bool ()(Player const&)>)const;
    void findPlayer(std::function<bool ()(Player const&)>)const;
    void fetchNearestPlayer(Actor &, float);
    void fetchNearestPlayer(float, float, float, float, bool);
    void fetchNearestAttackablePlayer(BlockPos, float, Actor *);
    void fetchNearestAttackablePlayer(Actor &, float);
    void distanceToNearestPlayerSqr2D(Vec3);
    void _registerEntity(Actor &);
    void _unregisterEntity(Actor &);
    void flagEntityforChunkMove(Actor &);
    void fetchEntity(ActorUniqueID, bool);
    void transferEntity(Vec3 const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void _completeEntityTransfer(BlockSource &, std::unique_ptr<Actor, std::default_delete<Actor>>);
    void onChunkDiscarded(LevelChunk &);
    void tryAssignNewRegionAt(ChunkPos const&, Actor &);
    void upgradeOldLimboEntity(CompoundTag &, LimboEntitiesVersion);
    void sendPacketForPosition(BlockPos const&, Packet const&, Player const*);
    bool isUltraWarm()const;
    void setUltraWarm(bool);
    bool hasCeiling()const;
    void setCeiling(bool);
    bool hasSkylight()const;
    void setSkylight(bool);
    void sendPacketForEntity(Actor const&, Packet const&, Player const*);
    void getBlockEventDispatcher();
    void getBlockEventDispatcherConst()const;
};

#pragma once

#include "../bedrock/level/chunksource/ChunkViewSource.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include <tuple>
#include "../bedrock/util/ChunkPos.h"
#include <vector>
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/actor/EnderCrystal.h"
#include "../bedrock/actor/EnderDragon.h"
#include "../bedrock/block/actor/EndGatewayBlockActor.h"


class EndDragonFight {

public:
    class GateWayGenerator;

    static long ARENA_SIZE_CHUNKS;
    static long GATEWAY_CHUNK_RADIUS;
    static long GATEWAY_COUNT;
    static long GATEWAY_DISTANCE;
    static long GATEWAY_HEIGHT;
    static long TIME_BETWEEN_CRYSTAL_SCANS;
    static long TIME_BETWEEN_PLAYER_SCANS;
    static long TIME_BETWEEN_PORTAL_SCANS;

    void _makeEndIslandFeature(BlockSource &, BlockPos);
//  void _verifyExitPositionsTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &); //TODO: incomplete function definition
    void _hasExitPortal()const;
    void saveData(CompoundTag &);
    ~EndDragonFight();
    void verifyExitPositions(EndGatewayBlockActor &);
    void _setEndGatewayExitPositions();
    void _placeAndLinkNewGatewayPair();
//  void _setRespawnStage(RespawnAnimation); //TODO: incomplete function definition
    void resetSpikeCrystals()const;
    void tick();
//  void _spawnNewGatewayChunksTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &); //TODO: incomplete function definition
    void _findExitPortal();
    EndDragonFight(BlockSource &);
    void _areaIsLoaded(ChunkPos const&, ChunkViewSource &, int)const;
    void _tickRespawnAnimation(std::vector<ActorUniqueID> const&, int);
    void _dragonAndPortalChunksLoaded()const;
    bool hasPreviouslyKilledDragon();
    void setDragonKilled(EnderDragon &);
    void loadData(CompoundTag const&);
    void spawnNewGatewayChunks(BlockPos const&, bool, bool);
    void _spawnNewGatewayPair();
    void tryRespawn();
    void getCrystalsAlive()const;
    void _assignAndExecuteNextGatewayTask();
    void _canSpawnNewGateway(ChunkViewSource *, BlockPos const&)const;
    void _respawnDragon(std::vector<ActorUniqueID> const&);
    void _createNewDragon();
    void _setEndGatewayBlockActorExitPosition(BlockSource &, BlockSource &, BlockPos const&, BlockPos const&, bool);
    void _spawnExitPortal(bool);
    void _updateCrystalCount();
    void onCrystalDestroyed(EnderCrystal const&, ActorDamageSource const&);
    class GateWayGenerator {

    public:
        GateWayGenerator(EndDragonFight::GateWayGenerator &&);
        GateWayGenerator();
        GateWayGenerator(bool, std::unique_ptr<ChunkViewSource>, BlockPos);
        ~GateWayGenerator();
    };
};

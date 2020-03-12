#pragma once

#include <memory>
#include <tuple>
#include <vector>
#include "../bedrock/util/BlockPos.h"


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

    void _setEndGatewayExitPositions();
    void _createNewDragon();
    void _spawnExitPortal(bool);
    void _verifyExitPositionsTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &);
    void verifyExitPositions(EndGatewayBlockActor &);
    void tick();
    EndDragonFight(BlockSource &);
    void tryRespawn();
    void _spawnNewGatewayChunksTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &);
    void _setEndGatewayBlockActorExitPosition(BlockSource &, BlockSource &, BlockPos const&, BlockPos const&, bool);
    void _hasExitPortal()const;
    void _makeEndIslandFeature(BlockSource &, BlockPos);
    void _tickRespawnAnimation(std::vector<ActorUniqueID> const&, int);
    void resetSpikeCrystals()const;
    void _spawnNewGatewayPair();
    void _assignAndExecuteNextGatewayTask();
    void onCrystalDestroyed(EnderCrystal const&, ActorDamageSource const&);
    void _respawnDragon(std::vector<ActorUniqueID> const&);
    void setDragonKilled(EnderDragon &);
    void saveData(CompoundTag &);
    bool hasPreviouslyKilledDragon();
    void _dragonAndPortalChunksLoaded()const;
    void _areaIsLoaded(ChunkPos const&, ChunkViewSource &, int)const;
    void loadData(CompoundTag const&);
    void _canSpawnNewGateway(ChunkViewSource *, BlockPos const&)const;
    void _findExitPortal();
//  void _setRespawnStage(RespawnAnimation); //TODO: incomplete function definition
    void _updateCrystalCount();
    void getCrystalsAlive()const;
    void _placeAndLinkNewGatewayPair();
    void spawnNewGatewayChunks(BlockPos const&, bool, bool);
    ~EndDragonFight();
    class GateWayGenerator {

    public:
        ~GateWayGenerator();
        GateWayGenerator();
        GateWayGenerator(EndDragonFight::GateWayGenerator &&);
        GateWayGenerator(bool, std::unique_ptr<ChunkViewSource>, BlockPos);
    };
};

#pragma once

class EndDragonFight {

public:
    static long EndDragonFight::ARENA_SIZE_CHUNKS;
    static long EndDragonFight::GATEWAY_CHUNK_RADIUS;
    static long EndDragonFight::GATEWAY_COUNT;
    static long EndDragonFight::GATEWAY_DISTANCE;
    static long EndDragonFight::GATEWAY_HEIGHT;
    static long EndDragonFight::TIME_BETWEEN_CRYSTAL_SCANS;
    static long EndDragonFight::TIME_BETWEEN_PLAYER_SCANS;
    static long EndDragonFight::TIME_BETWEEN_PORTAL_SCANS;


    void EndDragonFight(BlockSource &);
    void loadData(CompoundTag const&);
    void _setRespawnStage(RespawnAnimation);
    void saveData(CompoundTag &);
    void tick(void);
    void _assignAndExecuteNextGatewayTask(void);
    void _canSpawnNewGateway(ChunkViewSource *, BlockPos const&)const;
    void _placeAndLinkNewGatewayPair(void);
    void _setEndGatewayExitPositions(void);
    void _dragonAndPortalChunksLoaded(void)const;
    void tryRespawn(void);
    void _tickRespawnAnimation(std::vector<ActorUniqueID, std::allocator<ActorUniqueID>> const&, int);
    void _createNewDragon(void);
    void _spawnExitPortal(bool);
    void _updateCrystalCount(void);
    void _hasExitPortal(void)const;
    void _findExitPortal(void);
    void setDragonKilled(EnderDragon &);
    void _spawnNewGatewayPair(void);
    void spawnNewGatewayChunks(BlockPos const&, bool, bool);
    void _spawnNewGatewayChunksTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &);
    void verifyExitPositions(EndGatewayBlockActor &);
    void _verifyExitPositionsTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &);
    void _makeEndIslandFeature(BlockSource &, BlockPos);
    void _setEndGatewayBlockActorExitPosition(BlockSource &, BlockSource &, BlockPos const&, BlockPos const&, bool);
    void _areaIsLoaded(ChunkPos const&, ChunkViewSource &, int)const;
    void getCrystalsAlive(void)const;
    void onCrystalDestroyed(EnderCrystal const&, ActorDamageSource const&);
    void resetSpikeCrystals(void)const;
    bool hasPreviouslyKilledDragon(void);
    void _respawnDragon(std::vector<ActorUniqueID, std::allocator<ActorUniqueID>> const&);
};

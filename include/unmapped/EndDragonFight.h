#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/block/actor/EndGatewayBlockActor"
#include "../bedrock/level/chunksource/ChunkViewSource"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/ChunkPos"
#include "../bedrock/actor/EnderCrystal"
#include "../bedrock/actor/unmapped/ActorUniqueID"
#include "../bedrock/actor/EnderDragon"


class EndDragonFight {

public:
    static long ARENA_SIZE_CHUNKS;
    static long GATEWAY_CHUNK_RADIUS;
    static long GATEWAY_COUNT;
    static long GATEWAY_DISTANCE;
    static long GATEWAY_HEIGHT;
    static long TIME_BETWEEN_CRYSTAL_SCANS;
    static long TIME_BETWEEN_PLAYER_SCANS;
    static long TIME_BETWEEN_PORTAL_SCANS;


    EndDragonFight(BlockSource &);
    void loadData(CompoundTag const&);
    void _setRespawnStage(RespawnAnimation);
    void saveData(CompoundTag &);
    void tick();
    void _assignAndExecuteNextGatewayTask();
    void _canSpawnNewGateway(ChunkViewSource *, BlockPos const&)const;
    void _placeAndLinkNewGatewayPair();
    void _setEndGatewayExitPositions();
    void _dragonAndPortalChunksLoaded()const;
    void tryRespawn();
    void _tickRespawnAnimation(std::vector<ActorUniqueID, std::allocator<ActorUniqueID>> const&, int);
    void _createNewDragon();
    void _spawnExitPortal(bool);
    void _updateCrystalCount();
    void _hasExitPortal()const;
    void _findExitPortal();
    void setDragonKilled(EnderDragon &);
    void _spawnNewGatewayPair();
    void spawnNewGatewayChunks(BlockPos const&, bool, bool);
    void _spawnNewGatewayChunksTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &);
    void verifyExitPositions(EndGatewayBlockActor &);
    void _verifyExitPositionsTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &);
    void _makeEndIslandFeature(BlockSource &, BlockPos);
    void _setEndGatewayBlockActorExitPosition(BlockSource &, BlockSource &, BlockPos const&, BlockPos const&, bool);
    void _areaIsLoaded(ChunkPos const&, ChunkViewSource &, int)const;
    void getCrystalsAlive()const;
    void onCrystalDestroyed(EnderCrystal const&, ActorDamageSource const&);
    void resetSpikeCrystals()const;
    bool hasPreviouslyKilledDragon();
    void _respawnDragon(std::vector<ActorUniqueID, std::allocator<ActorUniqueID>> const&);
};

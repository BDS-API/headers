#pragma once

#include <memory>
#include "../bedrock/util/BlockPos.h"
#include <vector>
#include <tuple>


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

    EndDragonFight(BlockSource &); // _ZN14EndDragonFightC2ER11BlockSource
    void loadData(CompoundTag const&); // _ZN14EndDragonFight8loadDataERK11CompoundTag
//  void _setRespawnStage(RespawnAnimation); //TODO: incomplete function definition // _ZN14EndDragonFight16_setRespawnStageE16RespawnAnimation
    void saveData(CompoundTag &); // _ZN14EndDragonFight8saveDataER11CompoundTag
    void tick(); // _ZN14EndDragonFight4tickEv
    void _assignAndExecuteNextGatewayTask(); // _ZN14EndDragonFight32_assignAndExecuteNextGatewayTaskEv
    void _canSpawnNewGateway(ChunkViewSource *, BlockPos const&)const; // _ZNK14EndDragonFight19_canSpawnNewGatewayEP15ChunkViewSourceRK8BlockPos
    void _placeAndLinkNewGatewayPair(); // _ZN14EndDragonFight27_placeAndLinkNewGatewayPairEv
    void _setEndGatewayExitPositions(); // _ZN14EndDragonFight27_setEndGatewayExitPositionsEv
    void _dragonAndPortalChunksLoaded()const; // _ZNK14EndDragonFight28_dragonAndPortalChunksLoadedEv
    void tryRespawn(); // _ZN14EndDragonFight10tryRespawnEv
    void _tickRespawnAnimation(std::vector<ActorUniqueID> const&, int); // _ZN14EndDragonFight21_tickRespawnAnimationERKSt6vectorI13ActorUniqueIDSaIS1_EEi
    void _createNewDragon(); // _ZN14EndDragonFight16_createNewDragonEv
    void _spawnExitPortal(bool); // _ZN14EndDragonFight16_spawnExitPortalEb
    void _updateCrystalCount(); // _ZN14EndDragonFight19_updateCrystalCountEv
    void _hasExitPortal()const; // _ZNK14EndDragonFight14_hasExitPortalEv
    void _findExitPortal(); // _ZN14EndDragonFight15_findExitPortalEv
    void setDragonKilled(EnderDragon &); // _ZN14EndDragonFight15setDragonKilledER11EnderDragon
    void _spawnNewGatewayPair(); // _ZN14EndDragonFight20_spawnNewGatewayPairEv
    void spawnNewGatewayChunks(BlockPos const&, bool, bool); // _ZN14EndDragonFight21spawnNewGatewayChunksERK8BlockPosbb
    void _spawnNewGatewayChunksTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &); // _ZN14EndDragonFight26_spawnNewGatewayChunksTaskERSt5tupleIJNS_11GatewayTaskENS_16GateWayGeneratorES2_EE
    void verifyExitPositions(EndGatewayBlockActor &); // _ZN14EndDragonFight19verifyExitPositionsER20EndGatewayBlockActor
    void _verifyExitPositionsTask(std::tuple<EndDragonFight::GatewayTask, EndDragonFight::GateWayGenerator, EndDragonFight::GateWayGenerator> &); // _ZN14EndDragonFight24_verifyExitPositionsTaskERSt5tupleIJNS_11GatewayTaskENS_16GateWayGeneratorES2_EE
    void _makeEndIslandFeature(BlockSource &, BlockPos); // _ZN14EndDragonFight21_makeEndIslandFeatureER11BlockSource8BlockPos
    void _setEndGatewayBlockActorExitPosition(BlockSource &, BlockSource &, BlockPos const&, BlockPos const&, bool); // _ZN14EndDragonFight36_setEndGatewayBlockActorExitPositionER11BlockSourceS1_RK8BlockPosS4_b
    void _areaIsLoaded(ChunkPos const&, ChunkViewSource &, int)const; // _ZNK14EndDragonFight13_areaIsLoadedERK8ChunkPosR15ChunkViewSourcei
    void getCrystalsAlive()const; // _ZNK14EndDragonFight16getCrystalsAliveEv
    void onCrystalDestroyed(EnderCrystal const&, ActorDamageSource const&); // _ZN14EndDragonFight18onCrystalDestroyedERK12EnderCrystalRK17ActorDamageSource
    void resetSpikeCrystals()const; // _ZNK14EndDragonFight18resetSpikeCrystalsEv
    bool hasPreviouslyKilledDragon(); // _ZN14EndDragonFight25hasPreviouslyKilledDragonEv
    void _respawnDragon(std::vector<ActorUniqueID> const&); // _ZN14EndDragonFight14_respawnDragonERKSt6vectorI13ActorUniqueIDSaIS1_EE
    ~EndDragonFight(); // _ZN14EndDragonFightD2Ev
    class GateWayGenerator {

    public:
        GateWayGenerator(); // _ZN14EndDragonFight16GateWayGeneratorC2Ev
        GateWayGenerator(bool, std::unique_ptr<ChunkViewSource>, BlockPos); // _ZN14EndDragonFight16GateWayGeneratorC2EbSt10unique_ptrI15ChunkViewSourceSt14default_deleteIS2_EE8BlockPos
        ~GateWayGenerator(); // _ZN14EndDragonFight16GateWayGeneratorD2Ev
        GateWayGenerator(EndDragonFight::GateWayGenerator &&); // _ZN14EndDragonFight16GateWayGeneratorC2EOS0_
    };
};

#pragma once

#include <memory>


class WanderingTraderScheduler {

public:
    static long DISTANCE_IN_BLOCKS_FROM_PLAYER;
    static long DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;
    static long DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;
    static long CHANCE_TO_SPAWN_IN_WILDERNESS;
    static long LENGTH_OF_DAY_IN_TICKS;
    static long CHANCE_TO_SPAWN_PER_DAY;

    WanderingTraderScheduler(Level &); // _ZN24WanderingTraderSchedulerC2ER5Level
    void readSaveData(); // _ZN24WanderingTraderScheduler12readSaveDataEv
    ~WanderingTraderScheduler(); // _ZN24WanderingTraderSchedulerD2Ev
    void tick(); // _ZN24WanderingTraderScheduler4tickEv
    void _isTimeToTestIfSpawning(); // _ZN24WanderingTraderScheduler23_isTimeToTestIfSpawningEv
    void _testIfSpawning(); // _ZN24WanderingTraderScheduler15_testIfSpawningEv
    void _isTimeToSpawnWanderingTrader()const; // _ZNK24WanderingTraderScheduler29_isTimeToSpawnWanderingTraderEv
    void _getRandomPlayerInOverworld()const; // _ZNK24WanderingTraderScheduler27_getRandomPlayerInOverworldEv
    void _doesWanderingTraderExist()const; // _ZNK24WanderingTraderScheduler25_doesWanderingTraderExistEv
    void _canWanderingTraderBeMoved()const; // _ZNK24WanderingTraderScheduler26_canWanderingTraderBeMovedEv
    void _getSpawnPosFromNearestVillageToPlayerPos(BlockPos const&, BlockSource &); // _ZN24WanderingTraderScheduler41_getSpawnPosFromNearestVillageToPlayerPosERK8BlockPosR11BlockSource
    void _shouldWanderingTraderSpawnInWildernessNow()const; // _ZNK24WanderingTraderScheduler42_shouldWanderingTraderSpawnInWildernessNowEv
    void _getRandomWildernessPosAroundSpecifiedPos(BlockPos const&, BlockSource &); // _ZN24WanderingTraderScheduler41_getRandomWildernessPosAroundSpecifiedPosERK8BlockPosR11BlockSource
    void _canSpawnAtPosition(BlockPos const&, BlockSource &)const; // _ZNK24WanderingTraderScheduler19_canSpawnAtPositionERK8BlockPosR11BlockSource
    void _despawnManagedWanderingTrader(); // _ZN24WanderingTraderScheduler30_despawnManagedWanderingTraderEv
    void _spawnWanderingTraderAtPos(BlockPos const&, BlockSource &); // _ZN24WanderingTraderScheduler26_spawnWanderingTraderAtPosERK8BlockPosR11BlockSource
    void writeSaveData()const; // _ZNK24WanderingTraderScheduler13writeSaveDataEv
    bool isWanderingTraderCurrentlyManaged(Actor const&); // _ZN24WanderingTraderScheduler33isWanderingTraderCurrentlyManagedERK5Actor
    void _getSpawnChance(unsigned long)const; // _ZNK24WanderingTraderScheduler15_getSpawnChanceEm
    void _getRandomXZAroundPos(BlockPos const&, int, bool); // _ZN24WanderingTraderScheduler21_getRandomXZAroundPosERK8BlockPosib
    void _findClosestSpawnablePositionInColumn(BlockPos const&, BlockSource &); // _ZN24WanderingTraderScheduler37_findClosestSpawnablePositionInColumnERK8BlockPosR11BlockSource
    void _isPosSafeForSpawning(BlockPos const&, BlockSource &); // _ZN24WanderingTraderScheduler21_isPosSafeForSpawningERK8BlockPosR11BlockSource
    void _createWanderingTrader(BlockPos const&); // _ZN24WanderingTraderScheduler22_createWanderingTraderERK8BlockPos
    void _addWanderingTraderToLevel(std::unique_ptr<Actor>, BlockSource &); // _ZN24WanderingTraderScheduler26_addWanderingTraderToLevelESt10unique_ptrI5ActorSt14default_deleteIS1_EER11BlockSource
};

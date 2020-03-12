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

    ~WanderingTraderScheduler();
    bool isWanderingTraderCurrentlyManaged(Actor const&);
    void _createWanderingTrader(BlockPos const&);
    void _canWanderingTraderBeMoved()const;
    void writeSaveData()const;
    void _canSpawnAtPosition(BlockPos const&, BlockSource &)const;
    void _getRandomPlayerInOverworld()const;
    void _shouldWanderingTraderSpawnInWildernessNow()const;
    void _getRandomXZAroundPos(BlockPos const&, int, bool);
    void _spawnWanderingTraderAtPos(BlockPos const&, BlockSource &);
    void tick();
    void readSaveData();
    void _isPosSafeForSpawning(BlockPos const&, BlockSource &);
    void _getSpawnPosFromNearestVillageToPlayerPos(BlockPos const&, BlockSource &);
    void _despawnManagedWanderingTrader();
    void _testIfSpawning();
    void _getRandomWildernessPosAroundSpecifiedPos(BlockPos const&, BlockSource &);
    WanderingTraderScheduler(Level &);
    void _isTimeToSpawnWanderingTrader()const;
    void _doesWanderingTraderExist()const;
    void _isTimeToTestIfSpawning();
    void _addWanderingTraderToLevel(std::unique_ptr<Actor>, BlockSource &);
    void _getSpawnChance(unsigned long)const;
    void _findClosestSpawnablePositionInColumn(BlockPos const&, BlockSource &);
};

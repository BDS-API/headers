#pragma once

#include "../bedrock/level/Level.h"
#include "../bedrock/util/BlockPos.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/actor/Actor.h"


class WanderingTraderScheduler {

public:
    static long DISTANCE_IN_BLOCKS_FROM_PLAYER;
    static long DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;
    static long DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;
    static long CHANCE_TO_SPAWN_IN_WILDERNESS;
    static long LENGTH_OF_DAY_IN_TICKS;
    static long CHANCE_TO_SPAWN_PER_DAY;

    void _spawnWanderingTraderAtPos(BlockPos const&, BlockSource &);
    void tick();
    void _despawnManagedWanderingTrader();
    void _isTimeToTestIfSpawning();
    void _getRandomXZAroundPos(BlockPos const&, int, bool);
    void _shouldWanderingTraderSpawnInWildernessNow()const;
    void _getSpawnPosFromNearestVillageToPlayerPos(BlockPos const&, BlockSource &);
    WanderingTraderScheduler(Level &);
    void _testIfSpawning();
    void _isTimeToSpawnWanderingTrader()const;
    void writeSaveData()const;
    void _getRandomPlayerInOverworld()const;
    ~WanderingTraderScheduler();
    void _getRandomWildernessPosAroundSpecifiedPos(BlockPos const&, BlockSource &);
    bool isWanderingTraderCurrentlyManaged(Actor const&);
    void readSaveData();
    void _addWanderingTraderToLevel(std::unique_ptr<Actor>, BlockSource &);
    void _getSpawnChance(unsigned long)const;
    void _doesWanderingTraderExist()const;
    void _createWanderingTrader(BlockPos const&);
    void _canSpawnAtPosition(BlockPos const&, BlockSource &)const;
    void _findClosestSpawnablePositionInColumn(BlockPos const&, BlockSource &);
    void _isPosSafeForSpawning(BlockPos const&, BlockSource &);
    void _canWanderingTraderBeMoved()const;
};

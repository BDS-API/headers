#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/level/Level"
#include "../bedrock/util/BlockPos"


class WanderingTraderScheduler {

public:
    static long DISTANCE_IN_BLOCKS_FROM_PLAYER;
    static long DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;
    static long DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;
    static long CHANCE_TO_SPAWN_IN_WILDERNESS;
    static long LENGTH_OF_DAY_IN_TICKS;
    static long CHANCE_TO_SPAWN_PER_DAY;


    WanderingTraderScheduler(Level &);
    void readSaveData();
    void tick();
    void _isTimeToTestIfSpawning();
    void _testIfSpawning();
    void _isTimeToSpawnWanderingTrader()const;
    void _getRandomPlayerInOverworld()const;
    void _doesWanderingTraderExist()const;
    void _canWanderingTraderBeMoved()const;
    void _getSpawnPosFromNearestVillageToPlayerPos(BlockPos const&, BlockSource &);
    void _shouldWanderingTraderSpawnInWildernessNow()const;
    void _getRandomWildernessPosAroundSpecifiedPos(BlockPos const&, BlockSource &);
    void _canSpawnAtPosition(BlockPos const&, BlockSource &)const;
    void _despawnManagedWanderingTrader();
    void _spawnWanderingTraderAtPos(BlockPos const&, BlockSource &);
    void writeSaveData()const;
    bool isWanderingTraderCurrentlyManaged(Actor const&);
    void _getSpawnChance(unsigned long)const;
    void _getRandomXZAroundPos(BlockPos const&, int, bool);
    void _findClosestSpawnablePositionInColumn(BlockPos const&, BlockSource &);
    void _isPosSafeForSpawning(BlockPos const&, BlockSource &);
    void _createWanderingTrader(BlockPos const&);
    void _addWanderingTraderToLevel(std::unique_ptr<Actor, std::default_delete<Actor>>, BlockSource &);
};

#pragma once

#include <vector>
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include <string>
#include "../bedrock/level/LevelChunk.h"
#include <functional>


class Spawner {

public:
    static long SPAWN_RING_OFFSETS;

    ~Spawner(); // _ZN7SpawnerD2Ev
    void spawnMob(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, bool, bool, bool); // _ZN7Spawner8spawnMobER11BlockSourceRK25ActorDefinitionIdentifierP5ActorRK4Vec3bbb
    void spawnItem(BlockSource &, ItemStack const&, Actor *, Vec3 const&, int); // _ZN7Spawner9spawnItemER11BlockSourceRK9ItemStackP5ActorRK4Vec3i
    void spawnProjectile(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec3 const&); // _ZN7Spawner15spawnProjectileER11BlockSourceRK25ActorDefinitionIdentifierP5ActorRK4Vec3S9_
    Spawner(Level &); // _ZN7SpawnerC2ER5Level
    void popCapAllows(Dimension const&, MobSpawnerData const&, bool, bool)const; // _ZNK7Spawner12popCapAllowsERK9DimensionRK14MobSpawnerDatabb
    void spawnMobGroup(BlockSource &, std::string const&, Vec3 const&, bool, std::function<void (Mob &)> &&); // _ZN7Spawner13spawnMobGroupER11BlockSourceRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK4Vec3bOSt8functionIFvR3MobEE
    bool isSpawnPositionOk(MobSpawnRules const&, BlockSource &, BlockPos const&); // _ZN7Spawner17isSpawnPositionOkERK13MobSpawnRulesR11BlockSourceRK8BlockPos
    void _permuteId(ActorDefinitionIdentifier &, MobSpawnRules const&, Random &)const; // _ZNK7Spawner10_permuteIdER25ActorDefinitionIdentifierRK13MobSpawnRulesR6Random
    void _updateMobCounts(BlockSource &, ActorDefinitionIdentifier const&, SpawnConditions const&); // _ZN7Spawner16_updateMobCountsER11BlockSourceRK25ActorDefinitionIdentifierRK15SpawnConditions
    void _sendHerdEvents(MobSpawnHerdInfo const&, std::vector<Mob *> &)const; // _ZNK7Spawner15_sendHerdEventsERK16MobSpawnHerdInfoRSt6vectorIP3MobSaIS5_EE
    void _updateGroupPersistence(MobSpawnRules const&, std::vector<Mob *> &); // _ZN7Spawner23_updateGroupPersistenceERK13MobSpawnRulesRSt6vectorIP3MobSaIS5_EE
    void _spawnMobCluster(BlockSource &, BlockPos &, SpawnConditions &); // _ZN7Spawner16_spawnMobClusterER11BlockSourceR8BlockPosR15SpawnConditions
    void _handlePopulationCap(MobSpawnerData const*, SpawnConditions const&, int); // _ZN7Spawner20_handlePopulationCapEPK14MobSpawnerDataRK15SpawnConditionsi
    void _spawnMobInCluster(BlockSource &, ActorDefinitionIdentifier, BlockPos &, SpawnConditions &, std::vector<Mob *> &); // _ZN7Spawner18_spawnMobInClusterER11BlockSource25ActorDefinitionIdentifierR8BlockPosR15SpawnConditionsRSt6vectorIP3MobSaIS9_EE
    void _spawnStructureMob(BlockSource &, LevelChunk::HardcodedSpawningArea const&, SpawnConditions &); // _ZN7Spawner18_spawnStructureMobER11BlockSourceRKN10LevelChunk21HardcodedSpawningAreaER15SpawnConditions
    void _updateBaseTypeCount(BlockSource &, ChunkPos const&); // _ZN7Spawner20_updateBaseTypeCountER11BlockSourceRK8ChunkPos
    void tick(BlockSource &, LevelChunk &); // _ZN7Spawner4tickER11BlockSourceR10LevelChunk
    void tickDespawn(BlockSource &, LevelChunk &); // _ZN7Spawner11tickDespawnER11BlockSourceR10LevelChunk
    void postProcessSpawnMobs(BlockSource &, int, int, Random &); // _ZN7Spawner20postProcessSpawnMobsER11BlockSourceiiR6Random
};

#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include <vector>
#include <functional>


class Spawner {

public:
    static long SPAWN_RING_OFFSETS;

    void _spawnStructureMob(BlockSource &, LevelChunk::HardcodedSpawningArea const&, SpawnConditions &);
    void _updateGroupPersistence(MobSpawnRules const&, std::vector<Mob *> &);
    Spawner(Level &);
    void tickDespawn(BlockSource &, LevelChunk &);
    void popCapAllows(Dimension const&, MobSpawnerData const&, bool, bool)const;
    void _permuteId(ActorDefinitionIdentifier &, MobSpawnRules const&, Random &)const;
    bool isSpawnPositionOk(MobSpawnRules const&, BlockSource &, BlockPos const&);
    void _handlePopulationCap(MobSpawnerData const*, SpawnConditions const&, int);
    void spawnMob(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, bool, bool, bool);
    ~Spawner();
    void _spawnMobCluster(BlockSource &, BlockPos &, SpawnConditions &);
    void _updateBaseTypeCount(BlockSource &, ChunkPos const&);
    void spawnMobGroup(BlockSource &, std::string const&, Vec3 const&, bool, std::function<void (Mob &)> &&);
    void spawnProjectile(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec3 const&);
    void spawnItem(BlockSource &, ItemStack const&, Actor *, Vec3 const&, int);
    void _spawnMobInCluster(BlockSource &, ActorDefinitionIdentifier, BlockPos &, SpawnConditions &, std::vector<Mob *> &);
    void _updateMobCounts(BlockSource &, ActorDefinitionIdentifier const&, SpawnConditions const&);
    void _sendHerdEvents(MobSpawnHerdInfo const&, std::vector<Mob *> &)const;
    void tick(BlockSource &, LevelChunk &);
    void postProcessSpawnMobs(BlockSource &, int, int, Random &);
};

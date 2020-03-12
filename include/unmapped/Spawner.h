#pragma once

#include "../bedrock/level/Level.h"
#include "Dimension.h"
#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/level/LevelChunk.h"
#include "SpawnConditions.h"
#include <string>
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"
#include <functional>
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/util/Random.h"
#include "MobSpawnHerdInfo.h"
#include "MobSpawnRules.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include <vector>
#include "../bedrock/actor/Actor.h"
#include "MobSpawnerData.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


class Spawner {

public:
    static long SPAWN_RING_OFFSETS;

    ~Spawner();
    void _handlePopulationCap(MobSpawnerData const*, SpawnConditions const&, int);
    void _sendHerdEvents(MobSpawnHerdInfo const&, std::vector<Mob *> &)const;
    bool isSpawnPositionOk(MobSpawnRules const&, BlockSource &, BlockPos const&);
    void _permuteId(ActorDefinitionIdentifier &, MobSpawnRules const&, Random &)const;
    void spawnProjectile(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec3 const&);
    void tickDespawn(BlockSource &, LevelChunk &);
    void _spawnStructureMob(BlockSource &, LevelChunk::HardcodedSpawningArea const&, SpawnConditions &);
    void tick(BlockSource &, LevelChunk &);
    void _spawnMobCluster(BlockSource &, BlockPos &, SpawnConditions &);
    void _updateGroupPersistence(MobSpawnRules const&, std::vector<Mob *> &);
    void popCapAllows(Dimension const&, MobSpawnerData const&, bool, bool)const;
    void postProcessSpawnMobs(BlockSource &, int, int, Random &);
    void spawnItem(BlockSource &, ItemStack const&, Actor *, Vec3 const&, int);
    Spawner(Level &);
    void _updateBaseTypeCount(BlockSource &, ChunkPos const&);
    void _updateMobCounts(BlockSource &, ActorDefinitionIdentifier const&, SpawnConditions const&);
    void spawnMob(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, bool, bool, bool);
    void _spawnMobInCluster(BlockSource &, ActorDefinitionIdentifier, BlockPos &, SpawnConditions &, std::vector<Mob *> &);
    void spawnMobGroup(BlockSource &, std::string const&, Vec3 const&, bool, std::function<void (Mob &)> &&);
};

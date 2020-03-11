#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include <functional>
#include "../bedrock/util/Random.h"
#include "./Dimension.h"
#include "../bedrock/util/ChunkPos.h"
#include "./MobSpawnHerdInfo.h"
#include "./MobSpawnerData.h"
#include "./MobSpawnRules.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/level/Level.h"
#include "./HardcodedSpawningArea.h"
#include "../bedrock/util/BlockPos.h"
#include "./SpawnConditions.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"
#include "../bedrock/actor/Mob.h"
#include <vector>
#include "../bedrock/level/LevelChunk.h"
#include <string>


class Spawner {

public:
    static long SPAWN_RING_OFFSETS;


    ~Spawner();
    void spawnMob(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, bool, bool, bool);
    void spawnItem(BlockSource &, ItemStack const&, Actor *, Vec3 const&, int);
    void spawnProjectile(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec3 const&);
    Spawner(Level &);
    void popCapAllows(Dimension const&, MobSpawnerData const&, bool, bool)const;
//  void spawnMobGroup(BlockSource &, std::string const&, Vec3 const&, bool, std::function<void (Mob &)> &&); //TODO: incomplete function definition
    bool isSpawnPositionOk(MobSpawnRules const&, BlockSource &, BlockPos const&);
    void _permuteId(ActorDefinitionIdentifier &, MobSpawnRules const&, Random &)const;
    void _updateMobCounts(BlockSource &, ActorDefinitionIdentifier const&, SpawnConditions const&);
    void _sendHerdEvents(MobSpawnHerdInfo const&, std::vector<Mob *, std::allocator<Mob *>> &)const;
    void _updateGroupPersistence(MobSpawnRules const&, std::vector<Mob *, std::allocator<Mob *>> &);
    void _spawnMobCluster(BlockSource &, BlockPos &, SpawnConditions &);
    void _handlePopulationCap(MobSpawnerData const*, SpawnConditions const&, int);
    void _spawnMobInCluster(BlockSource &, ActorDefinitionIdentifier, BlockPos &, SpawnConditions &, std::vector<Mob *, std::allocator<Mob *>> &);
    void _spawnStructureMob(BlockSource &, LevelChunk::HardcodedSpawningArea const&, SpawnConditions &);
    void _updateBaseTypeCount(BlockSource &, ChunkPos const&);
    void tick(BlockSource &, LevelChunk &);
    void tickDespawn(BlockSource &, LevelChunk &);
    void postProcessSpawnMobs(BlockSource &, int, int, Random &);
};

#pragma once

class Spawner {

public:
    static long Spawner::SPAWN_RING_OFFSETS;


    void spawnMob(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, bool, bool, bool);
    void spawnItem(BlockSource &, ItemStack const&, Actor *, Vec3 const&, int);
    void spawnProjectile(BlockSource &, ActorDefinitionIdentifier const&, Actor *, Vec3 const&, Vec3 const&);
    void Spawner(Level &);
    void popCapAllows(Dimension const&, MobSpawnerData const&, bool, bool)const;
    void spawnMobGroup(BlockSource &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3 const&, bool, std::function<void ()(Mob &)> &&);
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

#pragma once



class MobSpawnerData {

public:
    MobSpawnerData(MobSpawnerData const&);
    MobSpawnerData(ActorDefinitionIdentifier const&, int, MobSpawnRules &);
    ~MobSpawnerData();
};

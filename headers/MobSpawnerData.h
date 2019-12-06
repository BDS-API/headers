#pragma once

class MobSpawnerData {

public:

    void MobSpawnerData(ActorDefinitionIdentifier const&, int, MobSpawnRules &);
    void MobSpawnerData(MobSpawnerData const&);
};

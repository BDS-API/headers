#pragma once

class MobSpawnerData {

public:

    MobSpawnerData(ActorDefinitionIdentifier const&, int, MobSpawnRules &);
    MobSpawnerData(MobSpawnerData const&);
};

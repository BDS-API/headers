#pragma once



class MobSpawnerData {

public:
    ~MobSpawnerData(); // _ZN14MobSpawnerDataD2Ev
    MobSpawnerData(ActorDefinitionIdentifier const&, int, MobSpawnRules &); // _ZN14MobSpawnerDataC2ERK25ActorDefinitionIdentifieriR13MobSpawnRules
    MobSpawnerData(MobSpawnerData const&); // _ZN14MobSpawnerDataC2ERKS_
};

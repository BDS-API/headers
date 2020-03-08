#pragma once



class HardcodedSpawnAreaRegistry {

public:

    HardcodedSpawnAreaRegistry(void);
    void initMobSpawnsForType(HardcodedSpawnAreaType, std::vector<MobSpawnerData, std::allocator<MobSpawnerData>> &&);
    void getMobSpawnsForType(HardcodedSpawnAreaType)const;
};

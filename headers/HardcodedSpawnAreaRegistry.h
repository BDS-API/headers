#pragma once

class HardcodedSpawnAreaRegistry {

public:

    void HardcodedSpawnAreaRegistry(void);
    void initMobSpawnsForType(HardcodedSpawnAreaType, std::vector<MobSpawnerData, std::allocator<MobSpawnerData>> &&);
    void getMobSpawnsForType(HardcodedSpawnAreaType)const;
};

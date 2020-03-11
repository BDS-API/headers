#pragma once

#include "./MobSpawnerData.h"
#include <memory>
#include <vector>


class HardcodedSpawnAreaRegistry {

public:

    ~HardcodedSpawnAreaRegistry();
    HardcodedSpawnAreaRegistry();
//  void initMobSpawnsForType(HardcodedSpawnAreaType, std::vector<MobSpawnerData, std::allocator<MobSpawnerData>> &&); //TODO: incomplete function definition
//  void getMobSpawnsForType(HardcodedSpawnAreaType)const; //TODO: incomplete function definition
};

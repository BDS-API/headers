#pragma once

#include "MobSpawnRules.h"
#include <string>


class SpawnGroupData {

public:
    std::string getIdentifier()const;
    void addSpawnRules(MobSpawnRules &);
    ~SpawnGroupData();
    SpawnGroupData(std::string const&, MobSpawnRules &);
    void getSpawnRules()const;
};

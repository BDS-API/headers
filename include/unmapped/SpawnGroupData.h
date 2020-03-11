#pragma once

#include "./MobSpawnRules.h"
#include <string>


class SpawnGroupData {

public:

    SpawnGroupData(std::string const&, MobSpawnRules &);
    void addSpawnRules(MobSpawnRules &);
    std::string getIdentifier()const;
    void getSpawnRules()const;
    ~SpawnGroupData();
};

#pragma once

#include <string>


class SpawnGroupData {

public:
    std::string getIdentifier()const;
    void getSpawnRules()const;
    void addSpawnRules(MobSpawnRules &);
    ~SpawnGroupData();
    SpawnGroupData(std::string const&, MobSpawnRules &);
};

#pragma once

class SpawnGroupData {

public:

    void SpawnGroupData(std::string const&, MobSpawnRules &);
    void addSpawnRules(MobSpawnRules &);
    void getSpawnRules(void)const;
};

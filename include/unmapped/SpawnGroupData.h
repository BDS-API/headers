#pragma once



class SpawnGroupData {

public:

    SpawnGroupData(std::string const&, MobSpawnRules &);
    void addSpawnRules(MobSpawnRules &);
    void getSpawnRules()const;
};

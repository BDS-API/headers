#pragma once



class MobSpawnHerdInfo {

public:

    MobSpawnHerdInfo(MobSpawnHerdInfo const&);
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int, std::string const&, unsigned int);
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int);
    MobSpawnHerdInfo(MobSpawnHerdInfo&&);
};

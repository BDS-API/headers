#pragma once

#include <string>


class MobSpawnHerdInfo {

public:
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int, std::string const&, unsigned int);
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int);
    MobSpawnHerdInfo(MobSpawnHerdInfo &&);
    MobSpawnHerdInfo(MobSpawnHerdInfo const&);
    ~MobSpawnHerdInfo();
};

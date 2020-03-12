#pragma once

#include <string>


class MobSpawnHerdInfo {

public:
    MobSpawnHerdInfo(MobSpawnHerdInfo &&);
    ~MobSpawnHerdInfo();
    MobSpawnHerdInfo(MobSpawnHerdInfo const&);
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int, std::string const&, unsigned int);
    MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int);
};

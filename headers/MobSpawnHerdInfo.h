#pragma once

class MobSpawnHerdInfo {

public:

    void MobSpawnHerdInfo(MobSpawnHerdInfo const&);
    void MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int, std::string const&, unsigned int);
    void MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int);
    void MobSpawnHerdInfo(MobSpawnHerdInfo&&);
};
